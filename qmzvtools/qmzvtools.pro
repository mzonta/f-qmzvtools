#-------------------------------------------------
#
# Project created by QtCreator 2015-09-17T16:40:42
#
#-------------------------------------------------

QT       += core gui widgets multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += C++11

INCLUDEPATH += -I/usr/include/opencv2 \
               -I/usr/local/cuda-6.5/include

LIBS += /usr/lib/libopencv_calib3d.so /usr/lib/libopencv_contrib.so /usr/lib/libopencv_core.so /usr/lib/libopencv_features2d.so /usr/lib/libopencv_flann.so /usr/lib/libopencv_gpu.so /usr/lib/libopencv_highgui.so /usr/lib/libopencv_imgproc.so /usr/lib/libopencv_legacy.so /usr/lib/libopencv_ml.so /usr/lib/libopencv_objdetect.so /usr/lib/libopencv_photo.so /usr/lib/libopencv_stitching.so /usr/lib/libopencv_superres.so /usr/lib/libopencv_ts.a /usr/lib/libopencv_video.so /usr/lib/libopencv_videostab.so /usr/lib/libopencv_esm_panorama.so /usr/lib/libopencv_facedetect.so /usr/lib/libopencv_imuvstab.so /usr/lib/libopencv_tegra.so /usr/lib/libopencv_vstab.so -lcufft -lnpps -lnppi -lnppc -lcudart -lrt -lpthread -lm -ldl \
        -L/usr/local/cuda-6.5/lib/stubs -lcuda \
        -L/usr/local/cuda-6.5/lib -lcudart

TARGET = qmzvtools
TEMPLATE = app

HEADERS  += \
        $$PWD/src/general/qvtConfig.h \
        $$PWD/src/general/qvtStructures.h \
        $$PWD/src/general/qvtTimer.h \
        $$PWD/src/general/qvtMatToQImage.h \
        $$PWD/src/general/qvtQImageToMat.h \
        $$PWD/src/general/qvtLanguageDialog.h \
        $$PWD/src/webcam/C920Camera.h \
        $$PWD/src/qvtMain.h \
        $$PWD/src/qvtMainWindow.h \
        $$PWD/src/qvtImageViewer.h \
        $$PWD/src/qvtCameraViewer.h \        
        $$PWD/src/qvtCameraSettingsDialog.h \
        $$PWD/src/processing/qvtProcessingStructures.h \
        $$PWD/src/processing/qvtMessagesBuffer.h \
        $$PWD/src/processing/qvtImagesBuffer.h \
        $$PWD/src/processing/qvtSlide.h \
        $$PWD/src/processing/qvtImageSlideView.h \
        $$PWD/src/processing/qvtFunction.h \
        $$PWD/src/processing/qvtFunctionView.h \
        $$PWD/src/processing/qvtFunctionsInstalled.h \
        $$PWD/src/processing/qvtFunctionsScheduler.h \
        $$PWD/src/processing/qvtFunctionsSchedulerView.h \
        $$PWD/src/processing/qvtProcessingViewer.h \
        $$PWD/src/processing/qvtProcessingFunctionInterface.h \        
        $$PWD/src/processing/qvtProcessingController.h \
        $$PWD/src/processing/qvtColorSpaces.h \   

SOURCES += \      
        $$PWD/src/general/qvtStructures.cpp \
        $$PWD/src/general/qvtTimer.cpp \
        $$PWD/src/general/qvtMatToQImage.cpp \
        $$PWD/src/general/qvtQImageToMat.cpp \
        $$PWD/src/general/qvtLanguageDialog.cpp \
        $$PWD/src/webcam/C920Camera.cpp \
        $$PWD/src/main.cpp \
        $$PWD/src/qvtMainWindow.cpp \
        $$PWD/src/qvtImageViewer.cpp \
        $$PWD/src/qvtCameraViewer.cpp \
        $$PWD/src/qvtCameraSettingsDialog.cpp \
        $$PWD/src/processing/qvtProcessingStructures.cpp \
        $$PWD/src/processing/qvtMessagesBuffer.cpp \
        $$PWD/src/processing/qvtImagesBuffer.cpp \
        $$PWD/src/processing/qvtSlide.cpp \
        $$PWD/src/processing/qvtImageSlideView.cpp \
        $$PWD/src/processing/qvtFunction.cpp \
        $$PWD/src/processing/qvtFunctionView.cpp \
        $$PWD/src/processing/qvtFunctionsInstalled.cpp \
        $$PWD/src/processing/qvtFunctionsScheduler.cpp \
        $$PWD/src/processing/qvtFunctionsSchedulerView.cpp \
        $$PWD/src/processing/qvtProcessingViewer.cpp \
        $$PWD/src/processing/qvtProcessingController.cpp \
        $$PWD/src/processing/qvtColorSpaces.cpp \                    

FORMS    += \
        $$PWD/src/ui/qvtLanguageDialog.ui \
        $$PWD/src/ui/qvtMainWindow.ui \
        $$PWD/src/ui/qvtImageViewer.ui \
        $$PWD/src/ui/qvtCameraViewer.ui \
        $$PWD/src/ui/qvtCameraSettingsDialog.ui \
        $$PWD/src/processing/ui/qvtSlide.ui \
        $$PWD/src/processing/ui/qvtProcessingViewer.ui \
        $$PWD/src/processing/ui/qvtImageSlideView.ui \
        $$PWD/src/processing/ui/qvtFunctionView.ui \
        $$PWD/src/processing/ui/qvtFunctionsSchedulerView.ui \

TRANSLATIONS += \
        $$PWD/src/languages/qvtTranslation_en.ts \
        $$PWD/src/languages/qvtTranslation_fr.ts \
        $$PWD/src/languages/qvtTranslation_de.ts \
        $$PWD/src/languages/qvtTranslation_es.ts \
        $$PWD/src/languages/qvtTranslation_it.ts \
        $$PWD/src/languages/qvtTranslation_ru.ts



