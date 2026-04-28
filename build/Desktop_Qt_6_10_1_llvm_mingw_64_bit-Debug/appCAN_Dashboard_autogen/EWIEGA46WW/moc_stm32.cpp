/****************************************************************************
** Meta object code from reading C++ file 'stm32.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../stm32.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stm32.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Stm32E_t {};
} // unnamed namespace

template <> constexpr inline auto Stm32::qt_create_metaobjectdata<qt_meta_tag_ZN5Stm32E_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Stm32",
        "dataFromStm32Changed",
        "",
        "ledChanged",
        "speedChanged",
        "rpmChanged",
        "fuelLevelChanged",
        "onReadyReadDataFromStm32",
        "getDataFromStm32",
        "portName",
        "dataFromStm32",
        "led1",
        "led2",
        "led3",
        "led4",
        "led5",
        "speed",
        "rpm",
        "fuelLevel"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'dataFromStm32Changed'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ledChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'speedChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rpmChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fuelLevelChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onReadyReadDataFromStm32'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Method 'getDataFromStm32'
        QtMocHelpers::MethodData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'dataFromStm32'
        QtMocHelpers::PropertyData<QString>(10, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'led1'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags, 1),
        // property 'led2'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags, 1),
        // property 'led3'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags, 1),
        // property 'led4'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags, 1),
        // property 'led5'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags, 1),
        // property 'speed'
        QtMocHelpers::PropertyData<double>(16, QMetaType::Double, QMC::DefaultPropertyFlags, 2),
        // property 'rpm'
        QtMocHelpers::PropertyData<double>(17, QMetaType::Double, QMC::DefaultPropertyFlags, 3),
        // property 'fuelLevel'
        QtMocHelpers::PropertyData<double>(18, QMetaType::Double, QMC::DefaultPropertyFlags, 4),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Stm32, qt_meta_tag_ZN5Stm32E_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Stm32::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Stm32E_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Stm32E_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Stm32E_t>.metaTypes,
    nullptr
} };

void Stm32::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Stm32 *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->dataFromStm32Changed(); break;
        case 1: _t->ledChanged(); break;
        case 2: _t->speedChanged(); break;
        case 3: _t->rpmChanged(); break;
        case 4: _t->fuelLevelChanged(); break;
        case 5: _t->onReadyReadDataFromStm32(); break;
        case 6: _t->getDataFromStm32((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Stm32::*)()>(_a, &Stm32::dataFromStm32Changed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Stm32::*)()>(_a, &Stm32::ledChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Stm32::*)()>(_a, &Stm32::speedChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Stm32::*)()>(_a, &Stm32::rpmChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Stm32::*)()>(_a, &Stm32::fuelLevelChanged, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->dataFromStm32(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->led1(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->led2(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->led3(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->led4(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->led5(); break;
        case 6: *reinterpret_cast<double*>(_v) = _t->speed(); break;
        case 7: *reinterpret_cast<double*>(_v) = _t->rpm(); break;
        case 8: *reinterpret_cast<double*>(_v) = _t->fuelLevel(); break;
        default: break;
        }
    }
}

const QMetaObject *Stm32::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Stm32::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Stm32E_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Stm32::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Stm32::dataFromStm32Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Stm32::ledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Stm32::speedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Stm32::rpmChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Stm32::fuelLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
