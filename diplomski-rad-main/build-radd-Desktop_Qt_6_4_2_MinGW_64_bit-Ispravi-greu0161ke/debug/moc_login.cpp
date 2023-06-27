/****************************************************************************
** Meta object code from reading C++ file 'login.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../radd/login.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_logIn_t {
    uint offsetsAndSizes[16];
    char stringdata0[6];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[17];
    char stringdata5[23];
    char stringdata6[20];
    char stringdata7[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_logIn_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_logIn_t qt_meta_stringdata_logIn = {
    {
        QT_MOC_LITERAL(0, 5),  // "logIn"
        QT_MOC_LITERAL(6, 8),  // "loggedIn"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 9),  // "tablename"
        QT_MOC_LITERAL(26, 16),  // "on_Login_clicked"
        QT_MOC_LITERAL(43, 22),  // "on_pokazi_stateChanged"
        QT_MOC_LITERAL(66, 19),  // "on_Register_clicked"
        QT_MOC_LITERAL(86, 20)   // "on_Confirmdb_clicked"
    },
    "logIn",
    "loggedIn",
    "",
    "tablename",
    "on_Login_clicked",
    "on_pokazi_stateChanged",
    "on_Register_clicked",
    "on_Confirmdb_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_logIn[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   47,    2, 0x08,    3 /* Private */,
       5,    0,   48,    2, 0x08,    4 /* Private */,
       6,    0,   49,    2, 0x08,    5 /* Private */,
       7,    0,   50,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject logIn::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_logIn.offsetsAndSizes,
    qt_meta_data_logIn,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_logIn_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<logIn, std::true_type>,
        // method 'loggedIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_Login_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pokazi_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Register_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Confirmdb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void logIn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<logIn *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loggedIn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->on_Login_clicked(); break;
        case 2: _t->on_pokazi_stateChanged(); break;
        case 3: _t->on_Register_clicked(); break;
        case 4: _t->on_Confirmdb_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (logIn::*)(QString );
            if (_t _q_method = &logIn::loggedIn; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *logIn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *logIn::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_logIn.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int logIn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void logIn::loggedIn(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
