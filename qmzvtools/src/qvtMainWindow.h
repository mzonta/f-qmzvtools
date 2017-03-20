#ifndef QVTMAINWINDOW_H
#define QVTMAINWINDOW_H

// Qt
#include <QMainWindow>
#include <QApplication>
#include <QDesktopWidget>
// General
#include "general/qvtLanguageDialog.h"
// Camera
#include "qvtCameraViewer.h"
// Image
#include "qvtImageViewer.h"
// Processing
#include "processing/qvtProcessingViewer.h"

namespace Ui {
class qvtMainWindow;
}

class qvtMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit qvtMainWindow(QWidget *parent = 0);
    ~qvtMainWindow();

private:
    Ui::qvtMainWindow *ui;
    qvtLanguageDialog *languagesDialog;
    qvtCameraViewer *cameraViewer;
    qvtImageViewer *imageViewer;
    qvtProcessingViewer *imageProcessingViewer;

    QMenu *fileMenu;
    QMenu *toolsMenu;
    QMenu *windowMenu;
    QMenu *helpMenu;
    QAction *exitAct;
    QAction *startCameraAct;
    QAction *stopCameraAct;
    QAction *languagesAct;
    QAction *englishAct;
    QAction *germanAct;
    QAction *windowCameraAct;
    QAction *windowImageAct;
    QAction *windowProcessingAct;
    QAction *aboutAct;
    QAction *aboutQtAct;

    void createActions();
    void createMenus();

protected:
    void changeEvent(QEvent *evnt);

private slots:
    // - Window Menu
    void windowCamera();
    void windowImage();
    void windowProcessing();
    // - Tools Menu
    void showLanguagesDialog();
    void retranslateTextsUI();
    // - Help Menu
    void about();

};

#endif // QVTMAINWINDOW_H
