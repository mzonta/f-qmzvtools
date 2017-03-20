#ifndef QVTPROCESSINGSTRUCTURES_H
#define QVTPROCESSINGSTRUCTURES_H

// C++
#include <vector>
// OpenCV
#include <opencv2/core/core.hpp>
// General
#include "../general/qvtStructures.h"

typedef cv::Mat Mat;
typedef std::vector<cv::Mat> vMat;
typedef std::string string;
typedef std::stringstream stringstream;
typedef std::string stringBuffer;

// Messages Buffer
struct sMessage {
    int msgID;
    string msgSource;
    stringBuffer msgText;
};

typedef std::vector<sMessage> vMessages;

// Image Buffer
struct sImage {
    Mat iMat;
    string iTitle;
    int iID;
};

typedef std::vector<sImage> vImage;

// Image Processing Functions
enum FunctionID {
    NONE,
    RGB_TO_GRAY,
    RGB_TO_HSV,
    AAA
};

#define FUN_NONE_ID     NONE
#define FUN_NONE_LABEL  "NoSelection"

struct sFun{
    FunctionID functionID;
    string functionLabel;
};

struct sParam{
    string pName;
    int pValue;
};

// Cycle Type
enum CycleType {
    BATCH,
    CONTINUOUS
};

const char* cycleTypeString(CycleType ct);

#endif // QVTPROCESSINGSTRUCTURES_H
