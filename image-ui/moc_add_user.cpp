/****************************************************************************
** Meta object code from reading C++ file 'add_user.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "add_user.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'add_user.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_add_user_t {
    QByteArrayData data[8];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_add_user_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_add_user_t qt_meta_stringdata_add_user = {
    {
QT_MOC_LITERAL(0, 0, 8), // "add_user"
QT_MOC_LITERAL(1, 9, 36), // "on_pushButton_moveTo_project_..."
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 33), // "on_pushButton_refresh_all_cli..."
QT_MOC_LITERAL(4, 81, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(5, 105, 32), // "on_pushButton_search_inv_clicked"
QT_MOC_LITERAL(6, 138, 39), // "on_pushButton_allmove_invento..."
QT_MOC_LITERAL(7, 178, 28) // "on_pushButton_issued_clicked"

    },
    "add_user\0on_pushButton_moveTo_project_clicked\0"
    "\0on_pushButton_refresh_all_clicked\0"
    "on_pushButton_2_clicked\0"
    "on_pushButton_search_inv_clicked\0"
    "on_pushButton_allmove_inventory_clicked\0"
    "on_pushButton_issued_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_add_user[] = {

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
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void add_user::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        add_user *_t = static_cast<add_user *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_moveTo_project_clicked(); break;
        case 1: _t->on_pushButton_refresh_all_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_pushButton_search_inv_clicked(); break;
        case 4: _t->on_pushButton_allmove_inventory_clicked(); break;
        case 5: _t->on_pushButton_issued_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject add_user::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_add_user.data,
      qt_meta_data_add_user,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *add_user::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *add_user::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_add_user.stringdata0))
        return static_cast<void*>(const_cast< add_user*>(this));
    return QDialog::qt_metacast(_clname);
}

int add_user::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
