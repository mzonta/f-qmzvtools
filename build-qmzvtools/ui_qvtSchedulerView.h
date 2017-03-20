/********************************************************************************
** Form generated from reading UI file 'qvtSchedulerView.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QVTSCHEDULERVIEW_H
#define UI_QVTSCHEDULERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qvtSchedulerView
{
public:

    void setupUi(QWidget *qvtSchedulerView)
    {
        if (qvtSchedulerView->objectName().isEmpty())
            qvtSchedulerView->setObjectName(QStringLiteral("qvtSchedulerView"));
        qvtSchedulerView->resize(287, 485);

        retranslateUi(qvtSchedulerView);

        QMetaObject::connectSlotsByName(qvtSchedulerView);
    } // setupUi

    void retranslateUi(QWidget *qvtSchedulerView)
    {
        qvtSchedulerView->setWindowTitle(QApplication::translate("qvtSchedulerView", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class qvtSchedulerView: public Ui_qvtSchedulerView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QVTSCHEDULERVIEW_H
