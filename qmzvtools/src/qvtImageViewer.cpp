// Local
#include "qvtImageViewer.h"
#include "ui_qvtImageViewer.h"

qvtImageViewer::qvtImageViewer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::qvtImageViewer)
{
    ui->setupUi(this);
    ui->imageFileLabel->setText("");
    ui->resolutionLabel->setText("");
    // Context Menu
    connect(this, &QLabel::customContextMenuRequested, this, &qvtImageViewer::showImageContextMenu);
    // Initialize Image File Directory
    initImageFile();
    // Disable Image Processing
    enableProcessing = false;
}

qvtImageViewer::~qvtImageViewer()
{
    delete ui;
}

void qvtImageViewer::mouseReleaseEvent(QMouseEvent *evnt)
{
    if (evnt->button() == Qt::RightButton)
    {
        emit customContextMenuRequested(evnt->pos());
    }
    else {
        QWidget::mouseReleaseEvent(evnt);
    }
}

void qvtImageViewer::changeEvent(QEvent *evnt)
{
    if (evnt->type() == QEvent::LanguageChange) {
        ui->retranslateUi(this);
    }
    else {
        QWidget::changeEvent(evnt);
    }
}

void qvtImageViewer::initImageFile()
{
    QSettings sts;
    sts.beginGroup(SETTINGS_DIR_GRP);
    imageDir = sts.value(SETTINGS_IMAGES_ID).toString();
    sts.endGroup();
}

void qvtImageViewer::showImageContextMenu(const QPoint &pos)
{
    // Create Actions
    // - Open Image
    QAction *openImageAct;
    openImageAct = new QAction(tr("Open"), this);
    openImageAct->setStatusTip(tr("Open Image"));
    connect(openImageAct, &QAction::triggered, this, &qvtImageViewer::openImage);
    // - Send Image to Processing
    QAction *processImageAct;
    processImageAct = new QAction(tr("Process Image"), this);
    processImageAct->setStatusTip(tr("Process Image"));
    processImageAct->setEnabled(enableProcessing);
    connect(processImageAct, &QAction::triggered, this, &qvtImageViewer::processImage);

    // Create Menu
    QMenu *contextMenu;
    // - Open Image
    contextMenu = new QMenu(this);
    contextMenu->addAction(openImageAct);
    contextMenu->addAction(processImageAct);
    contextMenu->exec(mapToGlobal(pos));
}

void qvtImageViewer::openImage()
{
    //QString imageFileDialog;
    imageFileDialog = QFileDialog::getOpenFileName(this,tr("Open Image"),imageDir,tr("Image Files ( *.jpg , *.bmp , *.png , *.gif )"));

    if (imageFileDialog != "") {
        QFileInfo fileInfo(imageFileDialog);
        imageFile = fileInfo.fileName();
        cvImage = cv::imread(imageFileDialog.toStdString());
        qtImage = qvtMatToQImage(cvImage);
        showImage(qtImage);
        // Enable Image Processing Action
        enableProcessing = true;
    }
}

void qvtImageViewer::processImage()
{
    emit imageFileToProcess(imageFileDialog);
}

void qvtImageViewer::showImage(const QImage &image)
{
    ui->imageViewerLabel->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
    QPixmap imagePixmap = QPixmap::fromImage(image);
    ui->imageViewerLabel->setPixmap(imagePixmap);
    ui->imageViewerLabel->adjustSize();
    // Update Info about Image File
    imageWidth = image.width();
    imageHeight = image.height();
    updateImageInfo();
}

void qvtImageViewer::updateImageInfo()
{
    ui->resolutionLabel->setText(QString::number(imageWidth)+QString("x")+QString::number(imageHeight));
    ui->imageFileLabel->setText(imageFile);
}
