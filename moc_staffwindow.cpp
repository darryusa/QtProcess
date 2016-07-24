/****************************************************************************
** Meta object code from reading C++ file 'staffwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "staffwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'staffwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StaffWindow_t {
    QByteArrayData data[11];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StaffWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StaffWindow_t qt_meta_stringdata_StaffWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "StaffWindow"
QT_MOC_LITERAL(1, 12, 11), // "staffReturn"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 26), // "on_modifyPINButton_clicked"
QT_MOC_LITERAL(4, 52, 29), // "on_searchLineEdit_textChanged"
QT_MOC_LITERAL(5, 82, 4), // "arg1"
QT_MOC_LITERAL(6, 87, 24), // "on_confirmButton_clicked"
QT_MOC_LITERAL(7, 112, 23), // "on_returnButton_clicked"
QT_MOC_LITERAL(8, 136, 23), // "on_removeButton_clicked"
QT_MOC_LITERAL(9, 160, 20), // "on_tableView_clicked"
QT_MOC_LITERAL(10, 181, 5) // "index"

    },
    "StaffWindow\0staffReturn\0\0"
    "on_modifyPINButton_clicked\0"
    "on_searchLineEdit_textChanged\0arg1\0"
    "on_confirmButton_clicked\0"
    "on_returnButton_clicked\0on_removeButton_clicked\0"
    "on_tableView_clicked\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StaffWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   10,

       0        // eod
};

void StaffWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StaffWindow *_t = static_cast<StaffWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->staffReturn(); break;
        case 1: _t->on_modifyPINButton_clicked(); break;
        case 2: _t->on_searchLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_confirmButton_clicked(); break;
        case 4: _t->on_returnButton_clicked(); break;
        case 5: _t->on_removeButton_clicked(); break;
        case 6: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StaffWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StaffWindow::staffReturn)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject StaffWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StaffWindow.data,
      qt_meta_data_StaffWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StaffWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StaffWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StaffWindow.stringdata0))
        return static_cast<void*>(const_cast< StaffWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int StaffWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void StaffWindow::staffReturn()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
