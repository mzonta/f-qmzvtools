/********************************************************************************
** Form generated from reading UI file 'qvtProcessingViewer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QVTPROCESSINGVIEWER_H
#define UI_QVTPROCESSINGVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qvtProcessingViewer
{
public:
    QGridLayout *gridLayout;
    QFrame *processingFrame;
    QVBoxLayout *verticalLayout_3;
    QToolBox *processToolBox;
    QWidget *generalPage;
    QVBoxLayout *verticalLayout;
    QPushButton *loadImageButton;
    QSpacerItem *verticalSpacer_2;
    QWidget *colorPage;
    QVBoxLayout *verticalLayout_4;
    QPushButton *resetFunctionsButton;
    QPushButton *color2GrayButton;
    QPushButton *color2HSVButton;
    QSpacerItem *verticalSpacer;
    QWidget *schedulerPage;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *functionsSchedulerLayout;
    QScrollArea *processingScrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_3;
    QLabel *processingViewerLabel;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *messagesLabel;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QLabel *imageIdLabel_2;
    QLabel *imageIdLabel;
    QFrame *line_2;
    QLabel *sizeLabel_2;
    QLabel *sizeLabel;
    QFrame *line_3;
    QFrame *processingImageSliderFrame;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *processingImageSliderLayout;

    void setupUi(QWidget *qvtProcessingViewer)
    {
        if (qvtProcessingViewer->objectName().isEmpty())
            qvtProcessingViewer->setObjectName(QStringLiteral("qvtProcessingViewer"));
        qvtProcessingViewer->resize(1039, 754);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qvtProcessingViewer->sizePolicy().hasHeightForWidth());
        qvtProcessingViewer->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(qvtProcessingViewer);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        processingFrame = new QFrame(qvtProcessingViewer);
        processingFrame->setObjectName(QStringLiteral("processingFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(processingFrame->sizePolicy().hasHeightForWidth());
        processingFrame->setSizePolicy(sizePolicy1);
        processingFrame->setMinimumSize(QSize(240, 0));
        processingFrame->setMaximumSize(QSize(240, 16777215));
        processingFrame->setFrameShape(QFrame::StyledPanel);
        processingFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(processingFrame);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 9, 5, 9);
        processToolBox = new QToolBox(processingFrame);
        processToolBox->setObjectName(QStringLiteral("processToolBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(processToolBox->sizePolicy().hasHeightForWidth());
        processToolBox->setSizePolicy(sizePolicy2);
        generalPage = new QWidget();
        generalPage->setObjectName(QStringLiteral("generalPage"));
        generalPage->setGeometry(QRect(0, 0, 228, 517));
        verticalLayout = new QVBoxLayout(generalPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        loadImageButton = new QPushButton(generalPage);
        loadImageButton->setObjectName(QStringLiteral("loadImageButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(loadImageButton->sizePolicy().hasHeightForWidth());
        loadImageButton->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(loadImageButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        processToolBox->addItem(generalPage, QStringLiteral("General"));
        colorPage = new QWidget();
        colorPage->setObjectName(QStringLiteral("colorPage"));
        colorPage->setGeometry(QRect(0, 0, 228, 517));
        verticalLayout_4 = new QVBoxLayout(colorPage);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        resetFunctionsButton = new QPushButton(colorPage);
        resetFunctionsButton->setObjectName(QStringLiteral("resetFunctionsButton"));
        sizePolicy3.setHeightForWidth(resetFunctionsButton->sizePolicy().hasHeightForWidth());
        resetFunctionsButton->setSizePolicy(sizePolicy3);

        verticalLayout_4->addWidget(resetFunctionsButton);

        color2GrayButton = new QPushButton(colorPage);
        color2GrayButton->setObjectName(QStringLiteral("color2GrayButton"));
        sizePolicy3.setHeightForWidth(color2GrayButton->sizePolicy().hasHeightForWidth());
        color2GrayButton->setSizePolicy(sizePolicy3);

        verticalLayout_4->addWidget(color2GrayButton);

        color2HSVButton = new QPushButton(colorPage);
        color2HSVButton->setObjectName(QStringLiteral("color2HSVButton"));
        sizePolicy3.setHeightForWidth(color2HSVButton->sizePolicy().hasHeightForWidth());
        color2HSVButton->setSizePolicy(sizePolicy3);

        verticalLayout_4->addWidget(color2HSVButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        processToolBox->addItem(colorPage, QStringLiteral("Color"));
        schedulerPage = new QWidget();
        schedulerPage->setObjectName(QStringLiteral("schedulerPage"));
        schedulerPage->setGeometry(QRect(0, 0, 228, 517));
        verticalLayout_6 = new QVBoxLayout(schedulerPage);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        functionsSchedulerLayout = new QVBoxLayout();
        functionsSchedulerLayout->setObjectName(QStringLiteral("functionsSchedulerLayout"));

        verticalLayout_6->addLayout(functionsSchedulerLayout);

        processToolBox->addItem(schedulerPage, QStringLiteral("Scheduler"));

        verticalLayout_3->addWidget(processToolBox);


        gridLayout->addWidget(processingFrame, 0, 1, 2, 1);

        processingScrollArea = new QScrollArea(qvtProcessingViewer);
        processingScrollArea->setObjectName(QStringLiteral("processingScrollArea"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(9);
        sizePolicy4.setVerticalStretch(9);
        sizePolicy4.setHeightForWidth(processingScrollArea->sizePolicy().hasHeightForWidth());
        processingScrollArea->setSizePolicy(sizePolicy4);
        processingScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 773, 600));
        horizontalLayout_3 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        processingViewerLabel = new QLabel(scrollAreaWidgetContents);
        processingViewerLabel->setObjectName(QStringLiteral("processingViewerLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(9);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(processingViewerLabel->sizePolicy().hasHeightForWidth());
        processingViewerLabel->setSizePolicy(sizePolicy5);
        processingViewerLabel->setFrameShape(QFrame::Panel);
        processingViewerLabel->setFrameShadow(QFrame::Sunken);
        processingViewerLabel->setLineWidth(1);
        processingViewerLabel->setScaledContents(true);
        processingViewerLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(processingViewerLabel);

        processingScrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(processingScrollArea, 0, 0, 1, 1);

        frame = new QFrame(qvtProcessingViewer);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy3.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy3);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        sizePolicy2.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy2);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 751, 76));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        messagesLabel = new QLabel(scrollAreaWidgetContents_3);
        messagesLabel->setObjectName(QStringLiteral("messagesLabel"));
        sizePolicy3.setHeightForWidth(messagesLabel->sizePolicy().hasHeightForWidth());
        messagesLabel->setSizePolicy(sizePolicy3);

        verticalLayout_5->addWidget(messagesLabel);

        scrollArea->setWidget(scrollAreaWidgetContents_3);

        horizontalLayout->addWidget(scrollArea);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        imageIdLabel_2 = new QLabel(frame);
        imageIdLabel_2->setObjectName(QStringLiteral("imageIdLabel_2"));
        QFont font;
        font.setKerning(true);
        imageIdLabel_2->setFont(font);

        horizontalLayout->addWidget(imageIdLabel_2);

        imageIdLabel = new QLabel(frame);
        imageIdLabel->setObjectName(QStringLiteral("imageIdLabel"));
        imageIdLabel->setFont(font);

        horizontalLayout->addWidget(imageIdLabel);

        line_2 = new QFrame(frame);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        sizeLabel_2 = new QLabel(frame);
        sizeLabel_2->setObjectName(QStringLiteral("sizeLabel_2"));
        sizeLabel_2->setFont(font);

        horizontalLayout->addWidget(sizeLabel_2);

        sizeLabel = new QLabel(frame);
        sizeLabel->setObjectName(QStringLiteral("sizeLabel"));
        sizeLabel->setFont(font);

        horizontalLayout->addWidget(sizeLabel);

        line_3 = new QFrame(frame);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_3);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addWidget(frame, 2, 0, 1, 2);

        processingImageSliderFrame = new QFrame(qvtProcessingViewer);
        processingImageSliderFrame->setObjectName(QStringLiteral("processingImageSliderFrame"));
        processingImageSliderFrame->setFrameShape(QFrame::StyledPanel);
        processingImageSliderFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(processingImageSliderFrame);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        processingImageSliderLayout = new QHBoxLayout();
        processingImageSliderLayout->setObjectName(QStringLiteral("processingImageSliderLayout"));

        horizontalLayout_4->addLayout(processingImageSliderLayout);


        gridLayout->addWidget(processingImageSliderFrame, 1, 0, 1, 1);


        retranslateUi(qvtProcessingViewer);

        processToolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(qvtProcessingViewer);
    } // setupUi

    void retranslateUi(QWidget *qvtProcessingViewer)
    {
        qvtProcessingViewer->setWindowTitle(QApplication::translate("qvtProcessingViewer", "Form", 0));
        loadImageButton->setText(QApplication::translate("qvtProcessingViewer", "Load Image", 0));
        processToolBox->setItemText(processToolBox->indexOf(generalPage), QApplication::translate("qvtProcessingViewer", "General", 0));
        resetFunctionsButton->setText(QApplication::translate("qvtProcessingViewer", "Reset", 0));
        color2GrayButton->setText(QApplication::translate("qvtProcessingViewer", "Color -> Gray", 0));
        color2HSVButton->setText(QApplication::translate("qvtProcessingViewer", "Color -> HSV", 0));
        processToolBox->setItemText(processToolBox->indexOf(colorPage), QApplication::translate("qvtProcessingViewer", "Color", 0));
        processToolBox->setItemText(processToolBox->indexOf(schedulerPage), QApplication::translate("qvtProcessingViewer", "Scheduler", 0));
        processingViewerLabel->setText(QApplication::translate("qvtProcessingViewer", "Process Viewer Empty", 0));
        messagesLabel->setText(QApplication::translate("qvtProcessingViewer", "Messages", 0));
        imageIdLabel_2->setText(QApplication::translate("qvtProcessingViewer", "Image:", 0));
        imageIdLabel->setText(QApplication::translate("qvtProcessingViewer", "Image", 0));
        sizeLabel_2->setText(QApplication::translate("qvtProcessingViewer", "Size:", 0));
        sizeLabel->setText(QApplication::translate("qvtProcessingViewer", "SIZE", 0));
    } // retranslateUi

};

namespace Ui {
    class qvtProcessingViewer: public Ui_qvtProcessingViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QVTPROCESSINGVIEWER_H
