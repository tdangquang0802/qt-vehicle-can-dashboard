/****************************************************************************
** Meta object code from reading C++ file 'serialreader.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../serialreader.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialreader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.1. It"
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
struct qt_meta_tag_ZN12serialReaderE_t {};
} // unnamed namespace

template <> constexpr inline auto serialReader::qt_create_metaobjectdata<qt_meta_tag_ZN12serialReaderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "serialReader",
        "serialDataChanged",
        "",
        "speedChanged",
        "rpmChanged",
        "readSerialData",
        "speed",
        "rpm",
        "serialData"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'serialDataChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'speedChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rpmChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'readSerialData'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Method 'speed'
        QtMocHelpers::MethodData<double() const>(6, 2, QMC::AccessPublic, QMetaType::Double),
        // Method 'rpm'
        QtMocHelpers::MethodData<double() const>(7, 2, QMC::AccessPublic, QMetaType::Double),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'serialData'
        QtMocHelpers::PropertyData<QString>(8, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'rpm'
        QtMocHelpers::PropertyData<double>(7, QMetaType::Double, QMC::DefaultPropertyFlags, 2),
        // property 'speed'
        QtMocHelpers::PropertyData<double>(6, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Final, 1),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<serialReader, qt_meta_tag_ZN12serialReaderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject serialReader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12serialReaderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12serialReaderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12serialReaderE_t>.metaTypes,
    nullptr
} };

void serialReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<serialReader *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->serialDataChanged(); break;
        case 1: _t->speedChanged(); break;
        case 2: _t->rpmChanged(); break;
        case 3: _t->readSerialData(); break;
        case 4: { double _r = _t->speed();
            if (_a[0]) *reinterpret_cast<double*>(_a[0]) = std::move(_r); }  break;
        case 5: { double _r = _t->rpm();
            if (_a[0]) *reinterpret_cast<double*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (serialReader::*)()>(_a, &serialReader::serialDataChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (serialReader::*)()>(_a, &serialReader::speedChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (serialReader::*)()>(_a, &serialReader::rpmChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->serialData(); break;
        case 1: *reinterpret_cast<double*>(_v) = _t->rpm(); break;
        case 2: *reinterpret_cast<double*>(_v) = _t->speed(); break;
        default: break;
        }
    }
}

const QMetaObject *serialReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *serialReader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12serialReaderE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int serialReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void serialReader::serialDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void serialReader::speedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void serialReader::rpmChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
