// Local
#include "qvtLanguageDialog.h"
#include "../qvtMainWindow.h"
#include "ui_qvtLanguageDialog.h"

qvtLanguageDialog::qvtLanguageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::qvtLanguageDialog)
{
    ui->setupUi(this);
    createLanguageList();
    connect(ui->languageButtonBox, &QDialogButtonBox::accepted, this, &qvtLanguageDialog::onAccepted);
}

qvtLanguageDialog::~qvtLanguageDialog()
{
    delete ui;
}

void qvtLanguageDialog::createLanguageList()
{
    // Language Settings Dir
    QSettings sts;
    sts.beginGroup(SETTINGS_DIR_GRP);
    userSettingsDir = sts.value(SETTINGS_CONFIG_ID).toString();
    sts.endGroup();
    // Language Settings File
    languagesSettingsFile = userSettingsDir + QString("languages.ini");
    QSettings languagesSettings(languagesSettingsFile, QSettings::IniFormat);
    languagesSettings.beginGroup(SETTINGS_LANGUAGES_CODE_GRP);
    languagesList = languagesSettings.allKeys();
    languagesSettings.endGroup();
    // User Settings: Current Language
    userSettingsFile = userSettingsDir + QString("userconfig.ini");
    QSettings userSettings(userSettingsFile, QSettings::IniFormat);
    QString currentLanguage = userSettings.value(SETTINGS_CURRENT_LANGUAGE_ID).toString();
    // List Loop
    QString languageItem = "";
    for (int i = 0; i < languagesList.size(); ++i) {
        // Populate Combobox Languages List
        loadLanguage(languagesList[i], false);
        languageItem = QString(tr("-language-"));
        ui->languageComboBox->addItem(languageItem);
        // Mark Current Language
        if (languagesList[i] == currentLanguage) {
            ui->languageComboBox->setCurrentIndex(i);
        }
    }
    // Load Current Language
    loadLanguage(currentLanguage, false);
}

void qvtLanguageDialog::onAccepted()
{
    QSettings userSettings(userSettingsFile, QSettings::IniFormat);
    int languageIdx = ui->languageComboBox->currentIndex();
    //QString newLanguage = ui->languageComboBox->currentText();
    QString newLanguage = languagesList[languageIdx];
    userSettings.setValue(SETTINGS_CURRENT_LANGUAGE_ID, newLanguage);
    loadLanguage(newLanguage, true);
}

void qvtLanguageDialog::loadLanguage(QString languageName, bool showMsg)
{
    // Translations Files Directory
    QSettings sts;
    sts.beginGroup(SETTINGS_DIR_GRP);
    translationDir = sts.value(SETTINGS_TRANSLATIONS_ID).toString();
    sts.endGroup();
    // Recovery Language Code
    QSettings languagesSettings(languagesSettingsFile, QSettings::IniFormat);
    languagesSettings.beginGroup(SETTINGS_LANGUAGES_CODE_GRP);
    QString loadLanguageCode = languagesSettings.value(languageName).toString();
    languagesSettings.endGroup();       
    // Load Translations File
    QLocale loadLanguageLocale;
    loadLanguageLocale = QLocale(loadLanguageCode);
    qvtTranslator.load(loadLanguageLocale, TRANSLATION_FILE_ROOT, "_", translationDir);
    QApplication::instance()->installTranslator(&qvtTranslator);
    if (showMsg) {
        QMessageBox::information(this, tr("Dialog"), tr("-language-"));
    }
}
