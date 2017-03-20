#ifndef QVTCAMERASETTINGSDIALOG_H
#define QVTCAMERASETTINGSDIALOG_H

// Qt
#include <QDialog>
#include <QSpinBox>
#include <QSlider>
#include <QTimer>
#include <QSettings>
#include <QFileDialog>
// General
#include "general/qvtStructures.h"
#include "general/qvtConfig.h"

namespace Ui {
class qvtCameraSettingsDialog;
}

class qvtCameraSettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit qvtCameraSettingsDialog(QWidget *parent = 0);
    ~qvtCameraSettingsDialog();

private:
    Ui::qvtCameraSettingsDialog *ui;
    CameraSettings cameraSettings;
    CameraSettings referenceCameraSettings;
    QString cameraSettingsDir;

    void initDialogWidgets();
    void setDialogWidgetsValues();
    void setupWidget(QSpinBox *wSpinBox, QSlider *wSlider, int wMin, int wMax);

protected:
    void changeEvent(QEvent *);

private slots:
    void initCameraSettings();
    void loadCameraSettings();
    void resetCameraSettings();
    void saveCameraSettings();
    void updateCameraSettings();

signals:
    void newCameraSettings(CameraSettings);

};

#endif // QVTCAMERASETTINGSDIALOG_H
