// Local
#include "qvtMainWindow.h"
#include "ui_qvtMainWindow.h"


qvtMainWindow::qvtMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::qvtMainWindow)
{
    // Setup UI
    ui->setupUi(this);
    this->showMaximized();
    // Open Main Window in the center of screen
    this->move(QApplication::desktop()->screen()->rect().center()-this->rect().center());
    // Instance Translations
    languagesDialog = new qvtLanguageDialog(this);
    // Setup Menu & Actions
    createActions();
    createMenus();
    retranslateTextsUI();
    // Setup StackWidget
    // - Page Index [0]: Camera View
    cameraViewer = new qvtCameraViewer();
    ui->stackedWidget->addWidget(cameraViewer);
    // - Page Index [1]: Image View
    imageViewer = new qvtImageViewer();
    ui->stackedWidget->addWidget(imageViewer);
    // - Page Index [2]: Image Processing View
    imageProcessingViewer = new qvtProcessingViewer();
    ui->stackedWidget->addWidget(imageProcessingViewer);
    // Connections
    connect(imageViewer, &qvtImageViewer::imageFileToProcess, imageProcessingViewer, &qvtProcessingViewer::setImageFileToProcess);
    // Set window
    windowCamera();
}

qvtMainWindow::~qvtMainWindow()
{
    delete ui;
}

void qvtMainWindow::about()
{
    QMessageBox::about(this, tr("About"),
            tr("<p> <b>QMZ Vision Tools</b> </p>"
               "<p> </p>"
               "<p> Author: Massimiliano Zonta </p>"
               "<p> e-mail: mzonta@ieee.org </p>"
               "<p> </p>"));
}

void qvtMainWindow::changeEvent(QEvent *evnt)
{
    if (evnt->type() == QEvent::LanguageChange) {
        retranslateTextsUI();
    }
    else {
        QMainWindow::changeEvent(evnt);
    }
}

void qvtMainWindow::createActions()
{
    // - File Menu
    exitAct = new QAction(this);
    exitAct->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_Q));
    connect(exitAct, &QAction::triggered, this, &qvtMainWindow::close);
    // - Tools Menu
    languagesAct = new QAction(this);
    connect(languagesAct, &QAction::triggered, this,&qvtMainWindow::showLanguagesDialog);
    // - Window Menu
    // -- Camera View
    windowCameraAct = new QAction(this);
    windowCameraAct->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_M));
    connect(windowCameraAct, &QAction::triggered, this, &qvtMainWindow::windowCamera);
    // -- Image View
    windowImageAct = new QAction(this);
    windowImageAct->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_I)); 
    connect(windowImageAct, &QAction::triggered, this, &qvtMainWindow::windowImage);
    // -- Processing View
    windowProcessingAct = new QAction(this);
    windowProcessingAct->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_P));
    connect(windowProcessingAct, &QAction::triggered, this, &qvtMainWindow::windowProcessing);
    // - Help Menu
    aboutAct = new QAction(this);
    connect(aboutAct, &QAction::triggered, this, &qvtMainWindow::about);
    //
    aboutQtAct = new QAction(this);
    connect(aboutQtAct, &QAction::triggered, qApp, &QApplication::aboutQt);
}

void qvtMainWindow::createMenus()
{
    // - File Menu
    fileMenu = new QMenu(this);
    fileMenu->addAction(exitAct);
    // - Tools Menu
    toolsMenu = new QMenu(this);
    toolsMenu->addAction(languagesAct);
    // - Window menu
    windowMenu = new QMenu(this);
    windowMenu->addAction(windowCameraAct);
    windowMenu->addAction(windowImageAct);
    windowMenu->addAction(windowProcessingAct);
    // - Help Menu
    helpMenu = new QMenu(this);
    helpMenu->addAction(aboutAct);
    helpMenu->addAction(aboutQtAct);

    menuBar()->addMenu(fileMenu);
    menuBar()->addMenu(toolsMenu);
    menuBar()->addMenu(windowMenu);
    menuBar()->addMenu(helpMenu);
}

void qvtMainWindow::retranslateTextsUI()
{
    // Actions
    exitAct->setText(tr("Exit"));
    exitAct->setStatusTip(tr("Exit"));
    //
    languagesAct->setText(tr("Languages"));
    languagesAct->setStatusTip(tr("Languages"));
    //
    windowCameraAct->setText(tr("Camera Window"));
    windowCameraAct->setStatusTip(tr("Camera Window"));
    //
    windowImageAct->setText(tr("Image Window"));
    windowImageAct->setStatusTip(tr("Image Window"));
    //
    windowProcessingAct->setText(tr("Processing Window"));
    windowProcessingAct->setStatusTip(tr("Processing Window"));
    //
    aboutAct->setText(tr("About"));
    aboutAct->setStatusTip(tr("About"));
    //
    aboutQtAct->setText(tr("About Qt"));
    aboutQtAct->setStatusTip(tr("About Qt"));
    //
    // Menu
    fileMenu->setTitle(tr("File"));
    //
    toolsMenu->setTitle(tr("Tools"));
    //
    windowMenu->setTitle(tr("Window"));
    //
    helpMenu->setTitle(tr("Help"));
}

void qvtMainWindow::showLanguagesDialog()
{
    languagesDialog->exec();
}

void qvtMainWindow::windowCamera()
{
    ui->stackedWidget->setCurrentWidget(this->cameraViewer);
}

void qvtMainWindow::windowImage()
{
    ui->stackedWidget->setCurrentWidget(this->imageViewer);
}

void qvtMainWindow::windowProcessing()
{
    ui->stackedWidget->setCurrentWidget(this->imageProcessingViewer);
}
