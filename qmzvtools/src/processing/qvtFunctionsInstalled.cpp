#include "qvtFunctionsInstalled.h"

qvtFunctionsInstalled::qvtFunctionsInstalled(qvtMessagesBuffer *messagesBuffer)
{
    this->messagesBuffer = messagesBuffer;
    indexFirst = 0;
    indexLast = -1;
    createList();
}

void qvtFunctionsInstalled::addFunction(FunctionID funID, string funLabel)
{
    ++indexLast;
    sFun newFunction;
    newFunction.functionID = funID;
    newFunction.functionLabel = funLabel;
    functionsList.push_back(newFunction);
}

int qvtFunctionsInstalled::size()
{
    int functionsListSize = 0;
    if (indexLast > indexFirst) {
        functionsListSize = indexLast - indexFirst + 1;
    }
    return functionsListSize;
}

bool qvtFunctionsInstalled::isEmpty()
{
    return (size() == 0);
}

FunctionID qvtFunctionsInstalled::getFunctionID(int fIndex)
{
    sFun tmpFun;
    tmpFun = functionsList[fIndex];
    return tmpFun.functionID;
}

string qvtFunctionsInstalled::getFunctionLabel(int fIndex)
{
    sFun tmpFun;
    tmpFun = functionsList[fIndex];
    return tmpFun.functionLabel;
}

void qvtFunctionsInstalled::createList()
{
    // None
    addFunction(NONE, FUN_NONE_LABEL);
    // RGB -> Gray
    addFunction(RGB_TO_GRAY, "RGB -> GRAY");
    // RGB -> HSV
    addFunction(RGB_TO_HSV, "RGB -> HSV");
    // TEST
    addFunction(AAA, "Test");
}

void qvtFunctionsInstalled::setProcessingFunction(qvtProcessingFunctionInterface *functionPtr)
{
    processingFunction = functionPtr;
}

bool qvtFunctionsInstalled::colorToGray(Mat &inMat, Mat &outMat)
{
    fColorSpaces.setFunctionCode(CV_BGR2GRAY);
    setProcessingFunction(&fColorSpaces);
    return processingFunctionRun(inMat, outMat);
}

bool qvtFunctionsInstalled::colorToHSV(Mat &inMat, Mat &outMat)
{
    fColorSpaces.setFunctionCode(CV_BGR2HSV);
    setProcessingFunction(&fColorSpaces);
    return processingFunctionRun(inMat, outMat);
}

bool qvtFunctionsInstalled::processingFunctionRun(Mat &inMat, Mat &outMat)
{
    qvtTimer pTimer;
    stringstream  msgBuffer;

    inMat.release();
    inMat = outMat.clone();
    outMat.release();

    if (inMat.channels() == 3) {
        processingFunction->processFunction(inMat, outMat);

        msgBuffer << "Image size: "
                  <<  outMat.cols << "x"
                  << outMat.rows << "x"
                  << outMat.channels() << "\n";
    }
    else {
        msgBuffer << "Image must have 3 channels RGB \n";
    }
    msgBuffer << "Time Elapsed: " << pTimer.elapsedTime() << "ms \n";
    messagesBuffer->addMessage(0,"qvtFunctionsInstalled", msgBuffer.str());

    return !outMat.empty();
}
