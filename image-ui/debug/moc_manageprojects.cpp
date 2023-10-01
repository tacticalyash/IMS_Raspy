/****************************************************************************
** Meta object code from reading C++ file 'manageprojects.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../manageprojects.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manageprojects.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_manageProjects_t {
    QByteArrayData data[11];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_manageProjects_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_manageProjects_t qt_meta_stringdata_manageProjects = {
    {
QT_MOC_LITERAL(0, 0, 14), // "manageProjects"
QT_MOC_LITERAL(1, 15, 18), // "projectNameChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "projectName"
QT_MOC_LITERAL(4, 47, 13), // "buttonClicked"
QT_MOC_LITERAL(5, 61, 33), // "on_pushButton_add_project_cli..."
QT_MOC_LITERAL(6, 95, 36), // "on_pushButton_Delete_project_..."
QT_MOC_LITERAL(7, 132, 13), // "deleteProject"
QT_MOC_LITERAL(8, 146, 34), // "on_pushButton_edit_project_cl..."
QT_MOC_LITERAL(9, 181, 20), // "onProjectDoubleClick"
QT_MOC_LITERAL(10, 202, 29) // "on_pushButton_refresh_clicked"

    },
    "manageProjects\0projectNameChanged\0\0"
    "projectName\0buttonClicked\0"
    "on_pushButton_add_project_clicked\0"
    "on_pushButton_Delete_project_clicked\0"
    "deleteProject\0on_pushButton_edit_project_clicked\0"
    "onProjectDoubleClick\0on_pushButton_refresh_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_manageProjects[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    1,   60,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    1,   64,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void,

       0        // eod
};

void manageProjects::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        manageProjects *_t = static_cast<manageProjects *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->projectNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->buttonClicked(); break;
        case 2: _t->on_pushButton_add_project_clicked(); break;
        case 3: _t->on_pushButton_Delete_project_clicked(); break;
        case 4: _t->deleteProject((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_edit_project_clicked(); break;
        case 6: _t->onProjectDoubleClick((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_refresh_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (manageProjects::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&manageProjects::projectNameChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (manageProjects::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&manageProjects::buttonClicked)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject manageProjects::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_manageProjects.data,
      qt_meta_data_manageProjects,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *manageProjects::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *manageProjects::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_manageProjects.stringdata0))
        return static_cast<void*>(const_cast< manageProjects*>(this));
    return QDialog::qt_metacast(_clname);
}

int manageProjects::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void manageProjects::projectNameChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void manageProjects::buttonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
