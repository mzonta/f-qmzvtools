#ifndef QVTPROCESSINGVIEWER_H
#define QVTPROCESSINGVIEWER_H

// C++
#include <iostream>
// Qt
#include <QWidget>
#include <QSettings>
#include <QFileDialog>
#include <QTimer>
// OpenCV
#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
// General
#include "../general/qvtStructures.h"
#include "../general/qvtConfig.h"
#include "../general/qvtMatToQImage.h"
// Processing
#include "qvtImageSlideView.h"
#include "qvtProcessingController.h"
#include "qvtFunctionsSchedulerView.h"

namespace Ui {
class qvtProcessingViewer;
}

class qvtProcessingViewer : public QWidget
{
    Q_OBJECT

public:
    explicit qvtProcessingViewer(QWidget *parent = 0);
    ~qvtProcessingViewer();

private:
    Ui::qvtProcessingViewer *ui;

    QString imageDir;
    QString imageFile;
    cv::Mat cvImage;
    QImage qtImage;
    int imageWidth;
    int imageHeight;
    int imageChannels;

    void connectButtons();
    void enableButtons(bool);
    void initImageFile();
    void updateImageInfo();

    qvtProcessingController *processingController;
    bool enableShowResult;

    qvtMessagesBuffer *messagesBuffer;
    int messageIndex;
    stringstream messagesStream;
    void updateMessages();

    qvtImagesBuffer *imageBuffer;
    int imageBufferIndex;
    int imageIndex;
    QString imageTitle;

    qvtImageSlideView *imageSlideView;

    qvtFunctionsInstalled *functionsInstalled;
    qvtFunctionsScheduler *functionsScheduler;

    qvtFunctionsSchedulerView *functionsSchedulerView;

protected:
    void changeEvent(QEvent *);

private slots:
    void showImage(const QImage &);
    void addSlide(const QImage &);
    void loadSlide(qvtSlide *);

    void getProcessControllerResult();
    void openImage();
    void resetFunctions();
    void colorToGray();
    void colorToHSV();
    void scheduleParsing();

public slots:
    void setImageFileToProcess(QString);

signals:


};

#endif // QVTPROCESSINGVIEWER_H
