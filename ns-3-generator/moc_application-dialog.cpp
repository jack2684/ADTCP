/****************************************************************************
** Meta object code from reading C++ file 'application-dialog.h'
**
** Created: Thu Nov 7 20:07:02 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/application-dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'application-dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ApplicationDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   19,   18,   18, 0x0a,
      82,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ApplicationDialog[] = {
    "ApplicationDialog\0\0current,previous\0"
    "changePage(QListWidgetItem*,QListWidgetItem*)\0"
    "quit()\0"
};

void ApplicationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ApplicationDialog *_t = static_cast<ApplicationDialog *>(_o);
        switch (_id) {
        case 0: _t->changePage((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->quit(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ApplicationDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ApplicationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ApplicationDialog,
      qt_meta_data_ApplicationDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ApplicationDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ApplicationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ApplicationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ApplicationDialog))
        return static_cast<void*>(const_cast< ApplicationDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ApplicationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
