#ifndef QVTFUNCTIONSINSTALLED_H
#define QVTFUNCTIONSINSTALLED_H

// Qt
#include <QDebug>
// OpenCV
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
// C++
#include <iostream>
// General
#include "../general/qvtTimer.h"
// Processing
#include "qvtMessagesBuffer.h"
#include "qvtProcessingFunctionInterface.h"
#include "qvtColorSpaces.h"

class qvtFunctionsInstalled
{
public:
    qvtFunctionsInstalled(qvtMessagesBuffer *messagesBuffer);
    void addFunction(FunctionID funID, string funLabel);
    int size();
    bool isEmpty();
    FunctionID getFunctionID(int fIndex);
    string getFunctionLabel(int fIndex);

    // - Color To Gray
    bool colorToGray(Mat &inMat, Mat &outMat);
    // - Color To HSV
    bool colorToHSV(Mat &inMat, Mat &outMat);

private:
    std::vector<sFun> functionsList;
    int indexFirst;
    int indexLast;
    qvtMessagesBuffer *messagesBuffer;
    void createList();

    // Processing Controller Objects
    qvtColorSpaces fColorSpaces;
    // Generic(Virtual) Processing Function Pointer
    qvtProcessingFunctionInterface *processingFunction;

    // Set Processing Function
    void setProcessingFunction(qvtProcessingFunctionInterface *functionPtr);
    // Processing Function Run
    bool processingFunctionRun(Mat &inMat, Mat &outMat);
    // Processing Controller Functions
    void processControllerMain();
};

#endif // QVTFUNCTIONSINSTALLED_H
