/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.2. It"
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
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "generar_grafica",
        "",
        "plot_generator",
        "data_ready",
        "to_graph",
        "automatic_manual",
        "texto",
        "clear",
        "update",
        "tiempo",
        "CRC",
        "uint16_t",
        "uint8_t*",
        "data",
        "len",
        "get_MSB",
        "uint8_t",
        "m",
        "get_LSD",
        "l",
        "connect_tp_server",
        "socket_connect",
        "connection_lost"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'generar_grafica'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'plot_generator'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'data_ready'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'to_graph'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'automatic_manual'
        QtMocHelpers::SlotData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'clear'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'update'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'tiempo'
        QtMocHelpers::SlotData<void(const QString &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'CRC'
        QtMocHelpers::SlotData<uint16_t(uint8_t *, uint16_t)>(11, 2, QMC::AccessPublic, 0x80000000 | 12, {{
            { 0x80000000 | 13, 14 }, { 0x80000000 | 12, 15 },
        }}),
        // Slot 'get_MSB'
        QtMocHelpers::SlotData<uint8_t(uint16_t)>(16, 2, QMC::AccessPublic, 0x80000000 | 17, {{
            { 0x80000000 | 12, 18 },
        }}),
        // Slot 'get_LSD'
        QtMocHelpers::SlotData<uint8_t(uint16_t)>(19, 2, QMC::AccessPublic, 0x80000000 | 17, {{
            { 0x80000000 | 12, 20 },
        }}),
        // Slot 'connect_tp_server'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'socket_connect'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'connection_lost'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->generar_grafica(); break;
        case 1: _t->plot_generator(); break;
        case 2: _t->data_ready(); break;
        case 3: _t->to_graph(); break;
        case 4: _t->automatic_manual((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->clear(); break;
        case 6: _t->update(); break;
        case 7: _t->tiempo((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: { uint16_t _r = _t->CRC((*reinterpret_cast<std::add_pointer_t<uint8_t*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint16_t>>(_a[2])));
            if (_a[0]) *reinterpret_cast<uint16_t*>(_a[0]) = std::move(_r); }  break;
        case 9: { uint8_t _r = _t->get_MSB((*reinterpret_cast<std::add_pointer_t<uint16_t>>(_a[1])));
            if (_a[0]) *reinterpret_cast<uint8_t*>(_a[0]) = std::move(_r); }  break;
        case 10: { uint8_t _r = _t->get_LSD((*reinterpret_cast<std::add_pointer_t<uint16_t>>(_a[1])));
            if (_a[0]) *reinterpret_cast<uint8_t*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->connect_tp_server(); break;
        case 12: _t->socket_connect(); break;
        case 13: _t->connection_lost(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
