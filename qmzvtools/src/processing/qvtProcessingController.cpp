#include "qvtProcessingController.h"

qvtProcessingController::qvtProcessingController()
{
    // Create Messages Buffer
    createMessageBuffer();
    // Create Functions Installed List
    createFunctionsInstalled();
    // Create Functions Scheduler
    createFunctionsScheduler();
    // Create Images Buffer;
    createImagesBuffer();
}

bool qvtProcessingController::setImageFile(std::string imageFileToOpen)
{
    if (imageFileToOpen != "") {     
        Mat imageRead;
        imageRead = cv::imread(imageFileToOpen);
        return setSourceImage(imageRead);
    }
    else {
        return false;
    }
}

bool qvtProcessingController::setSourceImage(const Mat &image)
{
    imageSource = image;
    imageTmp = imageSource.clone();
    imageResult = imageTmp.clone();
    addImageToBuffer(imageResult);
    if (DEBUG_OPENCV_WINDOW) {
        cv::imshow(DEBUG_OPENCV_WINDOW_NAME, imageSource);
    }    
    return !imageSource.empty();
}

const Mat qvtProcessingController::getSourceImage()
{
    return imageSource;
}

const Mat qvtProcessingController::getResultImage()
{
    Mat imageRet;
    imageRet = imageResult.clone();
    return imageRet;
}

void qvtProcessingController::createMessageBuffer()
{
    messagesBuffer = new qvtMessagesBuffer();
}

qvtMessagesBuffer* qvtProcessingController::getMessagesBuffer()
{
    return messagesBuffer;
}

void qvtProcessingController::createFunctionsInstalled()
{
    functionsInstalled = new qvtFunctionsInstalled(messagesBuffer);
}

qvtFunctionsInstalled* qvtProcessingController::getFunctionsInstalled()
{
    return functionsInstalled;
}

void qvtProcessingController::createFunctionsScheduler()
{
    functionsScheduler = new qvtFunctionsScheduler(messagesBuffer);
}

qvtFunctionsScheduler* qvtProcessingController::getFunctionsScheduler()
{
    return functionsScheduler;
}

void qvtProcessingController::createImagesBuffer()
{
    imagesBuffer = new qvtImagesBuffer();
}

qvtImagesBuffer* qvtProcessingController::getImagesBuffer()
{
    return imagesBuffer;
}

void qvtProcessingController::resetFunctions()
{
    imageTmp = imageSource.clone();
    imageResult = imageSource.clone();
    addImageToBuffer(imageResult);
}

void qvtProcessingController::colorToGray()
{    
    functionsInstalled->colorToGray(imageTmp, imageResult);
    addImageToBuffer(imageResult);
}

void qvtProcessingController::colorToHSV()
{
    functionsInstalled->colorToHSV(imageTmp, imageResult);
    addImageToBuffer(imageResult);
}

void qvtProcessingController::addImageToBuffer(Mat image)
{
    if (!image.empty()) {
        imagesBuffer->addImage(image);
    }
}

void qvtProcessingController::scheduleParsing()
{
    stringstream msgBuffer;
    msgBuffer << "qvtFunctionsScheduler::scheduleParsing()" << "\n";
    qvtFunction *proFun;
    int indexFirst = functionsScheduler->getIndexFirst();
    int indexLast = functionsScheduler->getIndexLast();
    for (int i = indexFirst; i <= indexLast; ++i)
    {
        proFun = functionsScheduler->getFunction(i);
        sFun sFunction = proFun->getFunctionHeader();
        msgBuffer << "Function Header" << "\n"
                << "Function ID: " << sFunction.functionID << "\n"
                << "Function Label: " << sFunction.functionLabel << "\n";

        switch (sFunction.functionID) {
            case NONE: break;
            case RGB_TO_GRAY: colorToGray(); break;
            case RGB_TO_HSV:  colorToHSV(); break;
            case AAA: break;
        }

    }
    messagesBuffer->addMessage(0,"qvtFunctionsScheduler::scheduleParsing", msgBuffer.str());
}
