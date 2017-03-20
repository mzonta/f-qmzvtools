#include "qvtSlide.h"
#include "ui_qvtSlide.h"

qvtSlide::qvtSlide(QWidget *parent, int imageSlideWidth, int imageSlideHeight, int indexSlideHeight) :
    QWidget(parent),
    ui(new Ui::qvtSlide)
{
    ui->setupUi(this);
    // Slide Init
    this->imageIndex = imageIndex;
    this->imageSlideWidth = imageSlideWidth;
    this->imageSlideHeight = imageSlideHeight;
    this->setMaximumWidth(imageSlideWidth+20);
    ui->slideTitle->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->slideTitle->setMinimumSize(QSize(imageSlideWidth,indexSlideHeight));
    ui->slideTitle->setMaximumSize(QSize(imageSlideWidth,indexSlideHeight));
    ui->slideView->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->slideView->setMinimumSize(QSize(imageSlideWidth,imageSlideHeight));
    ui->slideView->setMaximumSize(QSize(imageSlideWidth,imageSlideHeight));
}

qvtSlide::~qvtSlide()
{
    delete ui;
}

void qvtSlide::changeEvent(QEvent *evnt)
{
    if (evnt->type() == QEvent::LanguageChange) {
        ui->retranslateUi(this);
    }
    else {
        QWidget::changeEvent(evnt);
    }
}

void qvtSlide::setSlideIndex(int index)
{
    imageIndex = index;
}

void qvtSlide::setSlideTitle(QString title)
{
    ui->slideTitle->setText(title);
}

void qvtSlide::setSlideImage(const QImage &slideImage)
{
    QPixmap slidePixmap = QPixmap::fromImage(slideImage);
    slidePixmap = slidePixmap.scaled(ui->slideView->width(), ui->slideView->height(), Qt::KeepAspectRatio);
    ui->slideView->setPixmap(slidePixmap);
}

QImage qvtSlide::getSlideImage()
{
    return QImage(ui->slideView->pixmap()->toImage());
}

int qvtSlide::getSlideIndex()
{
    return imageIndex;
}

QString qvtSlide::getSlideTitle()
{
    return ui->slideTitle->text();
}
