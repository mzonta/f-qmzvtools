// Local
#include "qvtCameraSettingsDialog.h"
#include "ui_qvtCameraSettingsDialog.h"

qvtCameraSettingsDialog::qvtCameraSettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::qvtCameraSettingsDialog)
{
    ui->setupUi(this);

    // Initialize Camera Settings
    initCameraSettings();
    // Load Settings Button
    connect(ui->loadSettingsButton, &QPushButton::clicked, this, &qvtCameraSettingsDialog::loadCameraSettings);
    // Reset Settings Button
    connect(ui->resetSettingsButton, &QPushButton::clicked, this, &qvtCameraSettingsDialog::resetCameraSettings);
    // Save Setting Button
    connect(ui->saveSettingsButton, &QPushButton::clicked, this, &qvtCameraSettingsDialog::saveCameraSettings);
    // Check for Widgets Value Update
    QTimer *timerUpdateCameraSettings = new QTimer(this);
    connect(timerUpdateCameraSettings, &QTimer::timeout, this, &qvtCameraSettingsDialog::updateCameraSettings);
    timerUpdateCameraSettings->start(100);
}

qvtCameraSettingsDialog::~qvtCameraSettingsDialog()
{
    delete ui;
}

void qvtCameraSettingsDialog::changeEvent(QEvent *evnt)
{
    if (evnt->type() == QEvent::LanguageChange) {
        ui->retranslateUi(this);
    }
    else {
        QDialog::changeEvent(evnt);
    }
}

void qvtCameraSettingsDialog::initCameraSettings()
{
    // Camera Settings Dir
    QSettings sts;
    sts.beginGroup(SETTINGS_DIR_GRP);
    cameraSettingsDir = sts.value(SETTINGS_CONFIG_ID).toString();
    sts.endGroup();

    // Camera Settings Default Values
    cameraSettings.Brightness = DEFAULT_CAMERA_BRIGHTNESS;
    cameraSettings.Contrast = DEFAULT_CAMERA_CONTRAST;
    cameraSettings.Saturation = DEFAULT_CAMERA_SATURATION;
    cameraSettings.Sharpness = DEFAULT_CAMERA_SHARPNESS;
    cameraSettings.Gain = DEFAULT_CAMERA_GAIN;
    cameraSettings.Focus = DEFAULT_CAMERA_FOCUS;
    cameraSettings.BacklightCompensation = DEFAULT_CAMERA_BACKLIGHTCOMPENSATION;
    cameraSettings.WhiteBalanceTemperature = DEFAULT_CAMERA_WHITEBALANCETEMPERATURE;
    // Initialize Reference Value
    referenceCameraSettings = cameraSettings;
    // Define Dialog Widgets Parameter
    initDialogWidgets();
    // Send Signal to Update Camera Viewer
    emit newCameraSettings(cameraSettings);
}

void qvtCameraSettingsDialog::setupWidget(QSpinBox *wSpinBox, QSlider *wSlider, int wMin, int wMax)
{
    // SpinBox
    wSpinBox->setMinimum(wMin);
    wSpinBox->setMaximum(wMax);
    // Slider
    wSlider->setMinimum(wMin);
    wSlider->setMaximum(wMax);
    // Connect SpinBox <-> Slider
    connect(wSlider, &QSlider::valueChanged, wSpinBox, &QSpinBox::setValue);
    connect(wSpinBox, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), wSlider, &QSlider::setValue);
}

void qvtCameraSettingsDialog::setDialogWidgetsValues()
{
    ui->brightnessSpinBox->setValue(cameraSettings.Brightness);
    ui->contrastSpinBox->setValue(cameraSettings.Contrast);
    ui->saturationSpinBox->setValue(cameraSettings.Saturation);
    ui->sharpnessSpinBox->setValue(cameraSettings.Sharpness);
    ui->gainSpinBox->setValue(cameraSettings.Gain);
    ui->backlightSpinBox->setValue(cameraSettings.BacklightCompensation);
    ui->whiteSpinBox->setValue(cameraSettings.WhiteBalanceTemperature);
    ui->focusSpinBox->setValue(cameraSettings.Focus);
}

void qvtCameraSettingsDialog::initDialogWidgets()
{
    // Brightness
    setupWidget(ui->brightnessSpinBox, ui->brightnessSlider, 0, 255);
    // Contrast
    setupWidget(ui->contrastSpinBox, ui->contrastSlider, 0, 255);
    // Saturation
    setupWidget(ui->saturationSpinBox, ui->saturationSlider, 0, 255);
    // Sharpness
    setupWidget(ui->sharpnessSpinBox, ui->sharpnessSlider, 0, 255);
    // Gain
    setupWidget(ui->gainSpinBox, ui->gainSlider, 0, 255);
    // Backlight Compensation
    setupWidget(ui->backlightSpinBox, ui->backlightSlider, 0, 1);
    // White Balance Temperature
    setupWidget(ui->whiteSpinBox, ui->whiteSlider, 0, 6501);
    // Focus
    setupWidget(ui->focusSpinBox, ui->focusSlider, 0, 256);
    // Set Widgets Value
    setDialogWidgetsValues();
}

void qvtCameraSettingsDialog::updateCameraSettings()
{
    cameraSettings.Brightness = ui->brightnessSpinBox->value();
    cameraSettings.Contrast = ui->contrastSpinBox->value();
    cameraSettings.Saturation = ui->saturationSpinBox->value();
    cameraSettings.Sharpness = ui->sharpnessSpinBox->value();
    cameraSettings.Gain = ui->gainSpinBox->value();
    cameraSettings.BacklightCompensation = ui->backlightSpinBox->value();
    cameraSettings.WhiteBalanceTemperature = ui->whiteSpinBox->value();
    cameraSettings.Focus = ui->focusSpinBox->value(); 
    // Send Signal to Update Camera Viewer
    emit newCameraSettings(cameraSettings);
}

void qvtCameraSettingsDialog::loadCameraSettings()
{
    QString settingsFile = QFileDialog::getOpenFileName(this,tr("Load Settings"),cameraSettingsDir,tr("Settings Files ( *.ini )"));
    if (!settingsFile.isEmpty()) {
        QSettings cameraSettingsFile(settingsFile, QSettings::IniFormat);
        cameraSettingsFile.beginGroup(SETTINGS_CAMERA_SETTINGS_GRP);
        referenceCameraSettings.Brightness = cameraSettingsFile.value("Brightness").toInt();
        referenceCameraSettings.Contrast = cameraSettingsFile.value("Contrast").toInt();
        referenceCameraSettings.Saturation = cameraSettingsFile.value("Saturation").toInt();
        referenceCameraSettings.Sharpness = cameraSettingsFile.value("Sharpness").toInt();
        referenceCameraSettings.Gain = cameraSettingsFile.value("Gain").toInt();
        referenceCameraSettings.BacklightCompensation = cameraSettingsFile.value("BacklightCompensation").toInt();
        referenceCameraSettings.WhiteBalanceTemperature = cameraSettingsFile.value("WhiteBalanceTemperature").toInt();
        referenceCameraSettings.Focus = cameraSettingsFile.value("Focus").toInt();
        cameraSettingsFile.endGroup();
        // Initialize Camera Settings
        cameraSettings = referenceCameraSettings;
        // Define Dialog Widgets Parameter
        //initDialogWidgets();
        // Set Widgets Values
        setDialogWidgetsValues();
        // Send Signal to Update Camera Viewer
        emit newCameraSettings(cameraSettings);
    }
}

void qvtCameraSettingsDialog::resetCameraSettings()
{
    // reset Camera Settings with Loaded Value
    cameraSettings = referenceCameraSettings;
    // Set Widgets Values
    setDialogWidgetsValues();
    // Send Signal to Update Camera Viewer
    emit newCameraSettings(cameraSettings);
}

void qvtCameraSettingsDialog::saveCameraSettings()
{
    QString settingsFile = QFileDialog::getSaveFileName(this,tr("Save Settings"),cameraSettingsDir,tr("Settings Files ( *.ini )"));
    QFileInfo settingsFileInfo(settingsFile);
    if (settingsFileInfo.suffix().isEmpty()) {
        settingsFile = settingsFile + QString(".ini");
    }
    QSettings cameraSettingsFile(settingsFile, QSettings::IniFormat);
    cameraSettingsFile.beginGroup(SETTINGS_CAMERA_SETTINGS_GRP);
    cameraSettingsFile.setValue("Brightness", cameraSettings.Brightness);
    cameraSettingsFile.setValue("Contrast", cameraSettings.Contrast);
    cameraSettingsFile.setValue("Saturation", cameraSettings.Saturation);
    cameraSettingsFile.setValue("Sharpness", cameraSettings.Sharpness);
    cameraSettingsFile.setValue("Gain", cameraSettings.Gain);
    cameraSettingsFile.setValue("BacklightCompensation", cameraSettings.BacklightCompensation);
    cameraSettingsFile.setValue("WhiteBalanceTemperature", cameraSettings.WhiteBalanceTemperature);
    cameraSettingsFile.setValue("Focus", cameraSettings.Focus);
    cameraSettingsFile.endGroup();
}
