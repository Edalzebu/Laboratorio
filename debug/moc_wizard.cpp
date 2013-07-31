/****************************************************************************
** Meta object code from reading C++ file 'wizard.h'
**
** Created: Sun 28. Jul 20:16:51 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../wizard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Wizard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,    8,    7,    7, 0x08,
      42,    8,    7,    7, 0x08,
      73,    8,    7,    7, 0x08,
     118,  111,    7,    7, 0x08,
     136,    7,    7,    7, 0x0a,
     164,    7,    7,    7, 0x0a,
     192,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Wizard[] = {
    "Wizard\0\0arg1\0on_spinBox_valueChanged(int)\0"
    "on_spinBox_2_valueChanged(int)\0"
    "on_line_nombreEx_textChanged(QString)\0"
    "pagina\0changingPage(int)\0"
    "Wizard_NextButton_clicked()\0"
    "Wizard_BackButton_clicked()\0"
    "Wizard_FinishButton_clicked()\0"
};

void Wizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Wizard *_t = static_cast<Wizard *>(_o);
        switch (_id) {
        case 0: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_spinBox_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_line_nombreEx_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->changingPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->Wizard_NextButton_clicked(); break;
        case 5: _t->Wizard_BackButton_clicked(); break;
        case 6: _t->Wizard_FinishButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Wizard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Wizard::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_Wizard,
      qt_meta_data_Wizard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Wizard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Wizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Wizard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Wizard))
        return static_cast<void*>(const_cast< Wizard*>(this));
    return QWizard::qt_metacast(_clname);
}

int Wizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
