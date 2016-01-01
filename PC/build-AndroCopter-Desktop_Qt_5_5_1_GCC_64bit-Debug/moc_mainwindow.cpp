/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AndroCopterRemote/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "acceptConnection"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "onDataReceived"
QT_MOC_LITERAL(4, 44, 20), // "onClientDisconnected"
QT_MOC_LITERAL(5, 65, 22), // "computeAndSendCommands"
QT_MOC_LITERAL(6, 88, 13), // "emergencyStop"
QT_MOC_LITERAL(7, 102, 15), // "updateReguCoefs"
QT_MOC_LITERAL(8, 118, 15), // "updateReguState"
QT_MOC_LITERAL(9, 134, 2), // "on"
QT_MOC_LITERAL(10, 137, 18), // "togglePhoneLogging"
QT_MOC_LITERAL(11, 156, 16), // "clearMessagesLog"
QT_MOC_LITERAL(12, 173, 15), // "saveMessagesLog"
QT_MOC_LITERAL(13, 189, 22), // "resetDeviceOrientation"
QT_MOC_LITERAL(14, 212, 11), // "setFpvState"
QT_MOC_LITERAL(15, 224, 15), // "setFpvRecording"
QT_MOC_LITERAL(16, 240, 11), // "takePicture"
QT_MOC_LITERAL(17, 252, 15) // "setAltitudeLock"

    },
    "MainWindow\0acceptConnection\0\0"
    "onDataReceived\0onClientDisconnected\0"
    "computeAndSendCommands\0emergencyStop\0"
    "updateReguCoefs\0updateReguState\0on\0"
    "togglePhoneLogging\0clearMessagesLog\0"
    "saveMessagesLog\0resetDeviceOrientation\0"
    "setFpvState\0setFpvRecording\0takePicture\0"
    "setAltitudeLock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    0,   92,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    0,   94,    2, 0x0a /* Public */,
       8,    1,   95,    2, 0x0a /* Public */,
      10,    0,   98,    2, 0x0a /* Public */,
      11,    0,   99,    2, 0x0a /* Public */,
      12,    0,  100,    2, 0x0a /* Public */,
      13,    0,  101,    2, 0x0a /* Public */,
      14,    0,  102,    2, 0x0a /* Public */,
      15,    0,  103,    2, 0x0a /* Public */,
      16,    0,  104,    2, 0x0a /* Public */,
      17,    0,  105,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->acceptConnection(); break;
        case 1: _t->onDataReceived(); break;
        case 2: _t->onClientDisconnected(); break;
        case 3: _t->computeAndSendCommands(); break;
        case 4: _t->emergencyStop(); break;
        case 5: _t->updateReguCoefs(); break;
        case 6: _t->updateReguState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->togglePhoneLogging(); break;
        case 8: _t->clearMessagesLog(); break;
        case 9: _t->saveMessagesLog(); break;
        case 10: _t->resetDeviceOrientation(); break;
        case 11: _t->setFpvState(); break;
        case 12: _t->setFpvRecording(); break;
        case 13: _t->takePicture(); break;
        case 14: _t->setAltitudeLock(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
