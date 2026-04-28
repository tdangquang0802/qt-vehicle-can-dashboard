#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>
#include <QtCore/qhash.h>
#include <QtCore/qstring.h>

namespace QmlCacheGeneratedCode {
namespace _qt_qml_CAN_Dashboard_Main_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_CAN_Dashboard_DongHoTocDo_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_CAN_Dashboard_DongHoRPM_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_CAN_Dashboard_MyProgressBar_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_CAN_Dashboard_CarBackView_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_CAN_Dashboard_CAN_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_CAN_Dashboard_Mybutton_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/CAN_Dashboard/Main.qml"), &QmlCacheGeneratedCode::_qt_qml_CAN_Dashboard_Main_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/CAN_Dashboard/DongHoTocDo.qml"), &QmlCacheGeneratedCode::_qt_qml_CAN_Dashboard_DongHoTocDo_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/CAN_Dashboard/DongHoRPM.qml"), &QmlCacheGeneratedCode::_qt_qml_CAN_Dashboard_DongHoRPM_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/CAN_Dashboard/MyProgressBar.qml"), &QmlCacheGeneratedCode::_qt_qml_CAN_Dashboard_MyProgressBar_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/CAN_Dashboard/CarBackView.qml"), &QmlCacheGeneratedCode::_qt_qml_CAN_Dashboard_CarBackView_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/CAN_Dashboard/CAN.qml"), &QmlCacheGeneratedCode::_qt_qml_CAN_Dashboard_CAN_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/CAN_Dashboard/Mybutton.qml"), &QmlCacheGeneratedCode::_qt_qml_CAN_Dashboard_Mybutton_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.structVersion = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qmlcache_appCAN_Dashboard)() {
    ::unitRegistry();
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qmlcache_appCAN_Dashboard))
int QT_MANGLE_NAMESPACE(qCleanupResources_qmlcache_appCAN_Dashboard)() {
    return 1;
}
