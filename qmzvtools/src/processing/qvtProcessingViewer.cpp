// Local
#include "qvtProcessingViewer.h"
#include "ui_qvtProcessingViewer.h"

qvtProcessingViewer::qvtProcessingViewer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::qvtProcessingViewer)
{
    ui->setupUi(this);
    ui->imageIdLabel->setText("");
    ui->sizeLabel->setText("");
    // Processing Controller Object
    processingController = new qvtProcessingController();
    functionsInstalled = processingController->getFunctionsInstalled();
    functionsScheduler = processingController->getFunctionsScheduler();
    // Messages Buffer
    messagesBuffer = processingController->getMessagesBuffer();
    messageIndex = -1;
    // Image Buffer
    imageBuffer = processingController->getImagesBuffer();
    imageBufferIndex = -1;
    imageIndex = 0;

    // Processing Functions Scheduler View
    functionsSchedulerView = new qvtFunctionsSchedulerView(this, functionsInstalled, functionsScheduler);
    ui->functionsSchedulerLayout->addWidget(functionsSchedulerView);
    connect(functionsSchedulerView, &qvtFunctionsSchedulerView::signalRunFunctions, this, &qvtProcessingViewer::scheduleParsing);
    // Image Slide Show
    imageSlideView = new qvtImageSlideView(this);
    ui->processingImageSliderLayout->addWidget(imageSlideView);
    connect(imageSlideView, &qvtImageSlideView::loadSlide, this, &qvtProcessingViewer::loadSlide);
    // Initialize Image File Directory
    initImageFile();

    // Connect Buttons
    connectButtons();

    // Check Result
    enableShowResult = false;
    QTimer *tCheckResult = new QTimer(this);
    connect(tCheckResult, &QTimer::timeout, this, &qvtProcessingViewer::getProcessControllerResult);
    tCheckResult->start(100);    
}

qvtProcessingViewer::~qvtProcessingViewer()
{
    delete ui;
}

void qvtProcessingViewer::changeEvent(QEvent *evnt)
{
    if (evnt->type() == QEvent::LanguageChange) {
        ui->retranslateUi(this);
    }
    else {
        QWidget::changeEvent(evnt);
    }
}

void qvtProcessingViewer::connectButtons()
{
    // Set ToolBox Page
    ui->processToolBox->setCurrentIndex(0);
    // Load Image
    connect(ui->loadImageButton, &QPushButton::clicked, this, &qvtProcessingViewer::openImage);
    // Reset Functions
    connect(ui->resetFunctionsButton, &QPushButton::clicked, this, &qvtProcessingViewer::resetFunctions);
    // Color To Gray
    connect(ui->color2GrayButton, &QPushButton::clicked, this, &qvtProcessingViewer::colorToGray);
    // Color To HSV
    connect(ui->color2HSVButton, &QPushButton::clicked, this, &qvtProcessingViewer::colorToHSV);
    // Disable Buttons
    enableButtons(false);
}

void qvtProcessingViewer::enableButtons(bool enableFlag)
{
    ui->resetFunctionsButton->setEnabled(enableFlag);
    ui->color2GrayButton->setEnabled(enableFlag);
    ui->color2HSVButton->setEnabled(enableFlag);
    functionsSchedulerView->enableRunButton(enableFlag);
}

void qvtProcessingViewer::initImageFile()
{
    QSettings sts;
    sts.beginGroup(SETTINGS_DIR_GRP);
    imageDir = sts.value(SETTINGS_IMAGES_ID).toString();
    sts.endGroup();
}

void qvtProcessingViewer::showImage(const QImage &image)
{
    ui->processingViewerLabel->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
    QPixmap imagePixmap = QPixmap::fromImage(image);
    ui->processingViewerLabel->setPixmap(imagePixmap);
    ui->processingViewerLabel->adjustSize();
    // Update Info about Image File
    updateImageInfo();
}

void qvtProcessingViewer::updateImageInfo()
{
    imageWidth = cvImage.cols;
    imageHeight = cvImage.rows;
    imageChannels = cvImage.channels();
    ui->sizeLabel->setText(QString::number(imageWidth) + QString("x")
                                 + QString::number(imageHeight) + QString("x")
                                 + QString::number(imageChannels));
    ui->imageIdLabel->setText(imageTitle);
}

void qvtProcessingViewer::updateMessages()
{
    if (messageIndex < messagesBuffer->getIndexLast()) {
        // New messages
        ++messageIndex;
        sMessage tmpMsg;
        tmpMsg = messagesBuffer->getMessage(messageIndex);
        messagesStream << tmpMsg.msgText;
    }
    string tmpStr = messagesStream.str();
    ui->messagesLabel->setText(QString::fromStdString(tmpStr));
}

void qvtProcessingViewer::addSlide(const QImage &image)
{
    imageSlideView->addSlide(image);
}

void qvtProcessingViewer::loadSlide(qvtSlide *slide)
{
    imageIndex = slide->getSlideIndex();
    imageTitle = slide->getSlideTitle();
    cvImage = imageBuffer->getMat(imageIndex);
    qtImage = qvtMatToQImage(cvImage);
    showImage(qtImage);
}

void qvtProcessingViewer::getProcessControllerResult()
{
    if (imageBufferIndex < imageBuffer->getIndexLast()) {
        // New images
        ++imageBufferIndex;
        cvImage.release();
        cvImage = imageBuffer->getMat(imageBufferIndex);
        // Mat to Qt Conversion
        qtImage = qvtMatToQImage(cvImage);
        // Add New Slide
        addSlide(qtImage);
        // Show Image
        showImage(qtImage);
    }
    updateMessages();
}

void qvtProcessingViewer::setImageFileToProcess(QString imageFileToProcess)
{
    if (imageFileToProcess != "") {
        QFileInfo fileInfo(imageFileToProcess);
        imageFile = fileInfo.fileName();
        // Processing Controller
        processingController->setImageFile(imageFileToProcess.toStdString());
        enableButtons(true);
    }
}

void qvtProcessingViewer::openImage()
{
    // Open File Dialog
    QString imageFileDialog;
    imageFileDialog = QFileDialog::getOpenFileName(this,tr("Open Image"),imageDir,tr("Image Files ( *.jpg , *.bmp , *.png , *.gif )"));
    // Set Image File for Processing Controller
    setImageFileToProcess(imageFileDialog);
}

void qvtProcessingViewer::resetFunctions()
{
    enableShowResult = false;
    processingController->resetFunctions();
}

void qvtProcessingViewer::colorToGray()
{
    enableShowResult = false;
    processingController->colorToGray();
}

void qvtProcessingViewer::colorToHSV()
{
    enableShowResult = false;
    processingController->colorToHSV();
}

void qvtProcessingViewer::scheduleParsing()
{
    processingController->scheduleParsing();
}
