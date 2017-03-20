#ifndef QVTMATTOQIMAGE_H
#define QVTMATTOQIMAGE_H

// Qt
#include <QImage>
#include <QDebug>
// OpenCV
#include <opencv2/core/core.hpp>

QImage qvtMatToQImage(const cv::Mat&);

#endif // QVTMATTOQIMAGE_H
