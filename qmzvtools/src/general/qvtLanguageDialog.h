#ifndef QVTLANGUAGEDIALOG_H
#define QVTLANGUAGEDIALOG_H

// Qt
#include <QString>
#include <QDialog>
#include <QMessageBox>
#include <QSettings>
#include <QTranslator>
#include <QApplication>
#include <QDebug>
// General
#include "qvtConfig.h"

namespace Ui {
class qvtLanguageDialog;
}

class qvtLanguageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit qvtLanguageDialog(QWidget *parent = 0);
    ~qvtLanguageDialog();

private:
    Ui::qvtLanguageDialog *ui;
    QString userSettingsDir;
    QString languagesSettingsFile;
    QString userSettingsFile;
    void createLanguageList();
    QStringList languagesList;
    QString translationDir;
    QTranslator qvtTranslator;
    void loadLanguage(QString, bool);

private slots:
    void onAccepted();

};

#endif // QVTLANGUAGEDIALOG_H
