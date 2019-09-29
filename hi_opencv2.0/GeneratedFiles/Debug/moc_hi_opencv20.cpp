/****************************************************************************
** Meta object code from reading C++ file 'hi_opencv20.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../hi_opencv20.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hi_opencv20.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hi_opencv20_t {
    QByteArrayData data[21];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hi_opencv20_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hi_opencv20_t qt_meta_stringdata_hi_opencv20 = {
    {
QT_MOC_LITERAL(0, 0, 11), // "hi_opencv20"
QT_MOC_LITERAL(1, 12, 4), // "open"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 7), // "on_blur"
QT_MOC_LITERAL(4, 26, 11), // "on_gaussian"
QT_MOC_LITERAL(5, 38, 9), // "on_median"
QT_MOC_LITERAL(6, 48, 12), // "on_Bilateral"
QT_MOC_LITERAL(7, 61, 11), // "on_slider_1"
QT_MOC_LITERAL(8, 73, 11), // "on_slider_2"
QT_MOC_LITERAL(9, 85, 8), // "on_erode"
QT_MOC_LITERAL(10, 94, 9), // "on_dilate"
QT_MOC_LITERAL(11, 104, 10), // "on_opening"
QT_MOC_LITERAL(12, 115, 10), // "on_closing"
QT_MOC_LITERAL(13, 126, 5), // "on_MG"
QT_MOC_LITERAL(14, 132, 11), // "on_blackhat"
QT_MOC_LITERAL(15, 144, 9), // "on_tophat"
QT_MOC_LITERAL(16, 154, 8), // "on_scale"
QT_MOC_LITERAL(17, 163, 9), // "on_rotate"
QT_MOC_LITERAL(18, 173, 6), // "on_L2R"
QT_MOC_LITERAL(19, 180, 6), // "on_T2D"
QT_MOC_LITERAL(20, 187, 6) // "on_pyr"

    },
    "hi_opencv20\0open\0\0on_blur\0on_gaussian\0"
    "on_median\0on_Bilateral\0on_slider_1\0"
    "on_slider_2\0on_erode\0on_dilate\0"
    "on_opening\0on_closing\0on_MG\0on_blackhat\0"
    "on_tophat\0on_scale\0on_rotate\0on_L2R\0"
    "on_T2D\0on_pyr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hi_opencv20[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x08 /* Private */,
       3,    0,  110,    2, 0x08 /* Private */,
       4,    0,  111,    2, 0x08 /* Private */,
       5,    0,  112,    2, 0x08 /* Private */,
       6,    0,  113,    2, 0x08 /* Private */,
       7,    0,  114,    2, 0x08 /* Private */,
       8,    0,  115,    2, 0x08 /* Private */,
       9,    0,  116,    2, 0x08 /* Private */,
      10,    0,  117,    2, 0x08 /* Private */,
      11,    0,  118,    2, 0x08 /* Private */,
      12,    0,  119,    2, 0x08 /* Private */,
      13,    0,  120,    2, 0x08 /* Private */,
      14,    0,  121,    2, 0x08 /* Private */,
      15,    0,  122,    2, 0x08 /* Private */,
      16,    0,  123,    2, 0x08 /* Private */,
      17,    0,  124,    2, 0x08 /* Private */,
      18,    0,  125,    2, 0x08 /* Private */,
      19,    0,  126,    2, 0x08 /* Private */,
      20,    0,  127,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void hi_opencv20::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        hi_opencv20 *_t = static_cast<hi_opencv20 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->open(); break;
        case 1: _t->on_blur(); break;
        case 2: _t->on_gaussian(); break;
        case 3: _t->on_median(); break;
        case 4: _t->on_Bilateral(); break;
        case 5: _t->on_slider_1(); break;
        case 6: _t->on_slider_2(); break;
        case 7: _t->on_erode(); break;
        case 8: _t->on_dilate(); break;
        case 9: _t->on_opening(); break;
        case 10: _t->on_closing(); break;
        case 11: _t->on_MG(); break;
        case 12: _t->on_blackhat(); break;
        case 13: _t->on_tophat(); break;
        case 14: _t->on_scale(); break;
        case 15: _t->on_rotate(); break;
        case 16: _t->on_L2R(); break;
        case 17: _t->on_T2D(); break;
        case 18: _t->on_pyr(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject hi_opencv20::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_hi_opencv20.data,
      qt_meta_data_hi_opencv20,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *hi_opencv20::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hi_opencv20::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hi_opencv20.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int hi_opencv20::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
