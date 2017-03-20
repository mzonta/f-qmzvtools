/********************************************************************************
** Form generated from reading UI file 'qvtImageSlideView.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QVTIMAGESLIDEVIEW_H
#define UI_QVTIMAGESLIDEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qvtImageSlideView
{
public:
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *imageSlideLayout;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *qvtImageSlideView)
    {
        if (qvtImageSlideView->objectName().isEmpty())
            qvtImageSlideView->setObjectName(QStringLiteral("qvtImageSlideView"));
        qvtImageSlideView->resize(690, 178);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qvtImageSlideView->sizePolicy().hasHeightForWidth());
        qvtImageSlideView->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(qvtImageSlideView);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        scrollArea = new QScrollArea(qvtImageSlideView);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 670, 158));
        horizontalLayout_3 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        imageSlideLayout = new QHBoxLayout();
        imageSlideLayout->setObjectName(QStringLiteral("imageSlideLayout"));

        horizontalLayout_3->addLayout(imageSlideLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);


        retranslateUi(qvtImageSlideView);

        QMetaObject::connectSlotsByName(qvtImageSlideView);
    } // setupUi

    void retranslateUi(QWidget *qvtImageSlideView)
    {
        qvtImageSlideView->setWindowTitle(QApplication::translate("qvtImageSlideView", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class qvtImageSlideView: public Ui_qvtImageSlideView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QVTIMAGESLIDEVIEW_H
