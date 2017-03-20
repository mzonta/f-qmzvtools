/********************************************************************************
** Form generated from reading UI file 'qvtCameraSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QVTCAMERASETTINGSDIALOG_H
#define UI_QVTCAMERASETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_qvtCameraSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *contrastLabel;
    QSpinBox *gainSpinBox;
    QSpinBox *sharpnessSpinBox;
    QSlider *saturationSlider;
    QSpinBox *backlightSpinBox;
    QSlider *focusSlider;
    QSlider *brightnessSlider;
    QSpinBox *focusSpinBox;
    QSlider *whiteSlider;
    QLabel *brightnessLabel;
    QLabel *focusLabel;
    QSpinBox *contrastSpinBox;
    QLabel *backlightLabel;
    QSlider *contrastSlider;
    QSlider *gainSlider;
    QLabel *whiteLabel;
    QLabel *sharpnessLabel;
    QSlider *sharpnessSlider;
    QSpinBox *whiteSpinBox;
    QLabel *saturationLabel;
    QSpinBox *brightnessSpinBox;
    QSlider *backlightSlider;
    QLabel *gainLabel;
    QSpinBox *saturationSpinBox;
    QFrame *line_2;
    QGridLayout *gridLayout_2;
    QPushButton *loadSettingsButton;
    QPushButton *saveSettingsButton;
    QPushButton *resetSettingsButton;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *qvtCameraSettingsDialog)
    {
        if (qvtCameraSettingsDialog->objectName().isEmpty())
            qvtCameraSettingsDialog->setObjectName(QStringLiteral("qvtCameraSettingsDialog"));
        qvtCameraSettingsDialog->resize(400, 380);
        verticalLayout = new QVBoxLayout(qvtCameraSettingsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        contrastLabel = new QLabel(qvtCameraSettingsDialog);
        contrastLabel->setObjectName(QStringLiteral("contrastLabel"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(contrastLabel->sizePolicy().hasHeightForWidth());
        contrastLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        contrastLabel->setFont(font);

        gridLayout->addWidget(contrastLabel, 1, 0, 1, 1);

        gainSpinBox = new QSpinBox(qvtCameraSettingsDialog);
        gainSpinBox->setObjectName(QStringLiteral("gainSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gainSpinBox->sizePolicy().hasHeightForWidth());
        gainSpinBox->setSizePolicy(sizePolicy1);
        gainSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(gainSpinBox, 4, 1, 1, 1);

        sharpnessSpinBox = new QSpinBox(qvtCameraSettingsDialog);
        sharpnessSpinBox->setObjectName(QStringLiteral("sharpnessSpinBox"));
        sizePolicy1.setHeightForWidth(sharpnessSpinBox->sizePolicy().hasHeightForWidth());
        sharpnessSpinBox->setSizePolicy(sizePolicy1);
        sharpnessSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(sharpnessSpinBox, 3, 1, 1, 1);

        saturationSlider = new QSlider(qvtCameraSettingsDialog);
        saturationSlider->setObjectName(QStringLiteral("saturationSlider"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(4);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(saturationSlider->sizePolicy().hasHeightForWidth());
        saturationSlider->setSizePolicy(sizePolicy2);
        saturationSlider->setOrientation(Qt::Horizontal);
        saturationSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(saturationSlider, 2, 2, 1, 1);

        backlightSpinBox = new QSpinBox(qvtCameraSettingsDialog);
        backlightSpinBox->setObjectName(QStringLiteral("backlightSpinBox"));
        sizePolicy1.setHeightForWidth(backlightSpinBox->sizePolicy().hasHeightForWidth());
        backlightSpinBox->setSizePolicy(sizePolicy1);
        backlightSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(backlightSpinBox, 5, 1, 1, 1);

        focusSlider = new QSlider(qvtCameraSettingsDialog);
        focusSlider->setObjectName(QStringLiteral("focusSlider"));
        sizePolicy2.setHeightForWidth(focusSlider->sizePolicy().hasHeightForWidth());
        focusSlider->setSizePolicy(sizePolicy2);
        focusSlider->setOrientation(Qt::Horizontal);
        focusSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(focusSlider, 7, 2, 1, 1);

        brightnessSlider = new QSlider(qvtCameraSettingsDialog);
        brightnessSlider->setObjectName(QStringLiteral("brightnessSlider"));
        sizePolicy2.setHeightForWidth(brightnessSlider->sizePolicy().hasHeightForWidth());
        brightnessSlider->setSizePolicy(sizePolicy2);
        brightnessSlider->setOrientation(Qt::Horizontal);
        brightnessSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(brightnessSlider, 0, 2, 1, 1);

        focusSpinBox = new QSpinBox(qvtCameraSettingsDialog);
        focusSpinBox->setObjectName(QStringLiteral("focusSpinBox"));
        sizePolicy1.setHeightForWidth(focusSpinBox->sizePolicy().hasHeightForWidth());
        focusSpinBox->setSizePolicy(sizePolicy1);
        focusSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(focusSpinBox, 7, 1, 1, 1);

        whiteSlider = new QSlider(qvtCameraSettingsDialog);
        whiteSlider->setObjectName(QStringLiteral("whiteSlider"));
        sizePolicy2.setHeightForWidth(whiteSlider->sizePolicy().hasHeightForWidth());
        whiteSlider->setSizePolicy(sizePolicy2);
        whiteSlider->setOrientation(Qt::Horizontal);
        whiteSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(whiteSlider, 6, 2, 1, 1);

        brightnessLabel = new QLabel(qvtCameraSettingsDialog);
        brightnessLabel->setObjectName(QStringLiteral("brightnessLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(3);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(brightnessLabel->sizePolicy().hasHeightForWidth());
        brightnessLabel->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        font1.setKerning(true);
        brightnessLabel->setFont(font1);

        gridLayout->addWidget(brightnessLabel, 0, 0, 1, 1);

        focusLabel = new QLabel(qvtCameraSettingsDialog);
        focusLabel->setObjectName(QStringLiteral("focusLabel"));
        sizePolicy3.setHeightForWidth(focusLabel->sizePolicy().hasHeightForWidth());
        focusLabel->setSizePolicy(sizePolicy3);
        focusLabel->setFont(font);

        gridLayout->addWidget(focusLabel, 7, 0, 1, 1);

        contrastSpinBox = new QSpinBox(qvtCameraSettingsDialog);
        contrastSpinBox->setObjectName(QStringLiteral("contrastSpinBox"));
        sizePolicy1.setHeightForWidth(contrastSpinBox->sizePolicy().hasHeightForWidth());
        contrastSpinBox->setSizePolicy(sizePolicy1);
        contrastSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(contrastSpinBox, 1, 1, 1, 1);

        backlightLabel = new QLabel(qvtCameraSettingsDialog);
        backlightLabel->setObjectName(QStringLiteral("backlightLabel"));
        sizePolicy3.setHeightForWidth(backlightLabel->sizePolicy().hasHeightForWidth());
        backlightLabel->setSizePolicy(sizePolicy3);
        backlightLabel->setFont(font);

        gridLayout->addWidget(backlightLabel, 5, 0, 1, 1);

        contrastSlider = new QSlider(qvtCameraSettingsDialog);
        contrastSlider->setObjectName(QStringLiteral("contrastSlider"));
        sizePolicy2.setHeightForWidth(contrastSlider->sizePolicy().hasHeightForWidth());
        contrastSlider->setSizePolicy(sizePolicy2);
        contrastSlider->setOrientation(Qt::Horizontal);
        contrastSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(contrastSlider, 1, 2, 1, 1);

        gainSlider = new QSlider(qvtCameraSettingsDialog);
        gainSlider->setObjectName(QStringLiteral("gainSlider"));
        sizePolicy2.setHeightForWidth(gainSlider->sizePolicy().hasHeightForWidth());
        gainSlider->setSizePolicy(sizePolicy2);
        gainSlider->setOrientation(Qt::Horizontal);
        gainSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(gainSlider, 4, 2, 1, 1);

        whiteLabel = new QLabel(qvtCameraSettingsDialog);
        whiteLabel->setObjectName(QStringLiteral("whiteLabel"));
        sizePolicy3.setHeightForWidth(whiteLabel->sizePolicy().hasHeightForWidth());
        whiteLabel->setSizePolicy(sizePolicy3);
        whiteLabel->setFont(font);

        gridLayout->addWidget(whiteLabel, 6, 0, 1, 1);

        sharpnessLabel = new QLabel(qvtCameraSettingsDialog);
        sharpnessLabel->setObjectName(QStringLiteral("sharpnessLabel"));
        sizePolicy3.setHeightForWidth(sharpnessLabel->sizePolicy().hasHeightForWidth());
        sharpnessLabel->setSizePolicy(sizePolicy3);
        sharpnessLabel->setFont(font);

        gridLayout->addWidget(sharpnessLabel, 3, 0, 1, 1);

        sharpnessSlider = new QSlider(qvtCameraSettingsDialog);
        sharpnessSlider->setObjectName(QStringLiteral("sharpnessSlider"));
        sizePolicy2.setHeightForWidth(sharpnessSlider->sizePolicy().hasHeightForWidth());
        sharpnessSlider->setSizePolicy(sizePolicy2);
        sharpnessSlider->setOrientation(Qt::Horizontal);
        sharpnessSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(sharpnessSlider, 3, 2, 1, 1);

        whiteSpinBox = new QSpinBox(qvtCameraSettingsDialog);
        whiteSpinBox->setObjectName(QStringLiteral("whiteSpinBox"));
        sizePolicy1.setHeightForWidth(whiteSpinBox->sizePolicy().hasHeightForWidth());
        whiteSpinBox->setSizePolicy(sizePolicy1);
        whiteSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(whiteSpinBox, 6, 1, 1, 1);

        saturationLabel = new QLabel(qvtCameraSettingsDialog);
        saturationLabel->setObjectName(QStringLiteral("saturationLabel"));
        sizePolicy3.setHeightForWidth(saturationLabel->sizePolicy().hasHeightForWidth());
        saturationLabel->setSizePolicy(sizePolicy3);
        saturationLabel->setFont(font);

        gridLayout->addWidget(saturationLabel, 2, 0, 1, 1);

        brightnessSpinBox = new QSpinBox(qvtCameraSettingsDialog);
        brightnessSpinBox->setObjectName(QStringLiteral("brightnessSpinBox"));
        sizePolicy1.setHeightForWidth(brightnessSpinBox->sizePolicy().hasHeightForWidth());
        brightnessSpinBox->setSizePolicy(sizePolicy1);
        brightnessSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(brightnessSpinBox, 0, 1, 1, 1);

        backlightSlider = new QSlider(qvtCameraSettingsDialog);
        backlightSlider->setObjectName(QStringLiteral("backlightSlider"));
        sizePolicy2.setHeightForWidth(backlightSlider->sizePolicy().hasHeightForWidth());
        backlightSlider->setSizePolicy(sizePolicy2);
        backlightSlider->setOrientation(Qt::Horizontal);
        backlightSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(backlightSlider, 5, 2, 1, 1);

        gainLabel = new QLabel(qvtCameraSettingsDialog);
        gainLabel->setObjectName(QStringLiteral("gainLabel"));
        sizePolicy3.setHeightForWidth(gainLabel->sizePolicy().hasHeightForWidth());
        gainLabel->setSizePolicy(sizePolicy3);
        gainLabel->setFont(font);

        gridLayout->addWidget(gainLabel, 4, 0, 1, 1);

        saturationSpinBox = new QSpinBox(qvtCameraSettingsDialog);
        saturationSpinBox->setObjectName(QStringLiteral("saturationSpinBox"));
        sizePolicy1.setHeightForWidth(saturationSpinBox->sizePolicy().hasHeightForWidth());
        saturationSpinBox->setSizePolicy(sizePolicy1);
        saturationSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(saturationSpinBox, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        line_2 = new QFrame(qvtCameraSettingsDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        loadSettingsButton = new QPushButton(qvtCameraSettingsDialog);
        loadSettingsButton->setObjectName(QStringLiteral("loadSettingsButton"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(loadSettingsButton->sizePolicy().hasHeightForWidth());
        loadSettingsButton->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(loadSettingsButton, 0, 0, 1, 1);

        saveSettingsButton = new QPushButton(qvtCameraSettingsDialog);
        saveSettingsButton->setObjectName(QStringLiteral("saveSettingsButton"));
        sizePolicy4.setHeightForWidth(saveSettingsButton->sizePolicy().hasHeightForWidth());
        saveSettingsButton->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(saveSettingsButton, 0, 2, 1, 1);

        resetSettingsButton = new QPushButton(qvtCameraSettingsDialog);
        resetSettingsButton->setObjectName(QStringLiteral("resetSettingsButton"));
        sizePolicy4.setHeightForWidth(resetSettingsButton->sizePolicy().hasHeightForWidth());
        resetSettingsButton->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(resetSettingsButton, 0, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);

        verticalLayout->addLayout(gridLayout_2);

        line = new QFrame(qvtCameraSettingsDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(qvtCameraSettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(qvtCameraSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), qvtCameraSettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), qvtCameraSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(qvtCameraSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *qvtCameraSettingsDialog)
    {
        qvtCameraSettingsDialog->setWindowTitle(QApplication::translate("qvtCameraSettingsDialog", "Camera Settings", 0));
        contrastLabel->setText(QApplication::translate("qvtCameraSettingsDialog", "Contrast", 0));
        brightnessLabel->setText(QApplication::translate("qvtCameraSettingsDialog", "Brightness", 0));
        focusLabel->setText(QApplication::translate("qvtCameraSettingsDialog", "Focus", 0));
        backlightLabel->setText(QApplication::translate("qvtCameraSettingsDialog", "Backlight Compensation", 0));
        whiteLabel->setText(QApplication::translate("qvtCameraSettingsDialog", "White Balance Temperature", 0));
        sharpnessLabel->setText(QApplication::translate("qvtCameraSettingsDialog", "Sharpness", 0));
        saturationLabel->setText(QApplication::translate("qvtCameraSettingsDialog", "Saturation", 0));
        gainLabel->setText(QApplication::translate("qvtCameraSettingsDialog", "Gain", 0));
#ifndef QT_NO_TOOLTIP
        loadSettingsButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        loadSettingsButton->setText(QApplication::translate("qvtCameraSettingsDialog", "Load", 0));
#ifndef QT_NO_TOOLTIP
        saveSettingsButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        saveSettingsButton->setText(QApplication::translate("qvtCameraSettingsDialog", "Save", 0));
#ifndef QT_NO_TOOLTIP
        resetSettingsButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        resetSettingsButton->setText(QApplication::translate("qvtCameraSettingsDialog", "Reset ", 0));
    } // retranslateUi

};

namespace Ui {
    class qvtCameraSettingsDialog: public Ui_qvtCameraSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QVTCAMERASETTINGSDIALOG_H
