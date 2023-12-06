/****************************************************************************
** Meta object code from reading C++ file 'windowsfour.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../inter/Atelier_Connexion/windowsfour.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowsfour.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WindowsFour_t {
    QByteArrayData data[19];
    char stringdata0[389];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowsFour_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowsFour_t qt_meta_stringdata_WindowsFour = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WindowsFour"
QT_MOC_LITERAL(1, 12, 9), // "loggedOut"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 27), // "on_pushButtonLogout_clicked"
QT_MOC_LITERAL(4, 51, 21), // "on_pb_ajouter_clicked"
QT_MOC_LITERAL(5, 73, 23), // "on_pb_supprimer_clicked"
QT_MOC_LITERAL(6, 97, 19), // "on_modifier_clicked"
QT_MOC_LITERAL(7, 117, 33), // "on_comboBox_3_currentIndexCha..."
QT_MOC_LITERAL(8, 151, 4), // "arg1"
QT_MOC_LITERAL(9, 156, 33), // "on_lineEdit_recherche_textCha..."
QT_MOC_LITERAL(10, 190, 4), // "text"
QT_MOC_LITERAL(11, 195, 17), // "rechercherDonneur"
QT_MOC_LITERAL(12, 213, 14), // "termeRecherche"
QT_MOC_LITERAL(13, 228, 17), // "on_pb_pdf_clicked"
QT_MOC_LITERAL(14, 246, 33), // "on_comboBox_4_currentIndexCha..."
QT_MOC_LITERAL(15, 280, 30), // "on_pb_supprimer_client_clicked"
QT_MOC_LITERAL(16, 311, 28), // "on_pb_ajouter_client_clicked"
QT_MOC_LITERAL(17, 340, 26), // "on_modifier_client_clicked"
QT_MOC_LITERAL(18, 367, 21) // "on_pdf_client_clicked"

    },
    "WindowsFour\0loggedOut\0\0"
    "on_pushButtonLogout_clicked\0"
    "on_pb_ajouter_clicked\0on_pb_supprimer_clicked\0"
    "on_modifier_clicked\0"
    "on_comboBox_3_currentIndexChanged\0"
    "arg1\0on_lineEdit_recherche_textChanged\0"
    "text\0rechercherDonneur\0termeRecherche\0"
    "on_pb_pdf_clicked\0on_comboBox_4_currentIndexChanged\0"
    "on_pb_supprimer_client_clicked\0"
    "on_pb_ajouter_client_clicked\0"
    "on_modifier_client_clicked\0"
    "on_pdf_client_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowsFour[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    1,   89,    2, 0x08 /* Private */,
       9,    1,   92,    2, 0x08 /* Private */,
      11,    1,   95,    2, 0x08 /* Private */,
      13,    0,   98,    2, 0x08 /* Private */,
      14,    1,   99,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,
      17,    0,  104,    2, 0x08 /* Private */,
      18,    0,  105,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WindowsFour::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WindowsFour *_t = static_cast<WindowsFour *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loggedOut(); break;
        case 1: _t->on_pushButtonLogout_clicked(); break;
        case 2: _t->on_pb_ajouter_clicked(); break;
        case 3: _t->on_pb_supprimer_clicked(); break;
        case 4: _t->on_modifier_clicked(); break;
        case 5: _t->on_comboBox_3_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_lineEdit_recherche_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->rechercherDonneur((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_pb_pdf_clicked(); break;
        case 9: _t->on_comboBox_4_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_pb_supprimer_client_clicked(); break;
        case 11: _t->on_pb_ajouter_client_clicked(); break;
        case 12: _t->on_modifier_client_clicked(); break;
        case 13: _t->on_pdf_client_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WindowsFour::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowsFour::loggedOut)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WindowsFour::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_WindowsFour.data,
      qt_meta_data_WindowsFour,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WindowsFour::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowsFour::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WindowsFour.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int WindowsFour::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void WindowsFour::loggedOut()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
