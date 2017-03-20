#ifndef QVTCAMERAVIEWER_H
#define QVTCAMERAVIEWER_H

// Qt
#include <QSettings>
#include <QTimer>
#include <QMouseEvent>
#include <QMenu>
#include <QFileDialog>
// General
#include "general/qvtMatToQImage.h"
// Webcam
#include "webcam/C920Camera.h"
// Main
#include "qvtCameraSettingsDialog.h"

namespace Ui {
class qvtCameraViewer;
}

class qvtCameraViewer : public QWidget
{
    Q_OBJECT

public:
    explicit qvtCameraViewer(QWidget *parent = 0);
    ~qvtCameraViewer();

private:
    Ui::qvtCameraViewer *ui;

    v4l2::C920Camera camera;
    CameraSettings cameraSettings;
    qvtCameraSettingsDialog *cameraSettingsDialog;
    void initCameraSettings();
    bool enableGrabFrame;
    bool cameraFrameReady;
    bool cameraReady;
    int cameraFrameWidth;
    int cameraFrameHeight;
    int cameraFrameFPS;
    bool connectCamera();
    bool grabFrame();
    cv::Mat cvFrame;
    QImage qtFrame;
    QString videoDir;
    QString videoFileRoot;
    QString videoFileExt;
    QString videoFile;
    void defineVideoFile();
    void initVideoFile();
    bool enableRecordFrame;
    bool cameraFileReady;
    bool connectVideoFile();
    bool disconnectVideoFile();
    cv::VideoWriter outputVideo;
    bool enableCaptureFrame;
    QString imageDir;
    QString imageFileRoot;
    QString imageFileExt;
    QString imageFile;
    void initImageFile();
    void saveImageFile();

    int counterFPS;
    int cameraFPS;

    void updateCameraInfo();

protected:
    void changeEvent(QEvent *);
    void mouseReleaseEvent(QMouseEvent *);

private slots:
    // Camera Menu
    void liveCamera(bool);
    void recordCamera(bool);
    void captureFrame();
    void saveVideoFileAs();
    void saveImageFileAs();
    void showCameraSettingsDialog();
    void showImageContextMenu(const QPoint &);

    void liveCameraButtonClicked();
    void recordCameraButtonClicked();
    void captureFrameButtonClicked();

    void updateCameraSettings(CameraSettings);

    void cameraMain();
    void countFPS();

};

#endif // QVTCAMERAVIEWER_H
