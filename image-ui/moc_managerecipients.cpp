/****************************************************************************
** Meta object code from reading C++ file 'managerecipients.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "managerecipients.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'managerecipients.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_manageRecipients_t {
    QByteArrayData data[8];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_manageRecipients_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_manageRecipients_t qt_meta_stringdata_manageRecipients = {
    {
QT_MOC_LITERAL(0, 0, 16), // "manageRecipients"
QT_MOC_LITERAL(1, 17, 16), // "deleteRecipients"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 35), // "on_pushButton_addRecipients_c..."
QT_MOC_LITERAL(4, 71, 39), // "on_pushButton_rename_recipien..."
QT_MOC_LITERAL(5, 111, 26), // "on_pushButton_edit_clicked"
QT_MOC_LITERAL(6, 138, 39), // "on_pushButton_delete_recipien..."
QT_MOC_LITERAL(7, 178, 29) // "on_pushButton_refresh_clicked"

    },
    "manageRecipients\0deleteRecipients\0\0"
    "on_pushButton_addRecipients_clicked\0"
    "on_pushButton_rename_recipients_clicked\0"
    "on_pushButton_edit_clicked\0"
    "on_pushButton_delete_recipients_clicked\0"
    "on_pushButton_refresh_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_manageRecipients[] = {

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
       3,    0,   47,    2, 0x08 /* Private */,
       4,    0,   48,    2, 0x08 /* Private */,
       5,    0,   49,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void manageRecipients::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        manageRecipients *_t = static_cast<manageRecipients *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteRecipients((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_addRecipients_clicked(); break;
        case 2: _t->on_pushButton_rename_recipients_clicked(); break;
        case 3: _t->on_pushButton_edit_clicked(); break;
        case 4: _t->on_pushButton_delete_recipients_clicked(); break;
        case 5: _t->on_pushButton_refresh_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject manageRecipients::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_manageRecipients.data,
      qt_meta_data_manageRecipients,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *manageRecipients::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *manageRecipients::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_manageRecipients.stringdata0))
        return static_cast<void*>(const_cast< manageRecipients*>(this));
    return QDialog::qt_metacast(_clname);
}

int manageRecipients::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
