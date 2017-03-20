#include "qvtColorSpaces.h"

qvtColorSpaces::qvtColorSpaces()
{

}

void qvtColorSpaces::setFunctionCode(int conversionCode)
{
    code = conversionCode;
}

void qvtColorSpaces::setDestinationChannels(int dstChannels)
{
    dstCn = dstChannels;
}

void qvtColorSpaces::processFunction(Mat &imSrc, Mat &imDst)
{
    cv::cvtColor(imSrc, imDst, code, dstCn);
}
