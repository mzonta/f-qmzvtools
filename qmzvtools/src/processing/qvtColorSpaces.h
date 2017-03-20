#ifndef QVTCOLORSPACES_H
#define QVTCOLORSPACES_H

// OpenCV
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
// Processing
#include "qvtProcessingFunctionInterface.h"

class qvtColorSpaces : public qvtProcessingFunctionInterface
{
public:
    qvtColorSpaces();
    void setFunctionCode(int conversionCode);
    void setDestinationChannels(int dstChannels);
    void processFunction(Mat &imSrc, Mat &imDst);

private:
    int code;
    int dstCn;
};

#endif // QVTCOLORSPACES_H
