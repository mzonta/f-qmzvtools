/********************************************************************************
** Form generated from reading UI file 'qvtMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QVTMAINWINDOW_H
#define UI_QVTMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qvtMainWindow
{
public:
    QWidget *mainWidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qvtMainWindow)
    {
        if (qvtMainWindow->objectName().isEmpty())
            qvtMainWindow->setObjectName(QStringLiteral("qvtMainWindow"));
        qvtMainWindow->resize(992, 746);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qvtMainWindow->sizePolicy().hasHeightForWidth());
        qvtMainWindow->setSizePolicy(sizePolicy);
        mainWidget = new QWidget(qvtMainWindow);
        mainWidget->setObjectName(QStringLiteral("mainWidget"));
        verticalLayout = new QVBoxLayout(mainWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(mainWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(stackedWidget);

        qvtMainWindow->setCentralWidget(mainWidget);
        menuBar = new QMenuBar(qvtMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 992, 25));
        qvtMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qvtMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        qvtMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(qvtMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        qvtMainWindow->setStatusBar(statusBar);

        retranslateUi(qvtMainWindow);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(qvtMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *qvtMainWindow)
    {
        qvtMainWindow->setWindowTitle(QApplication::translate("qvtMainWindow", "QMZ Vision Tools", 0));
    } // retranslateUi

};

namespace Ui {
    class qvtMainWindow: public Ui_qvtMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QVTMAINWINDOW_H
