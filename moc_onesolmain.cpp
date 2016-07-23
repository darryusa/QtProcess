/****************************************************************************
** Meta object code from reading C++ file 'onesolmain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../newfolder/QtProcess/onesolmain.h"
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
    QByteArrayData data[13];
    char stringdata0[174];
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
QT_MOC_LITERAL(4, 35, 16), // "saleLogginSignal"
QT_MOC_LITERAL(5, 52, 12), // "UserLoggedIn"
QT_MOC_LITERAL(6, 65, 19), // "reportButtonClicked"
QT_MOC_LITERAL(7, 85, 17), // "staffSlotLoggedin"
QT_MOC_LITERAL(8, 103, 10), // "staffClick"
QT_MOC_LITERAL(9, 114, 18), // "reportSlotLoggedin"
QT_MOC_LITERAL(10, 133, 11), // "saleClicked"
QT_MOC_LITERAL(11, 145, 14), // "saleLogginSlot"
QT_MOC_LITERAL(12, 160, 13) // "staffReturned"

    },
    "OneSolMain\0staffLogin\0\0reportLogin\0"
    "saleLogginSignal\0UserLoggedIn\0"
    "reportButtonClicked\0staffSlotLoggedin\0"
    "staffClick\0reportSlotLoggedin\0saleClicked\0"
    "saleLogginSlot\0staffReturned"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OneSolMain[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
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

void OneSolMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OneSolMain *_t = static_cast<OneSolMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->staffLogin(); break;
        case 1: _t->reportLogin(); break;
        case 2: _t->saleLogginSignal(); break;
        case 3: _t->UserLoggedIn(); break;
        case 4: _t->reportButtonClicked(); break;
        case 5: _t->staffSlotLoggedin(); break;
        case 6: _t->staffClick(); break;
        case 7: _t->reportSlotLoggedin(); break;
        case 8: _t->saleClicked(); break;
        case 9: _t->saleLogginSlot(); break;
        case 10: _t->staffReturned(); break;
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
        {
            typedef void (OneSolMain::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OneSolMain::saleLogginSignal)) {
                *result = 2;
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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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

// SIGNAL 2
void OneSolMain::saleLogginSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
