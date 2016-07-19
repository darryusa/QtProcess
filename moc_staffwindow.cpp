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
    QByteArrayData data[20];
    char stringdata0[400];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StaffWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StaffWindow_t qt_meta_stringdata_StaffWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "StaffWindow"
QT_MOC_LITERAL(1, 12, 19), // "RemoveButtonPressed"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "AddButtonPressed"
QT_MOC_LITERAL(4, 50, 22), // "on_tableView_activated"
QT_MOC_LITERAL(5, 73, 5), // "index"
QT_MOC_LITERAL(6, 79, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(7, 103, 25), // "on_pushButton_ADD_clicked"
QT_MOC_LITERAL(8, 129, 26), // "on_pushButton_EDIT_clicked"
QT_MOC_LITERAL(9, 156, 28), // "on_pushButton_DELETE_clicked"
QT_MOC_LITERAL(10, 185, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(11, 209, 26), // "on_modifyPINButton_clicked"
QT_MOC_LITERAL(12, 236, 23), // "on_listWidget_activated"
QT_MOC_LITERAL(13, 260, 25), // "on_listWidget_itemClicked"
QT_MOC_LITERAL(14, 286, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(15, 303, 4), // "item"
QT_MOC_LITERAL(16, 308, 24), // "on_tableWidget_activated"
QT_MOC_LITERAL(17, 333, 31), // "on_searchLineEdit_returnPressed"
QT_MOC_LITERAL(18, 365, 29), // "on_searchLineEdit_textChanged"
QT_MOC_LITERAL(19, 395, 4) // "arg1"

    },
    "StaffWindow\0RemoveButtonPressed\0\0"
    "AddButtonPressed\0on_tableView_activated\0"
    "index\0on_pushButton_3_clicked\0"
    "on_pushButton_ADD_clicked\0"
    "on_pushButton_EDIT_clicked\0"
    "on_pushButton_DELETE_clicked\0"
    "on_pushButton_6_clicked\0"
    "on_modifyPINButton_clicked\0"
    "on_listWidget_activated\0"
    "on_listWidget_itemClicked\0QListWidgetItem*\0"
    "item\0on_tableWidget_activated\0"
    "on_searchLineEdit_returnPressed\0"
    "on_searchLineEdit_textChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StaffWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    1,   86,    2, 0x08 /* Private */,
       6,    0,   89,    2, 0x08 /* Private */,
       7,    0,   90,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    1,   95,    2, 0x08 /* Private */,
      13,    1,   98,    2, 0x08 /* Private */,
      16,    1,  101,    2, 0x08 /* Private */,
      17,    0,  104,    2, 0x08 /* Private */,
      18,    1,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,

       0        // eod
};

void StaffWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StaffWindow *_t = static_cast<StaffWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RemoveButtonPressed(); break;
        case 1: _t->AddButtonPressed(); break;
        case 2: _t->on_tableView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;

        case 4: _t->on_pushButton_ADD_clicked(); break;
        case 5: _t->on_pushButton_EDIT_clicked(); break;
        case 6: _t->on_pushButton_DELETE_clicked(); break;

        case 8: _t->on_modifyPINButton_clicked(); break;
        case 9: _t->on_listWidget_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;

        case 13: _t->on_searchLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
