/********************************************************************************
** Form generated from reading UI file 'qvtFunctionsScheduler.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QVTFUNCTIONSSCHEDULER_H
#define UI_QVTFUNCTIONSSCHEDULER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qvtFunctionsScheduler
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *functionsLayout;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *qvtFunctionsScheduler)
    {
        if (qvtFunctionsScheduler->objectName().isEmpty())
            qvtFunctionsScheduler->setObjectName(QStringLiteral("qvtFunctionsScheduler"));
        qvtFunctionsScheduler->resize(360, 569);
        verticalLayout = new QVBoxLayout(qvtFunctionsScheduler);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(qvtFunctionsScheduler);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 340, 549));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        functionsLayout = new QVBoxLayout();
        functionsLayout->setSpacing(2);
        functionsLayout->setObjectName(QStringLiteral("functionsLayout"));

        verticalLayout_2->addLayout(functionsLayout);

        verticalSpacer_3 = new QSpacerItem(20, 520, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(qvtFunctionsScheduler);

        QMetaObject::connectSlotsByName(qvtFunctionsScheduler);
    } // setupUi

    void retranslateUi(QWidget *qvtFunctionsScheduler)
    {
        qvtFunctionsScheduler->setWindowTitle(QApplication::translate("qvtFunctionsScheduler", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class qvtFunctionsScheduler: public Ui_qvtFunctionsScheduler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QVTFUNCTIONSSCHEDULER_H
