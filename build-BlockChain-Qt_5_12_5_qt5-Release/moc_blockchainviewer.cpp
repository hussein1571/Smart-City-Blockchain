/****************************************************************************
** Meta object code from reading C++ file 'blockchainviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../blockchain-avec-tendermint-master/blockchainviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blockchainviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BlockChainViewer_t {
    QByteArrayData data[66];
    char stringdata0[1454];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BlockChainViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BlockChainViewer_t qt_meta_stringdata_BlockChainViewer = {
    {
QT_MOC_LITERAL(0, 0, 16), // "BlockChainViewer"
QT_MOC_LITERAL(1, 17, 16), // "CreationFunction"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 22), // "on_ResetButton_clicked"
QT_MOC_LITERAL(4, 58, 11), // "DisplayInfo"
QT_MOC_LITERAL(5, 70, 11), // "QuitProgram"
QT_MOC_LITERAL(6, 82, 24), // "on_GetInfoButton_clicked"
QT_MOC_LITERAL(7, 107, 17), // "TimestampsRequest"
QT_MOC_LITERAL(8, 125, 19), // "GetClosestTimestamp"
QT_MOC_LITERAL(9, 145, 8), // "FillInfo"
QT_MOC_LITERAL(10, 154, 12), // "QJsonObject&"
QT_MOC_LITERAL(11, 167, 8), // "JsonInfo"
QT_MOC_LITERAL(12, 176, 17), // "GetBlockChainInfo"
QT_MOC_LITERAL(13, 194, 11), // "getFinished"
QT_MOC_LITERAL(14, 206, 14), // "QNetworkReply*"
QT_MOC_LITERAL(15, 221, 10), // "GetURLInfo"
QT_MOC_LITERAL(16, 232, 29), // "on_GetBlockInfoButton_clicked"
QT_MOC_LITERAL(17, 262, 19), // "GetGeneralBlockInfo"
QT_MOC_LITERAL(18, 282, 20), // "FillBlockGeneralInfo"
QT_MOC_LITERAL(19, 303, 9), // "BlockType"
QT_MOC_LITERAL(20, 313, 11), // "HashCompare"
QT_MOC_LITERAL(21, 325, 23), // "GetBlockChainInfo_Part2"
QT_MOC_LITERAL(22, 349, 26), // "on_StartStopButton_clicked"
QT_MOC_LITERAL(23, 376, 30), // "on_SelectedRadioButton_toggled"
QT_MOC_LITERAL(24, 407, 7), // "checked"
QT_MOC_LITERAL(25, 415, 25), // "ClearSelectedBlockDisplay"
QT_MOC_LITERAL(26, 441, 26), // "on_nbTx_before_textChanged"
QT_MOC_LITERAL(27, 468, 4), // "arg1"
QT_MOC_LITERAL(28, 473, 27), // "on_nbTx_current_textChanged"
QT_MOC_LITERAL(29, 501, 28), // "on_nbTx_selected_textChanged"
QT_MOC_LITERAL(30, 530, 17), // "ClearPeriodicInfo"
QT_MOC_LITERAL(31, 548, 25), // "NoTransactionFoundDisplay"
QT_MOC_LITERAL(32, 574, 18), // "JsonRetrievalError"
QT_MOC_LITERAL(33, 593, 28), // "on_filteredInfo1_textChanged"
QT_MOC_LITERAL(34, 622, 28), // "on_filteredInfo2_textChanged"
QT_MOC_LITERAL(35, 651, 28), // "on_filteredInfo3_textChanged"
QT_MOC_LITERAL(36, 680, 28), // "on_filteredInfo4_textChanged"
QT_MOC_LITERAL(37, 709, 28), // "on_filteredInfo5_textChanged"
QT_MOC_LITERAL(38, 738, 28), // "on_filteredInfo6_textChanged"
QT_MOC_LITERAL(39, 767, 32), // "on_CaseSensitiveCheckBox_toggled"
QT_MOC_LITERAL(40, 800, 27), // "on_TimerPeriod_valueChanged"
QT_MOC_LITERAL(41, 828, 34), // "on_BlockInfoBlinkingButton_to..."
QT_MOC_LITERAL(42, 863, 27), // "on_SaveConfigButton_clicked"
QT_MOC_LITERAL(43, 891, 36), // "on_EmptyTransactionsCheckBox_..."
QT_MOC_LITERAL(44, 928, 25), // "on_QuitButtonTab2_clicked"
QT_MOC_LITERAL(45, 954, 25), // "on_QuitButtonTab1_clicked"
QT_MOC_LITERAL(46, 980, 26), // "DeleteTransactionsHistoric"
QT_MOC_LITERAL(47, 1007, 25), // "on_QuitButtonTab3_clicked"
QT_MOC_LITERAL(48, 1033, 25), // "on_QuitButtonTab4_clicked"
QT_MOC_LITERAL(49, 1059, 27), // "on_HistoricPath_textChanged"
QT_MOC_LITERAL(50, 1087, 14), // "ModifyTextEdit"
QT_MOC_LITERAL(51, 1102, 10), // "QTextEdit*"
QT_MOC_LITERAL(52, 1113, 11), // "ModifyLabel"
QT_MOC_LITERAL(53, 1125, 7), // "QLabel*"
QT_MOC_LITERAL(54, 1133, 23), // "ResetTransactionDisplay"
QT_MOC_LITERAL(55, 1157, 26), // "on_Creation_Button_clicked"
QT_MOC_LITERAL(56, 1184, 23), // "SetDefaultConfigDisplay"
QT_MOC_LITERAL(57, 1208, 30), // "on_BlockNumber_editingFinished"
QT_MOC_LITERAL(58, 1239, 18), // "GetSingleBlockInfo"
QT_MOC_LITERAL(59, 1258, 20), // "BroadcastTransaction"
QT_MOC_LITERAL(60, 1279, 30), // "on_DefaultConfigButton_clicked"
QT_MOC_LITERAL(61, 1310, 33), // "on_StopBlockchainCheckBox_tog..."
QT_MOC_LITERAL(62, 1344, 26), // "on_PortNumber_valueChanged"
QT_MOC_LITERAL(63, 1371, 30), // "on_GaetwayModeCheckBox_toggled"
QT_MOC_LITERAL(64, 1402, 17), // "LaunchGatewayMode"
QT_MOC_LITERAL(65, 1420, 33) // "on_StartStopGatewayButton_cli..."

    },
    "BlockChainViewer\0CreationFunction\0\0"
    "on_ResetButton_clicked\0DisplayInfo\0"
    "QuitProgram\0on_GetInfoButton_clicked\0"
    "TimestampsRequest\0GetClosestTimestamp\0"
    "FillInfo\0QJsonObject&\0JsonInfo\0"
    "GetBlockChainInfo\0getFinished\0"
    "QNetworkReply*\0GetURLInfo\0"
    "on_GetBlockInfoButton_clicked\0"
    "GetGeneralBlockInfo\0FillBlockGeneralInfo\0"
    "BlockType\0HashCompare\0GetBlockChainInfo_Part2\0"
    "on_StartStopButton_clicked\0"
    "on_SelectedRadioButton_toggled\0checked\0"
    "ClearSelectedBlockDisplay\0"
    "on_nbTx_before_textChanged\0arg1\0"
    "on_nbTx_current_textChanged\0"
    "on_nbTx_selected_textChanged\0"
    "ClearPeriodicInfo\0NoTransactionFoundDisplay\0"
    "JsonRetrievalError\0on_filteredInfo1_textChanged\0"
    "on_filteredInfo2_textChanged\0"
    "on_filteredInfo3_textChanged\0"
    "on_filteredInfo4_textChanged\0"
    "on_filteredInfo5_textChanged\0"
    "on_filteredInfo6_textChanged\0"
    "on_CaseSensitiveCheckBox_toggled\0"
    "on_TimerPeriod_valueChanged\0"
    "on_BlockInfoBlinkingButton_toggled\0"
    "on_SaveConfigButton_clicked\0"
    "on_EmptyTransactionsCheckBox_toggled\0"
    "on_QuitButtonTab2_clicked\0"
    "on_QuitButtonTab1_clicked\0"
    "DeleteTransactionsHistoric\0"
    "on_QuitButtonTab3_clicked\0"
    "on_QuitButtonTab4_clicked\0"
    "on_HistoricPath_textChanged\0ModifyTextEdit\0"
    "QTextEdit*\0ModifyLabel\0QLabel*\0"
    "ResetTransactionDisplay\0"
    "on_Creation_Button_clicked\0"
    "SetDefaultConfigDisplay\0"
    "on_BlockNumber_editingFinished\0"
    "GetSingleBlockInfo\0BroadcastTransaction\0"
    "on_DefaultConfigButton_clicked\0"
    "on_StopBlockchainCheckBox_toggled\0"
    "on_PortNumber_valueChanged\0"
    "on_GaetwayModeCheckBox_toggled\0"
    "LaunchGatewayMode\0on_StartStopGatewayButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BlockChainViewer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      60,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  314,    2, 0x08 /* Private */,
       3,    0,  315,    2, 0x08 /* Private */,
       4,    0,  316,    2, 0x08 /* Private */,
       5,    0,  317,    2, 0x08 /* Private */,
       6,    0,  318,    2, 0x08 /* Private */,
       7,    0,  319,    2, 0x08 /* Private */,
       8,    1,  320,    2, 0x08 /* Private */,
       9,    1,  323,    2, 0x08 /* Private */,
      12,    0,  326,    2, 0x08 /* Private */,
      13,    1,  327,    2, 0x08 /* Private */,
      15,    0,  330,    2, 0x08 /* Private */,
      16,    0,  331,    2, 0x08 /* Private */,
      17,    1,  332,    2, 0x08 /* Private */,
      18,    2,  335,    2, 0x08 /* Private */,
      18,    1,  340,    2, 0x28 /* Private | MethodCloned */,
      20,    0,  343,    2, 0x08 /* Private */,
      21,    0,  344,    2, 0x08 /* Private */,
      22,    0,  345,    2, 0x08 /* Private */,
      23,    1,  346,    2, 0x08 /* Private */,
      25,    0,  349,    2, 0x08 /* Private */,
      26,    1,  350,    2, 0x08 /* Private */,
      28,    1,  353,    2, 0x08 /* Private */,
      29,    1,  356,    2, 0x08 /* Private */,
      30,    0,  359,    2, 0x08 /* Private */,
      31,    2,  360,    2, 0x08 /* Private */,
      32,    1,  365,    2, 0x08 /* Private */,
      32,    0,  368,    2, 0x28 /* Private | MethodCloned */,
      33,    0,  369,    2, 0x08 /* Private */,
      34,    0,  370,    2, 0x08 /* Private */,
      35,    0,  371,    2, 0x08 /* Private */,
      36,    0,  372,    2, 0x08 /* Private */,
      37,    0,  373,    2, 0x08 /* Private */,
      38,    0,  374,    2, 0x08 /* Private */,
      39,    0,  375,    2, 0x08 /* Private */,
      40,    1,  376,    2, 0x08 /* Private */,
      41,    0,  379,    2, 0x08 /* Private */,
      42,    0,  380,    2, 0x08 /* Private */,
      43,    0,  381,    2, 0x08 /* Private */,
      44,    0,  382,    2, 0x08 /* Private */,
      45,    0,  383,    2, 0x08 /* Private */,
      46,    0,  384,    2, 0x08 /* Private */,
      47,    0,  385,    2, 0x08 /* Private */,
      48,    0,  386,    2, 0x08 /* Private */,
      49,    0,  387,    2, 0x08 /* Private */,
      50,    3,  388,    2, 0x08 /* Private */,
      50,    2,  395,    2, 0x28 /* Private | MethodCloned */,
      52,    3,  400,    2, 0x08 /* Private */,
      52,    2,  407,    2, 0x28 /* Private | MethodCloned */,
      54,    1,  412,    2, 0x08 /* Private */,
      55,    0,  415,    2, 0x08 /* Private */,
      56,    0,  416,    2, 0x08 /* Private */,
      57,    0,  417,    2, 0x08 /* Private */,
      58,    0,  418,    2, 0x08 /* Private */,
      59,    0,  419,    2, 0x08 /* Private */,
      60,    0,  420,    2, 0x08 /* Private */,
      61,    0,  421,    2, 0x08 /* Private */,
      62,    1,  422,    2, 0x08 /* Private */,
      63,    0,  425,    2, 0x08 /* Private */,
      64,    0,  426,    2, 0x08 /* Private */,
      65,    0,  427,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int, QMetaType::QDateTime,    2,
    QMetaType::Int, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QByteArray, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 19,    2,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 19,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 51, QMetaType::QString, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 51, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 53, QMetaType::QString, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 53, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BlockChainViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BlockChainViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CreationFunction(); break;
        case 1: _t->on_ResetButton_clicked(); break;
        case 2: _t->DisplayInfo(); break;
        case 3: _t->QuitProgram(); break;
        case 4: _t->on_GetInfoButton_clicked(); break;
        case 5: { int _r = _t->TimestampsRequest();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->GetClosestTimestamp((*reinterpret_cast< const QDateTime(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->FillInfo((*reinterpret_cast< QJsonObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->GetBlockChainInfo(); break;
        case 9: _t->getFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: _t->GetURLInfo(); break;
        case 11: _t->on_GetBlockInfoButton_clicked(); break;
        case 12: { QByteArray _r = _t->GetGeneralBlockInfo((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->FillBlockGeneralInfo((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const BlockType(*)>(_a[2]))); break;
        case 14: _t->FillBlockGeneralInfo((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 15: _t->HashCompare(); break;
        case 16: _t->GetBlockChainInfo_Part2(); break;
        case 17: _t->on_StartStopButton_clicked(); break;
        case 18: _t->on_SelectedRadioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->ClearSelectedBlockDisplay(); break;
        case 20: _t->on_nbTx_before_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->on_nbTx_current_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->on_nbTx_selected_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->ClearPeriodicInfo(); break;
        case 24: _t->NoTransactionFoundDisplay((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 25: _t->JsonRetrievalError((*reinterpret_cast< const BlockType(*)>(_a[1]))); break;
        case 26: _t->JsonRetrievalError(); break;
        case 27: _t->on_filteredInfo1_textChanged(); break;
        case 28: _t->on_filteredInfo2_textChanged(); break;
        case 29: _t->on_filteredInfo3_textChanged(); break;
        case 30: _t->on_filteredInfo4_textChanged(); break;
        case 31: _t->on_filteredInfo5_textChanged(); break;
        case 32: _t->on_filteredInfo6_textChanged(); break;
        case 33: _t->on_CaseSensitiveCheckBox_toggled(); break;
        case 34: _t->on_TimerPeriod_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->on_BlockInfoBlinkingButton_toggled(); break;
        case 36: _t->on_SaveConfigButton_clicked(); break;
        case 37: _t->on_EmptyTransactionsCheckBox_toggled(); break;
        case 38: _t->on_QuitButtonTab2_clicked(); break;
        case 39: _t->on_QuitButtonTab1_clicked(); break;
        case 40: _t->DeleteTransactionsHistoric(); break;
        case 41: _t->on_QuitButtonTab3_clicked(); break;
        case 42: _t->on_QuitButtonTab4_clicked(); break;
        case 43: _t->on_HistoricPath_textChanged(); break;
        case 44: _t->ModifyTextEdit((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3]))); break;
        case 45: _t->ModifyTextEdit((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 46: _t->ModifyLabel((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3]))); break;
        case 47: _t->ModifyLabel((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 48: _t->ResetTransactionDisplay((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 49: _t->on_Creation_Button_clicked(); break;
        case 50: _t->SetDefaultConfigDisplay(); break;
        case 51: _t->on_BlockNumber_editingFinished(); break;
        case 52: _t->GetSingleBlockInfo(); break;
        case 53: _t->BroadcastTransaction(); break;
        case 54: _t->on_DefaultConfigButton_clicked(); break;
        case 55: _t->on_StopBlockchainCheckBox_toggled(); break;
        case 56: _t->on_PortNumber_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->on_GaetwayModeCheckBox_toggled(); break;
        case 58: _t->LaunchGatewayMode(); break;
        case 59: _t->on_StartStopGatewayButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLabel* >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLabel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BlockChainViewer::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_BlockChainViewer.data,
    qt_meta_data_BlockChainViewer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BlockChainViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BlockChainViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BlockChainViewer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int BlockChainViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 60)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 60;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 60)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 60;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
