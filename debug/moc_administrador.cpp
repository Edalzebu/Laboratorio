/****************************************************************************
** Meta object code from reading C++ file 'administrador.h'
**
** Created: Sun 28. Jul 20:16:40 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../administrador.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'administrador.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_administrador[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   25,   14,   14, 0x08,
      65,   25,   14,   14, 0x08,
      98,   14,   14,   14, 0x08,
     129,  124,   14,   14, 0x08,
     158,   14,   14,   14, 0x08,
     189,  124,   14,   14, 0x08,
     229,   14,   14,   14, 0x08,
     241,   14,   14,   14, 0x08,
     277,  265,   14,   14, 0x08,
     330,   14,   14,   14, 0x08,
     364,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_administrador[] = {
    "administrador\0\0closing()\0date\0"
    "on_calendarWidget_activated(QDate)\0"
    "on_calendarWidget_clicked(QDate)\0"
    "on_boton_verReg_clicked()\0arg1\0"
    "on_spinBox_valueChanged(int)\0"
    "on_boton_crearExamen_clicked()\0"
    "on_line_crearExamen_textEdited(QString)\0"
    "clearForm()\0on_toolButton_clicked()\0"
    "item,column\0"
    "on_tree_Examenes_itemActivated(QTreeWidgetItem*,int)\0"
    "on_boton_eliminarExamen_clicked()\0"
    "on_commandLinkButton_3_clicked()\0"
};

void administrador::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        administrador *_t = static_cast<administrador *>(_o);
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: _t->on_calendarWidget_activated((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 2: _t->on_calendarWidget_clicked((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 3: _t->on_boton_verReg_clicked(); break;
        case 4: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_boton_crearExamen_clicked(); break;
        case 6: _t->on_line_crearExamen_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->clearForm(); break;
        case 8: _t->on_toolButton_clicked(); break;
        case 9: _t->on_tree_Examenes_itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->on_boton_eliminarExamen_clicked(); break;
        case 11: _t->on_commandLinkButton_3_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData administrador::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject administrador::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_administrador,
      qt_meta_data_administrador, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &administrador::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *administrador::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *administrador::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_administrador))
        return static_cast<void*>(const_cast< administrador*>(this));
    return QWidget::qt_metacast(_clname);
}

int administrador::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void administrador::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
