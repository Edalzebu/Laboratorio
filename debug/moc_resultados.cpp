/****************************************************************************
** Meta object code from reading C++ file 'resultados.h'
**
** Created: Sun 28. Jul 20:16:38 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../resultados.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resultados.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_resultados[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      22,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_resultados[] = {
    "resultados\0\0closing()\0"
    "on_commandLinkButton_clicked()\0"
};

void resultados::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        resultados *_t = static_cast<resultados *>(_o);
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: _t->on_commandLinkButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData resultados::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject resultados::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_resultados,
      qt_meta_data_resultados, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &resultados::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *resultados::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *resultados::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_resultados))
        return static_cast<void*>(const_cast< resultados*>(this));
    return QWidget::qt_metacast(_clname);
}

int resultados::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void resultados::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
