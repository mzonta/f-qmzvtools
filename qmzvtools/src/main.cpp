// Local
#include "qvtMainWindow.h"
#include "general/qvtLanguageDialog.h"
#include "qvtMain.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Configuration file located in the default directory.
    a.setOrganizationName(QString("QMZ"));
    a.setApplicationName(QString("QMZVTools"));
    initConfigDir();

    QTranslator appTranslator;
    appTranslator.load(QLocale::system().language(), TRANSLATION_FILE_ROOT,"_");
    a.installTranslator(&appTranslator);

    qvtMainWindow w;
    w.show();

    return a.exec();
}

void initConfigDir()
{
    QDir qvtDir;

    // Exec Directory
    QString execDir = qvtDir.currentPath();
    qvtDir.cdUp();
    // QVT Root Directory
    QString qvtRootDir = qvtDir.path();
    // Config Files Directory
    QString qvtConfigDir = qvtRootDir + QString("/") + SETTINGS_CONFIG_DIR + QString("/");
    // Images Files Directory
    QString qvtImagesDir = qvtRootDir + QString("/") + SETTINGS_IMAGES_DIR + QString("/");
    // Videos Files Directory
    QString qvtVideosDir = qvtRootDir + QString("/") + SETTINGS_VIDEOS_DIR + QString("/");
    // Translations Files Directory
    QString qvtTranslationDir = qvtRootDir + QString("/") + SETTINGS_TRANSLATIONS_DIR + QString("/");

    QSettings qvtSettings;
    qvtSettings.beginGroup(SETTINGS_DIR_GRP);
    qvtSettings.setValue(SETTINGS_ROOT_ID, qvtRootDir);
    qvtSettings.setValue(SETTINGS_CONFIG_ID, qvtConfigDir);
    qvtSettings.setValue(SETTINGS_IMAGES_ID, qvtImagesDir);
    qvtSettings.setValue(SETTINGS_VIDEOS_ID, qvtVideosDir);
    qvtSettings.setValue(SETTINGS_TRANSLATIONS_ID, qvtTranslationDir);
    qvtSettings.endGroup();
}
