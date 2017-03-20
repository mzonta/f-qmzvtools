// Local
#include "qvtCameraViewer.h"
#include "ui_qvtCameraViewer.h"
#include "qvtCameraSettingsDialog.h"

qvtCameraViewer::qvtCameraViewer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::qvtCameraViewer)
{
    ui->setupUi(this);
    ui->resolutionLabel->setText("");
    ui->frameRateLabel->setText("");
    ui->videoFileLabel->setText("");

    connect(this, &QLabel::customContextMenuRequested, this, &qvtCameraViewer::showImageContextMenu);

    initCameraSettings();
    initVideoFile();
    initImageFile();
    cameraReady = false;
    cameraFrameReady = false;
    cameraFileReady = false;
    enableGrabFrame = true;
    liveCamera(enableGrabFrame);
    connect(ui->liveCameraButton, &QPushButton::clicked, this, &qvtCameraViewer::liveCameraButtonClicked);
    enableRecordFrame = false;
    recordCamera(enableRecordFrame);
    connect(ui->recordCameraButton, &QPushButton::clicked, this, &qvtCameraViewer::recordCameraButtonClicked);
    enableCaptureFrame = false;
    connect(ui->captureFrameButton, &QPushButton::clicked, this, &qvtCameraViewer::captureFrameButtonClicked);

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &qvtCameraViewer::cameraMain);
    timer->start(1);

    counterFPS = 0;
    cameraFPS = v4l2::CAPTURE_FPS_DENOMINATOR[v4l2::DEFAULT_CAMERA_FPS];
    QTimer *timer_1s = new QTimer(this);
    connect(timer_1s, &QTimer::timeout, this, &qvtCameraViewer::countFPS);
    timer_1s->start(1000);

    connect(this->cameraSettingsDialog, &qvtCameraSettingsDialog::newCameraSettings, this, &qvtCameraViewer::updateCameraSettings);
}

qvtCameraViewer::~qvtCameraViewer()
{
    outputVideo.release();
    camera.Close();
    delete ui;
}

void qvtCameraViewer::changeEvent(QEvent *evnt)
{
    if (evnt->type() == QEvent::LanguageChange) {
        ui->retranslateUi(this);
    }
    else {
        QWidget::changeEvent(evnt);
    }
}

void qvtCameraViewer::mouseReleaseEvent(QMouseEvent *evnt)
{
    if (evnt->button() == Qt::RightButton)
    {
        emit customContextMenuRequested(evnt->pos());
    }
    else {
        QWidget::mouseReleaseEvent(evnt);
    }
}

void qvtCameraViewer::showImageContextMenu(const QPoint &pos)
{
    // Create Actions
    // - Live Camera
    QAction *liveCameraAct;
    liveCameraAct = new QAction(tr("Live"), this);
    liveCameraAct->setStatusTip("Enable Live Camera");
    liveCameraAct->setCheckable(true);
    liveCameraAct->setChecked(enableGrabFrame);
    connect(liveCameraAct, &QAction::toggled, this, &qvtCameraViewer::liveCamera);

    // - Record Camera
    QAction *recordCameraAct;
    recordCameraAct = new QAction(tr("Record"), this);
    recordCameraAct->setStatusTip("Enable Record Frames to Video File");
    recordCameraAct->setCheckable(true);
    recordCameraAct->setChecked(enableRecordFrame);
    connect(recordCameraAct, &QAction::toggled, this, &qvtCameraViewer::recordCamera);

    // - Capture Frame
    QAction *captureFrameAct;
    captureFrameAct = new QAction(tr("Capture Image"), this);
    captureFrameAct->setStatusTip("Capture Frame to Image File");
    connect(captureFrameAct, &QAction::toggled, this, &qvtCameraViewer::captureFrame);

    // - Save Video File As
    QAction *saveVideoAsAct;
    saveVideoAsAct = new QAction(tr("Save Video As"), this);
    saveVideoAsAct->setEnabled(!enableRecordFrame);
    saveVideoAsAct->setStatusTip("Defined Video File Name");
    connect(saveVideoAsAct, &QAction::triggered, this, &qvtCameraViewer::saveVideoFileAs);

    // - Save Image File As
    QAction *saveImageAsAct;
    saveImageAsAct = new QAction(tr("Save Image As"), this);
    saveImageAsAct->setEnabled(!enableRecordFrame);
    saveImageAsAct->setStatusTip("Defined Video File Name");
    connect(saveImageAsAct, &QAction::triggered, this, &qvtCameraViewer::saveImageFileAs);

    // - Camera Settings
    QAction *cameraSettingsAct;
    cameraSettingsAct = new QAction(tr("Camera Settings"), this);
    cameraSettingsAct->setStatusTip("Camera Settings");
    connect(cameraSettingsAct, &QAction::triggered, this, &qvtCameraViewer::showCameraSettingsDialog);

    // Create Menu
    QMenu *contextMenu;
    // - Open Image
    contextMenu = new QMenu(this);
    contextMenu->addSeparator();
    contextMenu->addAction(liveCameraAct);
    contextMenu->addAction(recordCameraAct);
    contextMenu->addAction(saveVideoAsAct);
    contextMenu->addSeparator();
    contextMenu->addAction(captureFrameAct);
    contextMenu->addAction(saveImageAsAct);
    contextMenu->addSeparator();
    contextMenu->addAction(cameraSettingsAct);
    contextMenu->exec(mapToGlobal(pos));
}

void qvtCameraViewer::liveCameraButtonClicked()
{
    liveCamera(!enableGrabFrame);
}

void qvtCameraViewer::liveCamera(bool flagLive)
{
    if (flagLive) {
        enableGrabFrame = true;
        ui->liveCameraButton->setStyleSheet("background-color: green");
        ui->recordCameraButton->setEnabled(true);
    }
    else {
        enableGrabFrame = false;
        ui->liveCameraButton->setStyleSheet("background-color: gray");
        ui->recordCameraButton->setEnabled(false);
    }
}

void qvtCameraViewer::recordCameraButtonClicked()
{
    recordCamera(!enableRecordFrame);
}

void qvtCameraViewer::recordCamera(bool flagRecord)
{
    if (flagRecord) {
        enableRecordFrame = true;
        ui->recordCameraButton->setStyleSheet("background-color: green");
    }
    else {
        enableRecordFrame = false;
        ui->recordCameraButton->setStyleSheet("background-color: gray");
    }
}

void qvtCameraViewer::captureFrameButtonClicked()
{
    captureFrame();
}

void qvtCameraViewer::captureFrame()
{
    enableCaptureFrame = true;
}

void qvtCameraViewer::saveImageFileAs()
{
    QString fileExt = QString(tr("Image Files ( *.")) + DEFAULT_IMAGE_FILE_EXT + QString(" )");
    QString newImageFile = QFileDialog::getSaveFileName(this,tr("Save Image"),imageDir,fileExt);
    if (!newImageFile.isEmpty()) {
        QFileInfo newImageFileInfo(newImageFile);
        imageFileRoot = newImageFileInfo.fileName();
        if (newImageFileInfo.suffix().isEmpty()) {
            imageFileExt = DEFAULT_IMAGE_FILE_EXT;
        }
        else {
            imageFileExt = newImageFileInfo.suffix();
            qDebug() << "New Suffix " << imageFileExt;
        }
    }
}

void qvtCameraViewer::showCameraSettingsDialog()
{
    cameraSettingsDialog->show();
}

void qvtCameraViewer::initCameraSettings()
{
    cameraSettingsDialog = new qvtCameraSettingsDialog(this);    
}

void qvtCameraViewer::updateCameraSettings(CameraSettings newCameraSettings)
{
    cameraSettings = newCameraSettings;
}

bool qvtCameraViewer::connectCamera()
{
    if (DEBUG_MESSAGE_ON) {
        fprintf(stdout, "Preparing to open camera.\n");
    }
    camera.Open("/dev/video0");
    if (!camera.IsOpen()) {
        if (DEBUG_MESSAGE_ON) {
            fprintf(stderr, "Unable to open camera.\n");
        }
        return false;
    }

    camera.ChangeCaptureSize(v4l2::DEFAULT_CAMERA_RESOLUTION);
    camera.ChangeCaptureFPS(v4l2::DEFAULT_CAMERA_FPS);
    cameraFrameWidth = v4l2::CAPTURE_SIZE_WIDTHS[v4l2::DEFAULT_CAMERA_RESOLUTION];
    cameraFrameHeight = v4l2::CAPTURE_SIZE_HEIGHTS[v4l2::DEFAULT_CAMERA_RESOLUTION];
    cameraFrameFPS = v4l2::CAPTURE_FPS_DENOMINATOR[v4l2::DEFAULT_CAMERA_FPS];

    camera.GrabFrame();
    camera.RetrieveMat(cvFrame);

    return true;
}

void qvtCameraViewer::defineVideoFile()
{
    int indexName;
    QString fileName;
    bool fileExist;

    indexName = 0;
    do {
        videoFile = videoFileRoot + QString::number(indexName) + QString(".") + videoFileExt;
        fileName = videoDir + videoFile;
        fileExist = QFile(fileName).exists();
        indexName++;
    }
    while (fileExist);
}

void qvtCameraViewer::initVideoFile()
{
    QSettings sts;
    sts.beginGroup(SETTINGS_DIR_GRP);
    videoDir = sts.value(SETTINGS_VIDEOS_ID).toString();
    sts.endGroup();

    videoFileRoot = DEFAULT_VIDEO_FILE_ROOT;
    videoFileExt = DEFAULT_VIDEO_FILE_EXT;

    defineVideoFile();
}

void qvtCameraViewer::saveVideoFileAs()
{
    QString fileExt = QString(tr("Image Files ( *.")) + DEFAULT_VIDEO_FILE_EXT + QString(" )");
    QString newVideoFile = QFileDialog::getSaveFileName(this,tr("Save Video As"),videoDir,fileExt);
    if (!newVideoFile.isEmpty()) {
        QFileInfo fileInfo(newVideoFile);
        videoFileRoot = fileInfo.fileName();
    }
    defineVideoFile();
    disconnectVideoFile();
}

bool qvtCameraViewer::connectVideoFile()
{
    QString videoStr;

    if (DEBUG_MESSAGE_ON) {
        qDebug() << "Writing to " << videoFile;
    }

    videoStr = videoDir + videoFile;
    outputVideo.open(videoStr.toStdString(),
                     CV_FOURCC('M','J','P','G'),
                     cameraFrameFPS,
                     cv::Size(cameraFrameWidth, cameraFrameHeight),
                     true);

    if (!outputVideo.isOpened()) {
        if (DEBUG_MESSAGE_ON) {
            fprintf(stderr, "Unable to record video file.\n");
        }
        return false;
    }
    return true;
}

bool qvtCameraViewer::disconnectVideoFile()
{
    outputVideo.release();
    cameraFileReady = false;
}

void qvtCameraViewer::initImageFile()
{
    QSettings sts;
    int indexName;
    QString fileName;
    bool fileExist;

    sts.beginGroup(SETTINGS_DIR_GRP);
    imageDir = sts.value(SETTINGS_IMAGES_ID).toString();
    sts.endGroup();

    indexName = 0;
    imageFileRoot = DEFAULT_IMAGE_FILE_ROOT;
    imageFileExt = DEFAULT_IMAGE_FILE_EXT;
    do {
        imageFile = imageFileRoot + QString::number(indexName) + QString(".") + imageFileExt;
        fileName = imageDir + imageFile;
        fileExist = QFile(fileName).exists();
        indexName++;
    }
    while (fileExist);
}

void qvtCameraViewer::saveImageFile()
{
    int indexName;
    QString fileName;
    bool fileExist;

    indexName = 0;
    do {
        imageFile = imageFileRoot + QString::number(indexName) + QString(".") + imageFileExt;
        fileName = imageDir + imageFile;
        fileExist = QFile(fileName).exists();
        indexName++;
    }
    while (fileExist);

    cv::imwrite(fileName.toStdString(), cvFrame);
}

bool qvtCameraViewer::grabFrame()
{
    camera.SetBrightness(cameraSettings.Brightness);
    camera.SetContrast(cameraSettings.Contrast);
    camera.SetSaturation(cameraSettings.Saturation);
    camera.SetSharpness(cameraSettings.Sharpness);
    camera.SetGain(cameraSettings.Gain);
    camera.SetBacklightCompensation(cameraSettings.BacklightCompensation);
    --cameraSettings.WhiteBalanceTemperature;
    camera.SetWhiteBalanceTemperature(cameraSettings.WhiteBalanceTemperature);
    ++cameraSettings.WhiteBalanceTemperature;
    --cameraSettings.Focus;
    camera.SetFocus(cameraSettings.Focus);
    ++cameraSettings.Focus;

    if (camera.GrabFrame() && camera.RetrieveMat(cvFrame)) {
        qtFrame = qvtMatToQImage(cvFrame);

        QPixmap pixFrame = QPixmap::fromImage(qtFrame).scaled(ui->cameraLabel->width(), ui->cameraLabel->height(), Qt::KeepAspectRatio);
        if (!qtFrame.isNull()){
            ui->cameraLabel->setPixmap(pixFrame);
        }
    } else {
        fprintf(stderr, "Unable to grab frame from camera.\n");
        return false;
    }
    return true;
}

void qvtCameraViewer::updateCameraInfo()
{
    ui->frameRateLabel->setText(QString::number(qreal(cameraFPS)));
    ui->resolutionLabel->setText(QString::number(cameraFrameWidth)+QString("x")+QString::number(cameraFrameHeight));
    ui->videoFileLabel->setText(videoFile);
}

void qvtCameraViewer::countFPS()
{
    cameraFPS = counterFPS;
    counterFPS = 0;
}

void qvtCameraViewer::cameraMain()
{
    if (!cameraReady) {
        cameraReady = connectCamera();
    }

    if (cameraReady) {
        if (enableGrabFrame) {
            cameraFrameReady = grabFrame();
            counterFPS++;
            // Save Frame to Video File
            if (cameraFrameReady && enableRecordFrame) {
                if (!cameraFileReady) {
                    cameraFileReady = connectVideoFile();
                }
                if (cameraFileReady) {
                    outputVideo.write(cvFrame);
                }                
            }
        }
        // Save Frame to Image File
        if (enableCaptureFrame){
            if (DEBUG_MESSAGE_ON) {
                qDebug() << "Capture Image to File";
            }
            saveImageFile();
            enableCaptureFrame = false;
        }
    }
    updateCameraInfo();
}


