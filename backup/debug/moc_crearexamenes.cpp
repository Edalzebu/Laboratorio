/****************************************************************************
** Meta object code from reading C++ file 'crearexamenes.h'
**
** Created: Thu 4. Jul 02:54:48 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../crearexamenes.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'crearexamenes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_crearExamenes[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      25,   14,   14,   14, 0x08,
      49,   14,   14,   14, 0x08,
      87,   75,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_crearExamenes[] = {
    "crearExamenes\0\0closing()\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0item,column\0"
    "on_treeWidget_itemActivated(QTreeWidgetItem*,int)\0"
};

void crearExamenes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        crearExamenes *_t = static_cast<crearExamenes *>(_o);
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_treeWidget_itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData crearExamenes::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject crearExamenes::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_crearExamenes,
      qt_meta_data_crearExamenes, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &crearExamenes::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *crearExamenes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *crearExamenes::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_crearExamenes))
        return static_cast<void*>(const_cast< crearExamenes*>(this));
    return QWidget::qt_metacast(_clname);
}

int crearExamenes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void crearExamenes::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
