/****************************************************************************
** Meta object code from reading C++ file 'consultersr.h'
**
** Created: Thu 2. Jan 02:23:20 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../consultersr.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'consultersr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_consultersr[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      36,   12,   12,   12, 0x08,
      67,   62,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_consultersr[] = {
    "consultersr\0\0on_consulter_clicked()\0"
    "on_RechercherPB_clicked()\0arg1\0"
    "on_tabWidget_currentChanged(QWidget*)\0"
};

void consultersr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        consultersr *_t = static_cast<consultersr *>(_o);
        switch (_id) {
        case 0: _t->on_consulter_clicked(); break;
        case 1: _t->on_RechercherPB_clicked(); break;
        case 2: _t->on_tabWidget_currentChanged((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData consultersr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject consultersr::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_consultersr,
      qt_meta_data_consultersr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &consultersr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *consultersr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *consultersr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_consultersr))
        return static_cast<void*>(const_cast< consultersr*>(this));
    return QWidget::qt_metacast(_clname);
}

int consultersr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE