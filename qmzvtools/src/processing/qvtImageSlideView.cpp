#include "qvtImageSlideView.h"
#include "ui_qvtImageSlideView.h"

qvtImageSlideView::qvtImageSlideView(QWidget *parent, int imageSlideWidth, int imageSlideHeight, int indexSlideHeight) :
    QWidget(parent),
    ui(new Ui::qvtImageSlideView)
{
    ui->setupUi(this);
    this->imageSlideWidth = imageSlideWidth;
    this->imageSlideHeight = imageSlideHeight;
    // Slide List
    indexFirst = 0;
    indexLast = -1;
    // Scroll Area
    ui->scrollArea->setMinimumHeight(imageSlideHeight+indexSlideHeight+40);
}

qvtImageSlideView::~qvtImageSlideView()
{
    delete ui;
}

bool qvtImageSlideView::eventFilter(QObject *obj, QEvent *evnt)
{
    if (evnt->type() == QEvent::MouseButtonDblClick) {
        for (int i = indexFirst; i <= indexLast; ++i) {
            if (obj == imageSlideList[i]) {                
                emit loadSlide(imageSlideList[i]);
            }
        }
        return true;
    }
    else {
        return QWidget::eventFilter(obj, evnt);
    }
}

void qvtImageSlideView::addSlide(const QImage &image)
{
    ++indexLast;
    imageSlideList.append(new qvtSlide(this, imageSlideWidth, imageSlideHeight));
    imageSlideList[indexLast]->setSlideIndex(indexLast);
    imageSlideList[indexLast]->setSlideTitle(QString("Slide nr. ")+QString::number(indexLast));
    imageSlideList[indexLast]->setObjectName(QString("Slide")+QString::number(indexLast));
    imageSlideList[indexLast]->setSlideImage(image);
    imageSlideList[indexLast]->installEventFilter(this);
    ui->imageSlideLayout->addWidget(imageSlideList[indexLast]);
}

