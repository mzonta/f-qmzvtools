#ifndef QVTSTRUCTURES_H
#define QVTSTRUCTURES_H

// Camera Settings
struct CameraSettings {
    int Brightness;
    int Contrast;
    int Saturation;
    int Sharpness;
    int Gain;
    int Focus;
    int BacklightCompensation;
    int WhiteBalanceTemperature;
};


//struct ImageProcessingSettings{
//    int smoothType;
//    int smoothParam1;
//    int smoothParam2;
//    double smoothParam3;
//    double smoothParam4;
//    int dilateNumberOfIterations;
//    int erodeNumberOfIterations;
//    int flipCode;
//    double cannyThreshold1;
//    double cannyThreshold2;
//    int cannyApertureSize;
//    bool cannyL2gradient;
//};

//struct ImageProcessingFlags{
//    bool grayscaleOn;
//    bool smoothOn;
//    bool dilateOn;
//    bool erodeOn;
//    bool flipOn;
//    bool cannyOn;
//};


#endif // QVTSTRUCTURES_H
