#ifndef QVTQIMAGETOMAT_H
#define QVTQIMAGETOMAT_H

// Qt
#include <QImage>
#include <QDebug>
// OpenCV
#include <opencv2/core/core.hpp>

cv::Mat qvtQImageToMat(const QImage&);

#endif // QVTQIMAGETOMAT_H
