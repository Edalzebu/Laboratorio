/****************************************************************************
** Meta object code from reading C++ file 'hemograma.h'
**
** Created: Sun 28. Jul 20:16:36 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hemograma.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hemograma.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_hemograma[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      21,   10,   10,   10, 0x08,
      45,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_hemograma[] = {
    "hemograma\0\0closing()\0on_pushButton_clicked()\0"
    "isClosing()\0"
};

void hemograma::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        hemograma *_t = static_cast<hemograma *>(_o);
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->isClosing(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData hemograma::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject hemograma::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_hemograma,
      qt_meta_data_hemograma, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &hemograma::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *hemograma::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *hemograma::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_hemograma))
        return static_cast<void*>(const_cast< hemograma*>(this));
    return QWidget::qt_metacast(_clname);
}

int hemograma::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void hemograma::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
