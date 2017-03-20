#ifndef QVTIMAGESLIDEVIEW_H
#define QVTIMAGESLIDEVIEW_H

// Qt
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QMouseEvent>
#include <QMenu>
#include <QDebug>
#include <QScrollBar>
// General
#include "../general/qvtConfig.h"
// Processing
#include "qvtSlide.h"

namespace Ui {
class qvtImageSlideView;
}

class qvtImageSlideView : public QWidget
{
    Q_OBJECT

public:
    explicit qvtImageSlideView(QWidget *parent = 0, int imageSlideWidth = DEFAULT_SLIDE_WIDTH, int imageSlideHeight = DEFAULT_SLIDE_HEIGHT, int indexSlideHeight = DEFAULT_SLIDE_INDEX_HEIGHT);
    ~qvtImageSlideView();

    void addSlide(const QImage &image);

private:
    Ui::qvtImageSlideView *ui;

    int imageSlideWidth;
    int imageSlideHeight;
    QVector<qvtSlide*> imageSlideList;
    int indexFirst;
    int indexLast;

protected:
    bool eventFilter(QObject *, QEvent *);

private slots:

signals:
    void loadSlide(qvtSlide *);

};

#endif // QVTIMAGESLIDEVIEW_H
