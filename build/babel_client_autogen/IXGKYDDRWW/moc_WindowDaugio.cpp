/****************************************************************************
** Meta object code from reading C++ file 'WindowDaugio.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/Client/Babel/WindowDaugio.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WindowDaugio.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WindowDaugio_t {
    QByteArrayData data[23];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowDaugio_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowDaugio_t qt_meta_stringdata_WindowDaugio = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WindowDaugio"
QT_MOC_LITERAL(1, 13, 17), // "exitButtonTrigger"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 23), // "disconnectButtonTrigger"
QT_MOC_LITERAL(4, 56, 17), // "muteButtonTrigger"
QT_MOC_LITERAL(5, 74, 18), // "soundButtonTrigger"
QT_MOC_LITERAL(6, 93, 11), // "sendMessage"
QT_MOC_LITERAL(7, 105, 16), // "chatInputChanged"
QT_MOC_LITERAL(8, 122, 4), // "text"
QT_MOC_LITERAL(9, 127, 14), // "usersConnected"
QT_MOC_LITERAL(10, 142, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(11, 167, 3), // "arr"
QT_MOC_LITERAL(12, 171, 14), // "receiveMessage"
QT_MOC_LITERAL(13, 186, 11), // "std::string"
QT_MOC_LITERAL(14, 198, 3), // "msg"
QT_MOC_LITERAL(15, 202, 9), // "getCalled"
QT_MOC_LITERAL(16, 212, 6), // "caller"
QT_MOC_LITERAL(17, 219, 6), // "hangUp"
QT_MOC_LITERAL(18, 226, 15), // "getCalledCloseH"
QT_MOC_LITERAL(19, 242, 15), // "getCalledCloseP"
QT_MOC_LITERAL(20, 258, 17), // "deleteWaitElement"
QT_MOC_LITERAL(21, 276, 17), // "deleteCallElement"
QT_MOC_LITERAL(22, 294, 12) // "callAccepted"

    },
    "WindowDaugio\0exitButtonTrigger\0\0"
    "disconnectButtonTrigger\0muteButtonTrigger\0"
    "soundButtonTrigger\0sendMessage\0"
    "chatInputChanged\0text\0usersConnected\0"
    "std::vector<std::string>\0arr\0"
    "receiveMessage\0std::string\0msg\0getCalled\0"
    "caller\0hangUp\0getCalledCloseH\0"
    "getCalledCloseP\0deleteWaitElement\0"
    "deleteCallElement\0callAccepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowDaugio[] = {

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
       7,    1,   94,    2, 0x0a /* Public */,
       9,    1,   97,    2, 0x0a /* Public */,
      12,    1,  100,    2, 0x0a /* Public */,
      15,    1,  103,    2, 0x0a /* Public */,
      17,    0,  106,    2, 0x0a /* Public */,
      18,    0,  107,    2, 0x0a /* Public */,
      19,    0,  108,    2, 0x0a /* Public */,
      20,    0,  109,    2, 0x0a /* Public */,
      21,    0,  110,    2, 0x0a /* Public */,
      22,    0,  111,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WindowDaugio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WindowDaugio *_t = static_cast<WindowDaugio *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->exitButtonTrigger(); break;
        case 1: _t->disconnectButtonTrigger(); break;
        case 2: _t->muteButtonTrigger(); break;
        case 3: _t->soundButtonTrigger(); break;
        case 4: _t->sendMessage(); break;
        case 5: _t->chatInputChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->usersConnected((*reinterpret_cast< std::vector<std::string>(*)>(_a[1]))); break;
        case 7: _t->receiveMessage((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 8: _t->getCalled((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 9: _t->hangUp(); break;
        case 10: _t->getCalledCloseH(); break;
        case 11: _t->getCalledCloseP(); break;
        case 12: _t->deleteWaitElement(); break;
        case 13: _t->deleteCallElement(); break;
        case 14: _t->callAccepted(); break;
        default: ;
        }
    }
}

const QMetaObject WindowDaugio::staticMetaObject = {
    { &AbstractWindow::staticMetaObject, qt_meta_stringdata_WindowDaugio.data,
      qt_meta_data_WindowDaugio,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WindowDaugio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowDaugio::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WindowDaugio.stringdata0))
        return static_cast<void*>(const_cast< WindowDaugio*>(this));
    return AbstractWindow::qt_metacast(_clname);
}

int WindowDaugio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractWindow::qt_metacall(_c, _id, _a);
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
