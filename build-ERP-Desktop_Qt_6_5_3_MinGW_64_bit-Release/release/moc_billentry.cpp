/****************************************************************************
** Meta object code from reading C++ file 'billentry.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ERP/billentry.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'billentry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
struct qt_meta_stringdata_CLASSBillEntryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSBillEntryENDCLASS = QtMocHelpers::stringData(
    "BillEntry",
    "on_comboCustomer_activated",
    "",
    "index",
    "on_comboProduct_activated",
    "on_pBtnAdd_clicked",
    "on_pBSave_clicked",
    "on_pBtnDelLine_clicked",
    "on_pBCancel_clicked",
    "on_tableList_doubleClicked",
    "QModelIndex",
    "on_pBDelete_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBillEntryENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[10];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[26];
    char stringdata5[19];
    char stringdata6[18];
    char stringdata7[23];
    char stringdata8[20];
    char stringdata9[27];
    char stringdata10[12];
    char stringdata11[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSBillEntryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSBillEntryENDCLASS_t qt_meta_stringdata_CLASSBillEntryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "BillEntry"
        QT_MOC_LITERAL(10, 26),  // "on_comboCustomer_activated"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 5),  // "index"
        QT_MOC_LITERAL(44, 25),  // "on_comboProduct_activated"
        QT_MOC_LITERAL(70, 18),  // "on_pBtnAdd_clicked"
        QT_MOC_LITERAL(89, 17),  // "on_pBSave_clicked"
        QT_MOC_LITERAL(107, 22),  // "on_pBtnDelLine_clicked"
        QT_MOC_LITERAL(130, 19),  // "on_pBCancel_clicked"
        QT_MOC_LITERAL(150, 26),  // "on_tableList_doubleClicked"
        QT_MOC_LITERAL(177, 11),  // "QModelIndex"
        QT_MOC_LITERAL(189, 19)   // "on_pBDelete_clicked"
    },
    "BillEntry",
    "on_comboCustomer_activated",
    "",
    "index",
    "on_comboProduct_activated",
    "on_pBtnAdd_clicked",
    "on_pBSave_clicked",
    "on_pBtnDelLine_clicked",
    "on_pBCancel_clicked",
    "on_tableList_doubleClicked",
    "QModelIndex",
    "on_pBDelete_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBillEntryENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x08,    1 /* Private */,
       4,    1,   65,    2, 0x08,    3 /* Private */,
       5,    0,   68,    2, 0x08,    5 /* Private */,
       6,    0,   69,    2, 0x08,    6 /* Private */,
       7,    0,   70,    2, 0x08,    7 /* Private */,
       8,    0,   71,    2, 0x08,    8 /* Private */,
       9,    1,   72,    2, 0x08,    9 /* Private */,
      11,    0,   75,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    3,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject BillEntry::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSBillEntryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBillEntryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBillEntryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BillEntry, std::true_type>,
        // method 'on_comboCustomer_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_comboProduct_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pBtnAdd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pBSave_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pBtnDelLine_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pBCancel_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableList_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_pBDelete_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void BillEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BillEntry *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_comboCustomer_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_comboProduct_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_pBtnAdd_clicked(); break;
        case 3: _t->on_pBSave_clicked(); break;
        case 4: _t->on_pBtnDelLine_clicked(); break;
        case 5: _t->on_pBCancel_clicked(); break;
        case 6: _t->on_tableList_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 7: _t->on_pBDelete_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *BillEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BillEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBillEntryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BillEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
