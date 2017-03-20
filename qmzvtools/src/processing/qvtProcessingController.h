#ifndef QVTPROCESSINGCONTROLLER_H
#define QVTPROCESSINGCONTROLLER_H

// C++
#include <iostream>
#include <sstream>
// OpenCV
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
// General
#include "../general/qvtStructures.h"
#include "../general/qvtConfig.h"
// Processing
#include "qvtMessagesBuffer.h"
#include "qvtFunctionsInstalled.h"
#include "qvtProcessingFunctionInterface.h"
#include "qvtFunctionsScheduler.h"
#include "qvtImagesBuffer.h"

class qvtProcessingController
{ 

public:
    qvtProcessingController();
    // Processing Controller Interface Functions
    // - Set source image file
    bool setImageFile(std::string);
    // - Set source image
    bool setSourceImage(const Mat &);
    // - Return current source image
    const Mat getSourceImage();
    // - Return current processing result image
    const Mat getResultImage();
    // - Messages Buffer: Initialization
    void createMessageBuffer();
    // - Return Messages Buffer
    qvtMessagesBuffer* getMessagesBuffer();
    // - Function List: Initialization
    void createFunctionsInstalled();
    // - Return Functions List
    qvtFunctionsInstalled* getFunctionsInstalled();
    // - Functions Scheduler: initialization
    void createFunctionsScheduler();
    // - Return Functions Scheduler
    qvtFunctionsScheduler* getFunctionsScheduler();
    // - Parsing Schedule
    void scheduleParsing();
    // - Images Buffer: initialization
    void createImagesBuffer();
    // - Return Images Buffer
    qvtImagesBuffer* getImagesBuffer();

public: // public slots:
    // - Reset Functions - Load Original Image
    void resetFunctions();
    // - Color To Gray
    void colorToGray();
    // - Color To HSV
    void colorToHSV();

private:
    // Processing Controller Functions

    // Processing Controller Data
    Mat imageSource;
    Mat imageResult;
    Mat imageTmp;
    // Processing Controller - Messages Buffer
    qvtMessagesBuffer *messagesBuffer;
    // Processing Controller - List of available Functions
    qvtFunctionsInstalled *functionsInstalled;
    // Processing Controller - Functions Scheduler
    qvtFunctionsScheduler *functionsScheduler;
    // Processing Controller - Images Buffer
    qvtImagesBuffer *imagesBuffer;

    // Add Image Result to Buffer
    void addImageToBuffer(Mat image);

};

#endif // QVTPROCESSINGCONTROLLER_H
