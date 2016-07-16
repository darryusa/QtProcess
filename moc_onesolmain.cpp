/****************************************************************************
** Meta object code from reading C++ file 'onesolmain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "onesolmain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'onesolmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OneSolMain_t {
    QByteArrayData data[9];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OneSolMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OneSolMain_t qt_meta_stringdata_OneSolMain = {
    {
QT_MOC_LITERAL(0, 0, 10), // "OneSolMain"
QT_MOC_LITERAL(1, 11, 10), // "staffLogin"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "reportLogin"
QT_MOC_LITERAL(4, 35, 12), // "UserLoggedIn"
QT_MOC_LITERAL(5, 48, 19), // "reportButtonClicked"
QT_MOC_LITERAL(6, 68, 17), // "staffSlotLoggedin"
QT_MOC_LITERAL(7, 86, 10), // "staffClick"
QT_MOC_LITERAL(8, 97, 18) // "reportSlotLoggedin"

    },
    "OneSolMain\0staffLogin\0\0reportLogin\0"
    "UserLoggedIn\0reportButtonClicked\0"
    "staffSlotLoggedin\0staffClick\0"
    "reportSlotLoggedin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OneSolMain[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OneSolMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OneSolMain *_t = static_cast<OneSolMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->staffLogin(); break;
        case 1: _t->reportLogin(); break;
        case 2: _t->UserLoggedIn(); break;
        case 3: _t->reportButtonClicked(); break;
        case 4: _t->staffSlotLoggedin(); break;
        case 5: _t->staffClick(); break;
        case 6: _t->reportSlotLoggedin(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OneSolMain::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OneSolMain::staffLogin)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OneSolMain::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OneSolMain::reportLogin)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject OneSolMain::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OneSolMain.data,
      qt_meta_data_OneSolMain,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OneSolMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OneSolMain::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OneSolMain.stringdata0))
        return static_cast<void*>(const_cast< OneSolMain*>(this));
    return QWidget::qt_metacast(_clname);
}

int OneSolMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OneSolMain::staffLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OneSolMain::reportLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
