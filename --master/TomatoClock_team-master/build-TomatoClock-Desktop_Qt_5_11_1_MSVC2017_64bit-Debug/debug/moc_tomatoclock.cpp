/****************************************************************************
** Meta object code from reading C++ file 'tomatoclock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TomatoClock/tomatoclock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tomatoclock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TomatoClock_t {
    QByteArrayData data[11];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TomatoClock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TomatoClock_t qt_meta_stringdata_TomatoClock = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TomatoClock"
QT_MOC_LITERAL(1, 12, 14), // "on_Add_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 17), // "on_Manage_clicked"
QT_MOC_LITERAL(4, 46, 15), // "on_Done_clicked"
QT_MOC_LITERAL(5, 62, 16), // "on_Start_clicked"
QT_MOC_LITERAL(6, 79, 7), // "myslot1"
QT_MOC_LITERAL(7, 87, 7), // "myslot2"
QT_MOC_LITERAL(8, 95, 7), // "myslot3"
QT_MOC_LITERAL(9, 103, 15), // "on_Stop_clicked"
QT_MOC_LITERAL(10, 119, 17) // "on_Finish_clicked"

    },
    "TomatoClock\0on_Add_clicked\0\0"
    "on_Manage_clicked\0on_Done_clicked\0"
    "on_Start_clicked\0myslot1\0myslot2\0"
    "myslot3\0on_Stop_clicked\0on_Finish_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TomatoClock[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TomatoClock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TomatoClock *_t = static_cast<TomatoClock *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Add_clicked(); break;
        case 1: _t->on_Manage_clicked(); break;
        case 2: _t->on_Done_clicked(); break;
        case 3: _t->on_Start_clicked(); break;
        case 4: _t->myslot1(); break;
        case 5: _t->myslot2(); break;
        case 6: _t->myslot3(); break;
        case 7: _t->on_Stop_clicked(); break;
        case 8: _t->on_Finish_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TomatoClock::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TomatoClock.data,
      qt_meta_data_TomatoClock,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TomatoClock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TomatoClock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TomatoClock.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TomatoClock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
