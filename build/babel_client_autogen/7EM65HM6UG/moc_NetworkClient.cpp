/****************************************************************************
** Meta object code from reading C++ file 'NetworkClient.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/NetworkClient.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetworkClient.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NetworkClient_t {
    QByteArrayData data[11];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkClient_t qt_meta_stringdata_NetworkClient = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NetworkClient"
QT_MOC_LITERAL(1, 14, 18), // "listUsersConnected"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(4, 59, 18), // "chatReceiveMessage"
QT_MOC_LITERAL(5, 78, 11), // "std::string"
QT_MOC_LITERAL(6, 90, 13), // "someoneCallMe"
QT_MOC_LITERAL(7, 104, 15), // "callGetDeclined"
QT_MOC_LITERAL(8, 120, 19), // "endCallBeforeAccept"
QT_MOC_LITERAL(9, 140, 18), // "endCallAfterAccept"
QT_MOC_LITERAL(10, 159, 14) // "callIsAccepted"

    },
    "NetworkClient\0listUsersConnected\0\0"
    "std::vector<std::string>\0chatReceiveMessage\0"
    "std::string\0someoneCallMe\0callGetDeclined\0"
    "endCallBeforeAccept\0endCallAfterAccept\0"
    "callIsAccepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,
       7,    0,   58,    2, 0x06 /* Public */,
       8,    0,   59,    2, 0x06 /* Public */,
       9,    0,   60,    2, 0x06 /* Public */,
      10,    0,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NetworkClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetworkClient *_t = static_cast<NetworkClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->listUsersConnected((*reinterpret_cast< std::vector<std::string>(*)>(_a[1]))); break;
        case 1: _t->chatReceiveMessage((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 2: _t->someoneCallMe((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 3: _t->callGetDeclined(); break;
        case 4: _t->endCallBeforeAccept(); break;
        case 5: _t->endCallAfterAccept(); break;
        case 6: _t->callIsAccepted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NetworkClient::*_t)(std::vector<std::string> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkClient::listUsersConnected)) {
                *result = 0;
            }
        }
        {
            typedef void (NetworkClient::*_t)(std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkClient::chatReceiveMessage)) {
                *result = 1;
            }
        }
        {
            typedef void (NetworkClient::*_t)(std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkClient::someoneCallMe)) {
                *result = 2;
            }
        }
        {
            typedef void (NetworkClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkClient::callGetDeclined)) {
                *result = 3;
            }
        }
        {
            typedef void (NetworkClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkClient::endCallBeforeAccept)) {
                *result = 4;
            }
        }
        {
            typedef void (NetworkClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkClient::endCallAfterAccept)) {
                *result = 5;
            }
        }
        {
            typedef void (NetworkClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkClient::callIsAccepted)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject NetworkClient::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NetworkClient.data,
      qt_meta_data_NetworkClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NetworkClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkClient.stringdata0))
        return static_cast<void*>(const_cast< NetworkClient*>(this));
    return QWidget::qt_metacast(_clname);
}

int NetworkClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void NetworkClient::listUsersConnected(std::vector<std::string> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NetworkClient::chatReceiveMessage(std::string _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NetworkClient::someoneCallMe(std::string _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NetworkClient::callGetDeclined()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void NetworkClient::endCallBeforeAccept()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void NetworkClient::endCallAfterAccept()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void NetworkClient::callIsAccepted()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
