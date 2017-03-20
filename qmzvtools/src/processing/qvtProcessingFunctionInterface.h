#ifndef QVTPROCESSINGFUNCTIONINTERFACE_H
#define QVTPROCESSINGFUNCTIONINTERFACE_H

// Processing
#include "qvtProcessingStructures.h"

class qvtProcessingFunctionInterface
{
public:
    virtual void processFunction(Mat &inMat, Mat &outMat) = 0;
};

#endif // QVTPROCESSINGFUNCTIONINTERFACE_H
