/********************************************************************************
** Form generated from reading UI file 'qvtFunctionView.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QVTFUNCTIONVIEW_H
#define UI_QVTFUNCTIONVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qvtFunctionView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *functionSelection;
    QPushButton *functionProperties;

    void setupUi(QWidget *qvtFunctionView)
    {
        if (qvtFunctionView->objectName().isEmpty())
            qvtFunctionView->setObjectName(QStringLiteral("qvtFunctionView"));
        qvtFunctionView->resize(289, 33);
        QFont font;
        font.setKerning(true);
        qvtFunctionView->setFont(font);
        verticalLayout = new QVBoxLayout(qvtFunctionView);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        functionSelection = new QComboBox(qvtFunctionView);
        functionSelection->setObjectName(QStringLiteral("functionSelection"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(9);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(functionSelection->sizePolicy().hasHeightForWidth());
        functionSelection->setSizePolicy(sizePolicy);
        functionSelection->setMinimumSize(QSize(0, 0));
        functionSelection->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(functionSelection);

        functionProperties = new QPushButton(qvtFunctionView);
        functionProperties->setObjectName(QStringLiteral("functionProperties"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(functionProperties->sizePolicy().hasHeightForWidth());
        functionProperties->setSizePolicy(sizePolicy1);
        functionProperties->setMinimumSize(QSize(0, 0));
        functionProperties->setMaximumSize(QSize(32, 16777215));

        horizontalLayout->addWidget(functionProperties);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(qvtFunctionView);

        QMetaObject::connectSlotsByName(qvtFunctionView);
    } // setupUi

    void retranslateUi(QWidget *qvtFunctionView)
    {
        qvtFunctionView->setWindowTitle(QApplication::translate("qvtFunctionView", "Form", 0));
        functionProperties->setText(QApplication::translate("qvtFunctionView", "P", 0));
    } // retranslateUi

};

namespace Ui {
    class qvtFunctionView: public Ui_qvtFunctionView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QVTFUNCTIONVIEW_H
