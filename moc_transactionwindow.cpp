/****************************************************************************
** Meta object code from reading C++ file 'transactionwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../newfolder/QtProcess/transactionwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transactionwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TransactionWindow_t {
    QByteArrayData data[10];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransactionWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransactionWindow_t qt_meta_stringdata_TransactionWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TransactionWindow"
QT_MOC_LITERAL(1, 18, 22), // "on_tableView_activated"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 5), // "index"
QT_MOC_LITERAL(4, 48, 19), // "transactionLoggedin"
QT_MOC_LITERAL(5, 68, 32), // "on_searchBarLineEdit_textChanged"
QT_MOC_LITERAL(6, 101, 4), // "arg1"
QT_MOC_LITERAL(7, 106, 25), // "on_allTableView_activated"
QT_MOC_LITERAL(8, 132, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(9, 156, 23) // "on_treeWidget_activated"

    },
    "TransactionWindow\0on_tableView_activated\0"
    "\0index\0transactionLoggedin\0"
    "on_searchBarLineEdit_textChanged\0arg1\0"
    "on_allTableView_activated\0"
    "on_deleteButton_clicked\0on_treeWidget_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransactionWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    0,   47,    2, 0x08 /* Private */,
       5,    1,   48,    2, 0x08 /* Private */,
       7,    1,   51,    2, 0x08 /* Private */,
       8,    0,   54,    2, 0x08 /* Private */,
       9,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    3,

       0        // eod
};

void TransactionWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransactionWindow *_t = static_cast<TransactionWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_tableView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->transactionLoggedin(); break;
        case 2: _t->on_searchBarLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_allTableView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_deleteButton_clicked(); break;
        case 5: _t->on_treeWidget_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject TransactionWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TransactionWindow.data,
      qt_meta_data_TransactionWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TransactionWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransactionWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TransactionWindow.stringdata0))
        return static_cast<void*>(const_cast< TransactionWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int TransactionWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
