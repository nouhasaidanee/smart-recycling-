/****************************************************************************
** Meta object code from reading C++ file 'windowproduit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../inter/Atelier_Connexion/windowproduit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowproduit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WindowProduit_t {
    QByteArrayData data[14];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowProduit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowProduit_t qt_meta_stringdata_WindowProduit = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WindowProduit"
QT_MOC_LITERAL(1, 14, 9), // "loggedOut"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 27), // "on_pushButtonlogout_clicked"
QT_MOC_LITERAL(4, 53, 21), // "on_pb_ajouter_clicked"
QT_MOC_LITERAL(5, 75, 23), // "on_pb_supprimer_clicked"
QT_MOC_LITERAL(6, 99, 22), // "on_pb_modifier_clicked"
QT_MOC_LITERAL(7, 122, 33), // "on_comboBox_3_currentIndexCha..."
QT_MOC_LITERAL(8, 156, 7), // "colonne"
QT_MOC_LITERAL(9, 164, 33), // "on_lineEdit_recherche_textCha..."
QT_MOC_LITERAL(10, 198, 4), // "text"
QT_MOC_LITERAL(11, 203, 17), // "rechercherproduit"
QT_MOC_LITERAL(12, 221, 14), // "termeRecherche"
QT_MOC_LITERAL(13, 236, 17) // "on_pb_pdf_clicked"

    },
    "WindowProduit\0loggedOut\0\0"
    "on_pushButtonlogout_clicked\0"
    "on_pb_ajouter_clicked\0on_pb_supprimer_clicked\0"
    "on_pb_modifier_clicked\0"
    "on_comboBox_3_currentIndexChanged\0"
    "colonne\0on_lineEdit_recherche_textChanged\0"
    "text\0rechercherproduit\0termeRecherche\0"
    "on_pb_pdf_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowProduit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    1,   64,    2, 0x08 /* Private */,
       9,    1,   67,    2, 0x08 /* Private */,
      11,    1,   70,    2, 0x08 /* Private */,
      13,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,

       0        // eod
};

void WindowProduit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WindowProduit *_t = static_cast<WindowProduit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loggedOut(); break;
        case 1: _t->on_pushButtonlogout_clicked(); break;
        case 2: _t->on_pb_ajouter_clicked(); break;
        case 3: _t->on_pb_supprimer_clicked(); break;
        case 4: _t->on_pb_modifier_clicked(); break;
        case 5: _t->on_comboBox_3_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_lineEdit_recherche_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->rechercherproduit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_pb_pdf_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WindowProduit::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowProduit::loggedOut)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WindowProduit::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_WindowProduit.data,
      qt_meta_data_WindowProduit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WindowProduit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowProduit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WindowProduit.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int WindowProduit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void WindowProduit::loggedOut()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
