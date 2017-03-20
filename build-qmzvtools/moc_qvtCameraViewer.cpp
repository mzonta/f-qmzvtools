/****************************************************************************
** Meta object code from reading C++ file 'qvtCameraViewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qmzvtools/src/qvtCameraViewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qvtCameraViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_qvtCameraViewer_t {
    QByteArrayData data[16];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qvtCameraViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qvtCameraViewer_t qt_meta_stringdata_qvtCameraViewer = {
    {
QT_MOC_LITERAL(0, 0, 15), // "qvtCameraViewer"
QT_MOC_LITERAL(1, 16, 10), // "liveCamera"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "recordCamera"
QT_MOC_LITERAL(4, 41, 12), // "captureFrame"
QT_MOC_LITERAL(5, 54, 15), // "saveVideoFileAs"
QT_MOC_LITERAL(6, 70, 15), // "saveImageFileAs"
QT_MOC_LITERAL(7, 86, 24), // "showCameraSettingsDialog"
QT_MOC_LITERAL(8, 111, 20), // "showImageContextMenu"
QT_MOC_LITERAL(9, 132, 23), // "liveCameraButtonClicked"
QT_MOC_LITERAL(10, 156, 25), // "recordCameraButtonClicked"
QT_MOC_LITERAL(11, 182, 25), // "captureFrameButtonClicked"
QT_MOC_LITERAL(12, 208, 20), // "updateCameraSettings"
QT_MOC_LITERAL(13, 229, 14), // "CameraSettings"
QT_MOC_LITERAL(14, 244, 10), // "cameraMain"
QT_MOC_LITERAL(15, 255, 8) // "countFPS"

    },
    "qvtCameraViewer\0liveCamera\0\0recordCamera\0"
    "captureFrame\0saveVideoFileAs\0"
    "saveImageFileAs\0showCameraSettingsDialog\0"
    "showImageContextMenu\0liveCameraButtonClicked\0"
    "recordCameraButtonClicked\0"
    "captureFrameButtonClicked\0"
    "updateCameraSettings\0CameraSettings\0"
    "cameraMain\0countFPS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qvtCameraViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       3,    1,   82,    2, 0x08 /* Private */,
       4,    0,   85,    2, 0x08 /* Private */,
       5,    0,   86,    2, 0x08 /* Private */,
       6,    0,   87,    2, 0x08 /* Private */,
       7,    0,   88,    2, 0x08 /* Private */,
       8,    1,   89,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    1,   95,    2, 0x08 /* Private */,
      14,    0,   98,    2, 0x08 /* Private */,
      15,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qvtCameraViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        qvtCameraViewer *_t = static_cast<qvtCameraViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->liveCamera((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->recordCamera((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->captureFrame(); break;
        case 3: _t->saveVideoFileAs(); break;
        case 4: _t->saveImageFileAs(); break;
        case 5: _t->showCameraSettingsDialog(); break;
        case 6: _t->showImageContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->liveCameraButtonClicked(); break;
        case 8: _t->recordCameraButtonClicked(); break;
        case 9: _t->captureFrameButtonClicked(); break;
        case 10: _t->updateCameraSettings((*reinterpret_cast< CameraSettings(*)>(_a[1]))); break;
        case 11: _t->cameraMain(); break;
        case 12: _t->countFPS(); break;
        default: ;
        }
    }
}

const QMetaObject qvtCameraViewer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qvtCameraViewer.data,
      qt_meta_data_qvtCameraViewer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *qvtCameraViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qvtCameraViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_qvtCameraViewer.stringdata0))
        return static_cast<void*>(const_cast< qvtCameraViewer*>(this));
    return QWidget::qt_metacast(_clname);
}

int qvtCameraViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
