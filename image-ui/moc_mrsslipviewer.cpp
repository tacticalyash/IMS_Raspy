/****************************************************************************
** Meta object code from reading C++ file 'mrsslipviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mrsslipviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mrsslipviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MRSslipViewer_t {
    QByteArrayData data[12];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MRSslipViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MRSslipViewer_t qt_meta_stringdata_MRSslipViewer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MRSslipViewer"
QT_MOC_LITERAL(1, 14, 21), // "onLineEditTextChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 29), // "on_pushButton_refresh_clicked"
QT_MOC_LITERAL(4, 67, 13), // "getISN_detail"
QT_MOC_LITERAL(5, 81, 3), // "str"
QT_MOC_LITERAL(6, 85, 10), // "searchText"
QT_MOC_LITERAL(7, 96, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 118, 17), // "generateTextTable"
QT_MOC_LITERAL(9, 136, 15), // "QSqlQueryModel*"
QT_MOC_LITERAL(10, 152, 5), // "model"
QT_MOC_LITERAL(11, 158, 29) // "on_pushButton_del_MRS_clicked"

    },
    "MRSslipViewer\0onLineEditTextChanged\0"
    "\0on_pushButton_refresh_clicked\0"
    "getISN_detail\0str\0searchText\0"
    "on_pushButton_clicked\0generateTextTable\0"
    "QSqlQueryModel*\0model\0"
    "on_pushButton_del_MRS_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MRSslipViewer[] = {

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
       4,    2,   48,    2, 0x08 /* Private */,
       7,    0,   53,    2, 0x08 /* Private */,
       8,    1,   54,    2, 0x08 /* Private */,
      11,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void,
    QMetaType::QString, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void MRSslipViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MRSslipViewer *_t = static_cast<MRSslipViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onLineEditTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_refresh_clicked(); break;
        case 2: { QString _r = _t->getISN_detail((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: { QString _r = _t->generateTextTable((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: _t->on_pushButton_del_MRS_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        }
    }
}

const QMetaObject MRSslipViewer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MRSslipViewer.data,
      qt_meta_data_MRSslipViewer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MRSslipViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MRSslipViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MRSslipViewer.stringdata0))
        return static_cast<void*>(const_cast< MRSslipViewer*>(this));
    return QDialog::qt_metacast(_clname);
}

int MRSslipViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
