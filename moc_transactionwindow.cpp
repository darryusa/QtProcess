/****************************************************************************
** Meta object code from reading C++ file 'transactionwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "transactionwindow.h"
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
    QByteArrayData data[12];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransactionWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransactionWindow_t qt_meta_stringdata_TransactionWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TransactionWindow"
QT_MOC_LITERAL(1, 18, 12), // "returnToMain"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 19), // "transactionLoggedin"
QT_MOC_LITERAL(4, 52, 32), // "on_searchBarLineEdit_textChanged"
QT_MOC_LITERAL(5, 85, 4), // "arg1"
QT_MOC_LITERAL(6, 90, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(7, 114, 23), // "on_allTableView_clicked"
QT_MOC_LITERAL(8, 138, 5), // "index"
QT_MOC_LITERAL(9, 144, 21), // "on_treeWidget_clicked"
QT_MOC_LITERAL(10, 166, 25), // "on_checkoutButton_clicked"
QT_MOC_LITERAL(11, 192, 25) // "on_returnButton_2_clicked"

    },
    "TransactionWindow\0returnToMain\0\0"
    "transactionLoggedin\0"
    "on_searchBarLineEdit_textChanged\0arg1\0"
    "on_deleteButton_clicked\0on_allTableView_clicked\0"
    "index\0on_treeWidget_clicked\0"
    "on_checkoutButton_clicked\0"
    "on_returnButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransactionWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    1,   56,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    1,   60,    2, 0x08 /* Private */,
       9,    1,   63,    2, 0x08 /* Private */,
      10,    0,   66,    2, 0x08 /* Private */,
      11,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TransactionWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransactionWindow *_t = static_cast<TransactionWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->returnToMain(); break;
        case 1: _t->transactionLoggedin(); break;
        case 2: _t->on_searchBarLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_deleteButton_clicked(); break;
        case 4: _t->on_allTableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_treeWidget_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_checkoutButton_clicked(); break;
        case 7: _t->on_returnButton_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TransactionWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransactionWindow::returnToMain)) {
                *result = 0;
                return;
            }
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void TransactionWindow::returnToMain()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
