/****************************************************************************
** Meta object code from reading C++ file 'parents.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Student-Management-System/parents.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parents.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSparentsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSparentsENDCLASS = QtMocHelpers::stringData(
    "parents",
    "loadMessages",
    "",
    "loadChildProfile",
    "teachers",
    "on_pushButton_6_clicked",
    "on_getGrades_pushButton_4_clicked",
    "on_selectTeacher_comboBox_currentTextChanged",
    "arg1",
    "on_commandLinkButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSparentsENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[8];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[9];
    char stringdata5[24];
    char stringdata6[34];
    char stringdata7[45];
    char stringdata8[5];
    char stringdata9[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSparentsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSparentsENDCLASS_t qt_meta_stringdata_CLASSparentsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "parents"
        QT_MOC_LITERAL(8, 12),  // "loadMessages"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 16),  // "loadChildProfile"
        QT_MOC_LITERAL(39, 8),  // "teachers"
        QT_MOC_LITERAL(48, 23),  // "on_pushButton_6_clicked"
        QT_MOC_LITERAL(72, 33),  // "on_getGrades_pushButton_4_cli..."
        QT_MOC_LITERAL(106, 44),  // "on_selectTeacher_comboBox_cur..."
        QT_MOC_LITERAL(151, 4),  // "arg1"
        QT_MOC_LITERAL(156, 28)   // "on_commandLinkButton_clicked"
    },
    "parents",
    "loadMessages",
    "",
    "loadChildProfile",
    "teachers",
    "on_pushButton_6_clicked",
    "on_getGrades_pushButton_4_clicked",
    "on_selectTeacher_comboBox_currentTextChanged",
    "arg1",
    "on_commandLinkButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSparentsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    1,   61,    2, 0x08,    6 /* Private */,
       9,    0,   64,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject parents::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSparentsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSparentsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSparentsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<parents, std::true_type>,
        // method 'loadMessages'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadChildProfile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'teachers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_6_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_getGrades_pushButton_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_selectTeacher_comboBox_currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_commandLinkButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void parents::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<parents *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loadMessages(); break;
        case 1: _t->loadChildProfile(); break;
        case 2: _t->teachers(); break;
        case 3: _t->on_pushButton_6_clicked(); break;
        case 4: _t->on_getGrades_pushButton_4_clicked(); break;
        case 5: _t->on_selectTeacher_comboBox_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_commandLinkButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *parents::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *parents::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSparentsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int parents::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
