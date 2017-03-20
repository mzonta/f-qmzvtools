#ifndef QVTSLIDE_H
#define QVTSLIDE_H

// Qt
#include <QWidget>
#include <QMouseEvent>
#include <QDebug>
// General
#include "../general/qvtConfig.h"

namespace Ui {
class qvtSlide;
}

class qvtSlide : public QWidget
{
    Q_OBJECT

public:
    explicit qvtSlide(QWidget *parent = 0, int imageSlideWidth = DEFAULT_SLIDE_WIDTH, int imageSlideHeight = DEFAULT_SLIDE_HEIGHT, int indexSlideHeight = DEFAULT_SLIDE_INDEX_HEIGHT);
    ~qvtSlide();

    void setSlideIndex(int index);
    void setSlideTitle(QString title);
    void setSlideImage(const QImage &);
    QImage getSlideImage();
    int getSlideIndex();
    QString getSlideTitle();

private:
    Ui::qvtSlide *ui;

    int imageIndex;
    int imageSlideWidth;
    int imageSlideHeight;

protected:
    void changeEvent(QEvent *);
};

#endif // QVTSLIDE_H
