/********************************************************************************
** Form generated from reading UI file 'qvtLanguageDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QVTLANGUAGEDIALOG_H
#define UI_QVTLANGUAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_qvtLanguageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *languageComboBox;
    QDialogButtonBox *languageButtonBox;

    void setupUi(QDialog *qvtLanguageDialog)
    {
        if (qvtLanguageDialog->objectName().isEmpty())
            qvtLanguageDialog->setObjectName(QStringLiteral("qvtLanguageDialog"));
        qvtLanguageDialog->resize(400, 95);
        verticalLayout = new QVBoxLayout(qvtLanguageDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        languageComboBox = new QComboBox(qvtLanguageDialog);
        languageComboBox->setObjectName(QStringLiteral("languageComboBox"));

        verticalLayout->addWidget(languageComboBox);

        languageButtonBox = new QDialogButtonBox(qvtLanguageDialog);
        languageButtonBox->setObjectName(QStringLiteral("languageButtonBox"));
        languageButtonBox->setOrientation(Qt::Horizontal);
        languageButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(languageButtonBox);


        retranslateUi(qvtLanguageDialog);
        QObject::connect(languageButtonBox, SIGNAL(accepted()), qvtLanguageDialog, SLOT(accept()));
        QObject::connect(languageButtonBox, SIGNAL(rejected()), qvtLanguageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(qvtLanguageDialog);
    } // setupUi

    void retranslateUi(QDialog *qvtLanguageDialog)
    {
        qvtLanguageDialog->setWindowTitle(QApplication::translate("qvtLanguageDialog", "Language", 0));
    } // retranslateUi

};

namespace Ui {
    class qvtLanguageDialog: public Ui_qvtLanguageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QVTLANGUAGEDIALOG_H
