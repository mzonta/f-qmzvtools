/********************************************************************************
** Form generated from reading UI file 'qvtImageViewer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QVTIMAGEVIEWER_H
#define UI_QVTIMAGEVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qvtImageViewer
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *imageScrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *imageViewerLabel;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QLabel *imageFileLabel_2;
    QLabel *imageFileLabel;
    QFrame *line_2;
    QLabel *resolutionLabel_2;
    QLabel *resolutionLabel;
    QFrame *line_3;

    void setupUi(QWidget *qvtImageViewer)
    {
        if (qvtImageViewer->objectName().isEmpty())
            qvtImageViewer->setObjectName(QStringLiteral("qvtImageViewer"));
        qvtImageViewer->resize(944, 705);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qvtImageViewer->sizePolicy().hasHeightForWidth());
        qvtImageViewer->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(qvtImageViewer);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        imageScrollArea = new QScrollArea(qvtImageViewer);
        imageScrollArea->setObjectName(QStringLiteral("imageScrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(5);
        sizePolicy1.setHeightForWidth(imageScrollArea->sizePolicy().hasHeightForWidth());
        imageScrollArea->setSizePolicy(sizePolicy1);
        imageScrollArea->setWidgetResizable(true);
        imageScrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 924, 637));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        imageViewerLabel = new QLabel(scrollAreaWidgetContents);
        imageViewerLabel->setObjectName(QStringLiteral("imageViewerLabel"));
        sizePolicy.setHeightForWidth(imageViewerLabel->sizePolicy().hasHeightForWidth());
        imageViewerLabel->setSizePolicy(sizePolicy);
        imageViewerLabel->setFrameShape(QFrame::Panel);
        imageViewerLabel->setFrameShadow(QFrame::Sunken);
        imageViewerLabel->setLineWidth(1);
        imageViewerLabel->setScaledContents(true);
        imageViewerLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(imageViewerLabel, 0, 0, 1, 1);

        imageScrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(imageScrollArea);

        frame = new QFrame(qvtImageViewer);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        imageFileLabel_2 = new QLabel(frame);
        imageFileLabel_2->setObjectName(QStringLiteral("imageFileLabel_2"));
        QFont font;
        font.setKerning(true);
        imageFileLabel_2->setFont(font);

        horizontalLayout->addWidget(imageFileLabel_2);

        imageFileLabel = new QLabel(frame);
        imageFileLabel->setObjectName(QStringLiteral("imageFileLabel"));
        imageFileLabel->setFont(font);

        horizontalLayout->addWidget(imageFileLabel);

        line_2 = new QFrame(frame);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        resolutionLabel_2 = new QLabel(frame);
        resolutionLabel_2->setObjectName(QStringLiteral("resolutionLabel_2"));
        resolutionLabel_2->setFont(font);

        horizontalLayout->addWidget(resolutionLabel_2);

        resolutionLabel = new QLabel(frame);
        resolutionLabel->setObjectName(QStringLiteral("resolutionLabel"));
        resolutionLabel->setFont(font);

        horizontalLayout->addWidget(resolutionLabel);

        line_3 = new QFrame(frame);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_3);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(frame);


        retranslateUi(qvtImageViewer);

        QMetaObject::connectSlotsByName(qvtImageViewer);
    } // setupUi

    void retranslateUi(QWidget *qvtImageViewer)
    {
        qvtImageViewer->setWindowTitle(QApplication::translate("qvtImageViewer", "Form", 0));
        imageViewerLabel->setText(QApplication::translate("qvtImageViewer", "Image Viewer Empty", 0));
        imageFileLabel_2->setText(QApplication::translate("qvtImageViewer", "Image File:", 0));
        imageFileLabel->setText(QApplication::translate("qvtImageViewer", "Image File", 0));
        resolutionLabel_2->setText(QApplication::translate("qvtImageViewer", "Resolution:", 0));
        resolutionLabel->setText(QApplication::translate("qvtImageViewer", "RES", 0));
    } // retranslateUi

};

namespace Ui {
    class qvtImageViewer: public Ui_qvtImageViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QVTIMAGEVIEWER_H
