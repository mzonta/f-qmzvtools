/********************************************************************************
** Form generated from reading UI file 'qvtSlide.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QVTSLIDE_H
#define UI_QVTSLIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qvtSlide
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *slideTitle;
    QLabel *slideView;

    void setupUi(QWidget *qvtSlide)
    {
        if (qvtSlide->objectName().isEmpty())
            qvtSlide->setObjectName(QStringLiteral("qvtSlide"));
        qvtSlide->resize(316, 254);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qvtSlide->sizePolicy().hasHeightForWidth());
        qvtSlide->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(qvtSlide);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        slideTitle = new QLabel(qvtSlide);
        slideTitle->setObjectName(QStringLiteral("slideTitle"));
        sizePolicy.setHeightForWidth(slideTitle->sizePolicy().hasHeightForWidth());
        slideTitle->setSizePolicy(sizePolicy);
        slideTitle->setFrameShape(QFrame::Box);
        slideTitle->setFrameShadow(QFrame::Sunken);
        slideTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(slideTitle);

        slideView = new QLabel(qvtSlide);
        slideView->setObjectName(QStringLiteral("slideView"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(9);
        sizePolicy1.setHeightForWidth(slideView->sizePolicy().hasHeightForWidth());
        slideView->setSizePolicy(sizePolicy1);
        slideView->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(slideView);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(qvtSlide);

        QMetaObject::connectSlotsByName(qvtSlide);
    } // setupUi

    void retranslateUi(QWidget *qvtSlide)
    {
        qvtSlide->setWindowTitle(QApplication::translate("qvtSlide", "Form", 0));
        slideTitle->setText(QApplication::translate("qvtSlide", "Slide Index", 0));
        slideView->setText(QApplication::translate("qvtSlide", "Slide View", 0));
    } // retranslateUi

};

namespace Ui {
    class qvtSlide: public Ui_qvtSlide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QVTSLIDE_H
