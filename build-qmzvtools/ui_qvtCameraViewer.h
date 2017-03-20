/********************************************************************************
** Form generated from reading UI file 'qvtCameraViewer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QVTCAMERAVIEWER_H
#define UI_QVTCAMERAVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qvtCameraViewer
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *cameraLabel;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *liveCameraButton;
    QPushButton *recordCameraButton;
    QPushButton *captureFrameButton;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QFrame *line_4;
    QLabel *videoFileLabel_2;
    QLabel *videoFileLabel;
    QFrame *line;
    QLabel *resolutionLabel_2;
    QLabel *resolutionLabel;
    QFrame *line_2;
    QLabel *frameRateLabel_2;
    QLabel *frameRateLabel;
    QFrame *line_3;

    void setupUi(QWidget *qvtCameraViewer)
    {
        if (qvtCameraViewer->objectName().isEmpty())
            qvtCameraViewer->setObjectName(QStringLiteral("qvtCameraViewer"));
        qvtCameraViewer->resize(1012, 822);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qvtCameraViewer->sizePolicy().hasHeightForWidth());
        qvtCameraViewer->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(qvtCameraViewer);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        cameraLabel = new QLabel(qvtCameraViewer);
        cameraLabel->setObjectName(QStringLiteral("cameraLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(9);
        sizePolicy1.setVerticalStretch(5);
        sizePolicy1.setHeightForWidth(cameraLabel->sizePolicy().hasHeightForWidth());
        cameraLabel->setSizePolicy(sizePolicy1);
        cameraLabel->setCursor(QCursor(Qt::ArrowCursor));
        cameraLabel->setFrameShape(QFrame::Panel);
        cameraLabel->setFrameShadow(QFrame::Sunken);
        cameraLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(cameraLabel);

        frame_2 = new QFrame(qvtCameraViewer);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(5);
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        liveCameraButton = new QPushButton(frame_2);
        liveCameraButton->setObjectName(QStringLiteral("liveCameraButton"));
        sizePolicy.setHeightForWidth(liveCameraButton->sizePolicy().hasHeightForWidth());
        liveCameraButton->setSizePolicy(sizePolicy);
        liveCameraButton->setCheckable(false);

        verticalLayout_2->addWidget(liveCameraButton);

        recordCameraButton = new QPushButton(frame_2);
        recordCameraButton->setObjectName(QStringLiteral("recordCameraButton"));
        sizePolicy.setHeightForWidth(recordCameraButton->sizePolicy().hasHeightForWidth());
        recordCameraButton->setSizePolicy(sizePolicy);
        recordCameraButton->setCheckable(false);

        verticalLayout_2->addWidget(recordCameraButton);

        captureFrameButton = new QPushButton(frame_2);
        captureFrameButton->setObjectName(QStringLiteral("captureFrameButton"));
        sizePolicy.setHeightForWidth(captureFrameButton->sizePolicy().hasHeightForWidth());
        captureFrameButton->setSizePolicy(sizePolicy);
        captureFrameButton->setCheckable(false);

        verticalLayout_2->addWidget(captureFrameButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addWidget(frame_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        frame = new QFrame(qvtCameraViewer);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy3);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        line_4 = new QFrame(frame);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_4);

        videoFileLabel_2 = new QLabel(frame);
        videoFileLabel_2->setObjectName(QStringLiteral("videoFileLabel_2"));
        QFont font;
        font.setKerning(true);
        videoFileLabel_2->setFont(font);

        horizontalLayout->addWidget(videoFileLabel_2);

        videoFileLabel = new QLabel(frame);
        videoFileLabel->setObjectName(QStringLiteral("videoFileLabel"));
        videoFileLabel->setFont(font);

        horizontalLayout->addWidget(videoFileLabel);

        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        resolutionLabel_2 = new QLabel(frame);
        resolutionLabel_2->setObjectName(QStringLiteral("resolutionLabel_2"));
        resolutionLabel_2->setFont(font);

        horizontalLayout->addWidget(resolutionLabel_2);

        resolutionLabel = new QLabel(frame);
        resolutionLabel->setObjectName(QStringLiteral("resolutionLabel"));
        resolutionLabel->setFont(font);

        horizontalLayout->addWidget(resolutionLabel);

        line_2 = new QFrame(frame);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        frameRateLabel_2 = new QLabel(frame);
        frameRateLabel_2->setObjectName(QStringLiteral("frameRateLabel_2"));
        frameRateLabel_2->setFont(font);

        horizontalLayout->addWidget(frameRateLabel_2);

        frameRateLabel = new QLabel(frame);
        frameRateLabel->setObjectName(QStringLiteral("frameRateLabel"));
        frameRateLabel->setFont(font);

        horizontalLayout->addWidget(frameRateLabel);

        line_3 = new QFrame(frame);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_3);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(frame);


        retranslateUi(qvtCameraViewer);

        QMetaObject::connectSlotsByName(qvtCameraViewer);
    } // setupUi

    void retranslateUi(QWidget *qvtCameraViewer)
    {
        qvtCameraViewer->setWindowTitle(QApplication::translate("qvtCameraViewer", "Form", 0));
        cameraLabel->setText(QApplication::translate("qvtCameraViewer", "Camera View Empty", 0));
        liveCameraButton->setText(QApplication::translate("qvtCameraViewer", "Live Camera", 0));
        recordCameraButton->setText(QApplication::translate("qvtCameraViewer", "Record Camera", 0));
        captureFrameButton->setText(QApplication::translate("qvtCameraViewer", "Capture Frame", 0));
        videoFileLabel_2->setText(QApplication::translate("qvtCameraViewer", "Video File:", 0));
        videoFileLabel->setText(QApplication::translate("qvtCameraViewer", "Video File", 0));
        resolutionLabel_2->setText(QApplication::translate("qvtCameraViewer", "Resolution:", 0));
        resolutionLabel->setText(QApplication::translate("qvtCameraViewer", "RES", 0));
        frameRateLabel_2->setText(QApplication::translate("qvtCameraViewer", "Frame Rate:", 0));
        frameRateLabel->setText(QApplication::translate("qvtCameraViewer", "FPS", 0));
    } // retranslateUi

};

namespace Ui {
    class qvtCameraViewer: public Ui_qvtCameraViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QVTCAMERAVIEWER_H
