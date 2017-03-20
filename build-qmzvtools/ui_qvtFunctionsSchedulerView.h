/********************************************************************************
** Form generated from reading UI file 'qvtFunctionsSchedulerView.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QVTFUNCTIONSSCHEDULERVIEW_H
#define UI_QVTFUNCTIONSSCHEDULERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qvtFunctionsSchedulerView
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *functionsListLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addFunctionButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *runFunctionButton;

    void setupUi(QWidget *qvtFunctionsSchedulerView)
    {
        if (qvtFunctionsSchedulerView->objectName().isEmpty())
            qvtFunctionsSchedulerView->setObjectName(QStringLiteral("qvtFunctionsSchedulerView"));
        qvtFunctionsSchedulerView->resize(287, 539);
        verticalLayout = new QVBoxLayout(qvtFunctionsSchedulerView);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        scrollArea = new QScrollArea(qvtFunctionsSchedulerView);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 279, 467));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        functionsListLayout = new QVBoxLayout();
        functionsListLayout->setSpacing(3);
        functionsListLayout->setObjectName(QStringLiteral("functionsListLayout"));

        verticalLayout_2->addLayout(functionsListLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addFunctionButton = new QPushButton(qvtFunctionsSchedulerView);
        addFunctionButton->setObjectName(QStringLiteral("addFunctionButton"));

        horizontalLayout->addWidget(addFunctionButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        runFunctionButton = new QPushButton(qvtFunctionsSchedulerView);
        runFunctionButton->setObjectName(QStringLiteral("runFunctionButton"));

        horizontalLayout_2->addWidget(runFunctionButton);


        verticalLayout->addLayout(horizontalLayout_2);

        scrollArea->raise();

        retranslateUi(qvtFunctionsSchedulerView);

        QMetaObject::connectSlotsByName(qvtFunctionsSchedulerView);
    } // setupUi

    void retranslateUi(QWidget *qvtFunctionsSchedulerView)
    {
        qvtFunctionsSchedulerView->setWindowTitle(QApplication::translate("qvtFunctionsSchedulerView", "Form", 0));
        addFunctionButton->setText(QApplication::translate("qvtFunctionsSchedulerView", "Add", 0));
        runFunctionButton->setText(QApplication::translate("qvtFunctionsSchedulerView", "Run", 0));
    } // retranslateUi

};

namespace Ui {
    class qvtFunctionsSchedulerView: public Ui_qvtFunctionsSchedulerView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QVTFUNCTIONSSCHEDULERVIEW_H
