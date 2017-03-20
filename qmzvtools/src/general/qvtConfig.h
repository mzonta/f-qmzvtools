#ifndef QVTCONFIG_H
#define QVTCONFIG_H

// General
#define DEBUG_MESSAGE_ON                    false
#define DEBUG_OPENCV_WINDOW                 false
#define DEBUG_OPENCV_WINDOW_NAME            "OpenCV Window"

// Directories
#define SETTINGS_DIR_GRP                    QString("Directories")
#define SETTINGS_ROOT_ID                    QString("Root")
#define SETTINGS_CONFIG_ID                  QString("Config")
#define SETTINGS_CONFIG_DIR                 QString("config")
#define SETTINGS_IMAGES_ID                  QString("Images")
#define SETTINGS_IMAGES_DIR                 QString("images")
#define SETTINGS_VIDEOS_ID                  QString("Videos")
#define SETTINGS_VIDEOS_DIR                 QString("videos")
#define SETTINGS_TRANSLATIONS_ID            QString("Translations")
#define SETTINGS_TRANSLATIONS_DIR           QString("translations")

// Files Root Name
#define DEFAULT_IMAGE_FILE_ROOT             QString("qvtIMG")
#define DEFAULT_IMAGE_FILE_EXT              QString("jpg")
#define DEFAULT_VIDEO_FILE_ROOT             QString("qvtVD")
#define DEFAULT_VIDEO_FILE_EXT              QString("avi")

// Languages Settings
// [languages.ini]
#define SETTINGS_LANGUAGES_CODE_GRP         QString("CodeList")
// [useconfig.ini]
#define SETTINGS_CURRENT_LANGUAGE_ID        QString("Language")
// Language Translation File
#define TRANSLATION_FILE_ROOT               QString("qvtTranslation")

// Camera Settings
#define SETTINGS_CAMERA_CAPTURE_GRP         QString("Capture")
#define DEFAULT_CAMERA_RESOLUTION           CAPTURE_SIZE_800x600
#define DEFAULT_CAMERA_FPS                  CAPTURE_FPS_15

#define SETTINGS_CAMERA_SETTINGS_GRP            QString("Settings")
#define DEFAULT_CAMERA_BRIGHTNESS               128
#define DEFAULT_CAMERA_CONTRAST                 128
#define DEFAULT_CAMERA_SATURATION               128
#define DEFAULT_CAMERA_SHARPNESS                128
#define DEFAULT_CAMERA_GAIN                     1
#define DEFAULT_CAMERA_FOCUS                    1
#define DEFAULT_CAMERA_BACKLIGHTCOMPENSATION    0
#define DEFAULT_CAMERA_WHITEBALANCETEMPERATURE  0

// Processings
#define DEFAULT_SLIDE_WIDTH                 320
#define DEFAULT_SLIDE_HEIGHT                240
#define DEFAULT_SLIDE_INDEX_HEIGHT          20
// [functions.ini]
#define FUNCTIONS_FILE                      "functions.ini"
#define COLORS_FUNCTIONS_GROUP              "Color"

// DA RIVEDERE.........

// FPS statistics queue lengths
#define PROCESSING_FPS_STAT_QUEUE_LENGTH    32
#define CAPTURE_FPS_STAT_QUEUE_LENGTH       32

// Image buffer size
#define DEFAULT_IMAGE_BUFFER_SIZE           1
// Drop frame if image/frame buffer is full
#define DEFAULT_DROP_FRAMES                 false
// Thread priorities
#define DEFAULT_CAP_THREAD_PRIO             QThread::NormalPriority
#define DEFAULT_PROC_THREAD_PRIO            QThread::HighPriority

// IMAGE PROCESSING
// Smooth
#define DEFAULT_SMOOTH_TYPE                 0 // Options: [BLUR=0,GAUSSIAN=1,MEDIAN=2]
#define DEFAULT_SMOOTH_PARAM_1              3
#define DEFAULT_SMOOTH_PARAM_2              3
#define DEFAULT_SMOOTH_PARAM_3              0
#define DEFAULT_SMOOTH_PARAM_4              0
// Dilate
#define DEFAULT_DILATE_ITERATIONS           1
// Erode
#define DEFAULT_ERODE_ITERATIONS            1
// Flip
#define DEFAULT_FLIP_CODE                   0 // Options: [x-axis=0,y-axis=1,both axes=-1]
// Canny
#define DEFAULT_CANNY_THRESHOLD_1           10
#define DEFAULT_CANNY_THRESHOLD_2           00
#define DEFAULT_CANNY_APERTURE_SIZE         3
#define DEFAULT_CANNY_L2GRADIENT            false

#endif // CONFIG_H
