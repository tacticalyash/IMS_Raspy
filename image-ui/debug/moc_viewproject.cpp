/****************************************************************************
** Meta object code from reading C++ file 'viewproject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../viewproject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewproject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ViewProject_t {
    QByteArrayData data[6];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewProject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewProject_t qt_meta_stringdata_ViewProject = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ViewProject"
QT_MOC_LITERAL(1, 12, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 20), // "onProjectDoubleClick"
QT_MOC_LITERAL(4, 58, 27), // "retrieveTableIDFromDatabase"
QT_MOC_LITERAL(5, 86, 28) // "on_pushButton_cancel_clicked"

    },
    "ViewProject\0on_pushButton_3_clicked\0"
    "\0onProjectDoubleClick\0retrieveTableIDFromDatabase\0"
    "on_pushButton_cancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewProject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       4,    1,   38,    2, 0x08 /* Private */,
       5,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Int, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void ViewProject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewProject *_t = static_cast<ViewProject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_3_clicked(); break;
        case 1: _t->onProjectDoubleClick((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: { int _r = _t->retrieveTableIDFromDatabase((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->on_pushButton_cancel_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ViewProject::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ViewProject.data,
      qt_meta_data_ViewProject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ViewProject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewProject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ViewProject.stringdata0))
        return static_cast<void*>(const_cast< ViewProject*>(this));
    return QDialog::qt_metacast(_clname);
}

int ViewProject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
