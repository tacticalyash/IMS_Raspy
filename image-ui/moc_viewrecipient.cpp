/****************************************************************************
** Meta object code from reading C++ file 'viewrecipient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "viewrecipient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewrecipient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_viewRecipient_t {
    QByteArrayData data[6];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_viewRecipient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_viewRecipient_t qt_meta_stringdata_viewRecipient = {
    {
QT_MOC_LITERAL(0, 0, 13), // "viewRecipient"
QT_MOC_LITERAL(1, 14, 27), // "retrieveTableIDFromDatabase"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 11), // "projectName"
QT_MOC_LITERAL(4, 55, 20), // "onProjectDoubleClick"
QT_MOC_LITERAL(5, 76, 28) // "on_pushButton_cancel_clicked"

    },
    "viewRecipient\0retrieveTableIDFromDatabase\0"
    "\0projectName\0onProjectDoubleClick\0"
    "on_pushButton_cancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_viewRecipient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       5,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Int, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void,

       0        // eod
};

void viewRecipient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        viewRecipient *_t = static_cast<viewRecipient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->retrieveTableIDFromDatabase((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->onProjectDoubleClick((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_cancel_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject viewRecipient::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_viewRecipient.data,
      qt_meta_data_viewRecipient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *viewRecipient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *viewRecipient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_viewRecipient.stringdata0))
        return static_cast<void*>(const_cast< viewRecipient*>(this));
    return QDialog::qt_metacast(_clname);
}

int viewRecipient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
