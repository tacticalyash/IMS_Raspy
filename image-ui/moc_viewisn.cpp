/****************************************************************************
** Meta object code from reading C++ file 'viewisn.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "viewisn.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewisn.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_viewISN_t {
    QByteArrayData data[11];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_viewISN_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_viewISN_t qt_meta_stringdata_viewISN = {
    {
QT_MOC_LITERAL(0, 0, 7), // "viewISN"
QT_MOC_LITERAL(1, 8, 28), // "on_pushButton_Search_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 32), // "on_pushButton_Delete_ISN_clicked"
QT_MOC_LITERAL(4, 71, 25), // "on_pushButton_ref_clicked"
QT_MOC_LITERAL(5, 97, 21), // "onLineEditTextChanged"
QT_MOC_LITERAL(6, 119, 13), // "getISN_detail"
QT_MOC_LITERAL(7, 133, 3), // "str"
QT_MOC_LITERAL(8, 137, 10), // "searchText"
QT_MOC_LITERAL(9, 148, 30), // "on_pushButton_save_PDF_clicked"
QT_MOC_LITERAL(10, 179, 31) // "on_pushButton_Print_ISN_clicked"

    },
    "viewISN\0on_pushButton_Search_clicked\0"
    "\0on_pushButton_Delete_ISN_clicked\0"
    "on_pushButton_ref_clicked\0"
    "onLineEditTextChanged\0getISN_detail\0"
    "str\0searchText\0on_pushButton_save_PDF_clicked\0"
    "on_pushButton_Print_ISN_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_viewISN[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       6,    2,   55,    2, 0x08 /* Private */,
       9,    0,   60,    2, 0x08 /* Private */,
      10,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void viewISN::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        viewISN *_t = static_cast<viewISN *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_Search_clicked(); break;
        case 1: _t->on_pushButton_Delete_ISN_clicked(); break;
        case 2: _t->on_pushButton_ref_clicked(); break;
        case 3: _t->onLineEditTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: { QString _r = _t->getISN_detail((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: _t->on_pushButton_save_PDF_clicked(); break;
        case 6: _t->on_pushButton_Print_ISN_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject viewISN::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_viewISN.data,
      qt_meta_data_viewISN,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *viewISN::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *viewISN::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_viewISN.stringdata0))
        return static_cast<void*>(const_cast< viewISN*>(this));
    return QDialog::qt_metacast(_clname);
}

int viewISN::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
