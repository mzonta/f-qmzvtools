/********************************************************************************
** Form generated from reading UI file 'qvtFunctionSelection.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QVTFUNCTIONSELECTION_H
#define UI_QVTFUNCTIONSELECTION_H

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

class Ui_qvtFunctionSelection
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *functionSelection;
    QPushButton *functionProperties;

    void setupUi(QWidget *qvtFunctionSelection)
    {
        if (qvtFunctionSelection->objectName().isEmpty())
            qvtFunctionSelection->setObjectName(QStringLiteral("qvtFunctionSelection"));
        qvtFunctionSelection->resize(289, 33);
        QFont font;
        font.setKerning(true);
        qvtFunctionSelection->setFont(font);
        verticalLayout = new QVBoxLayout(qvtFunctionSelection);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        functionSelection = new QComboBox(qvtFunctionSelection);
        functionSelection->setObjectName(QStringLiteral("functionSelection"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(9);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(functionSelection->sizePolicy().hasHeightForWidth());
        functionSelection->setSizePolicy(sizePolicy);
        functionSelection->setMinimumSize(QSize(0, 0));
        functionSelection->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(functionSelection);

        functionProperties = new QPushButton(qvtFunctionSelection);
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


        retranslateUi(qvtFunctionSelection);

        QMetaObject::connectSlotsByName(qvtFunctionSelection);
    } // setupUi

    void retranslateUi(QWidget *qvtFunctionSelection)
    {
        qvtFunctionSelection->setWindowTitle(QApplication::translate("qvtFunctionSelection", "Form", 0));
        functionProperties->setText(QApplication::translate("qvtFunctionSelection", "P", 0));
    } // retranslateUi

};

namespace Ui {
    class qvtFunctionSelection: public Ui_qvtFunctionSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QVTFUNCTIONSELECTION_H
