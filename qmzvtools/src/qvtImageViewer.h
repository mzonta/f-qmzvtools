#ifndef QVTIMAGEVIEWER_H
#define QVTIMAGEVIEWER_H

// Qt
#include <QWidget>
#include <QMouseEvent>
#include <QMenu>
#include <QSettings>
#include <QFileDialog>
// OpenCV
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
// General
#include "general/qvtConfig.h"
#include "general/qvtMatToQImage.h"

namespace Ui {
class qvtImageViewer;
}

class qvtImageViewer : public QWidget
{
    Q_OBJECT

public:
    explicit qvtImageViewer(QWidget *parent = 0);
    ~qvtImageViewer();

private:
    Ui::qvtImageViewer *ui;

    QString imageFileDialog;
    QString imageFile;
    cv::Mat cvImage;
    QImage qtImage;
    int imageWidth;
    int imageHeight;
    QString imageDir;
    void initImageFile();
    void updateImageInfo();
    bool enableProcessing;

protected:
    void changeEvent(QEvent *);
    void mouseReleaseEvent(QMouseEvent *);

private slots:
    void openImage();
    void processImage();
    void showImageContextMenu(const QPoint &);
    void showImage(const QImage &);

signals:
    void imageFileToProcess(QString);
};

#endif // QVTIMAGEVIEWER_H
