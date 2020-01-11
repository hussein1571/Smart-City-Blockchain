/********************************************************************************
** Form generated from reading UI file 'blockchainviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKCHAINVIEWER_H
#define UI_BLOCKCHAINVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlockChainViewer
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *TabInit;
    QVBoxLayout *verticalLayout;
    QLabel *lblCount_3;
    QComboBox *NodeTypeSelector;
    QLabel *AccountNameLabel;
    QTextEdit *AccountName;
    QLabel *NodeNameLabel;
    QTextEdit *NodeName;
    QLabel *AccountBalanceLabel;
    QTextEdit *AccountBalance;
    QLabel *ChainIDLabel;
    QTextEdit *ChainID;
    QLabel *PasswordLabel;
    QLineEdit *PWEdit;
    QLabel *PasswordLabel_2;
    QLineEdit *PWEdit_2;
    QPushButton *Creation_Button;
    QPushButton *btnHello_2;
    QPushButton *pushButton;
    QPushButton *ResetButton;
    QLabel *InfoLabel;
    QTextEdit *ConsoleOutput;
    QLabel *ConsoleOutputLabel;
    QTextEdit *InfoDisplay;
    QSpacerItem *verticalSpacer;
    QPushButton *QuitButtonTab1;
    QWidget *TabInfo;
    QFrame *line_2;
    QGroupBox *groupBox;
    QLabel *TransactionsCounterLabel;
    QDateTimeEdit *LatestTransactionDate;
    QDateTimeEdit *FirstTransactionDate;
    QLabel *FirstTransaction;
    QLabel *LatestTransaction;
    QGroupBox *groupBox_6;
    QLabel *LastHash_before_label;
    QTextEdit *LastHash_before;
    QLabel *Hash_before_label;
    QTextEdit *Hash_before;
    QLabel *Nb_Tx_before_label;
    QLabel *BlockTime_before_label;
    QLineEdit *nbTx_before;
    QLineEdit *BlockTime_before;
    QLineEdit *PreviousBlockNumber;
    QLabel *PreviousBlockNumberLabel;
    QGroupBox *groupBox_7;
    QLabel *LastHash_current_label;
    QLabel *Hash_current_label;
    QTextEdit *Hash_current;
    QLabel *Nb_Tx_current_label;
    QLabel *BlockTime_current_label;
    QLineEdit *nbTx_current;
    QLineEdit *BlockTime_current;
    QLineEdit *CurrentBlockNumber;
    QLabel *CurrentBlockNumberLabel;
    QTextEdit *LastHash_current;
    QLineEdit *TransactionsCounter;
    QLabel *image;
    QFrame *line_4;
    QPushButton *QuitButtonTab2;
    QPushButton *StartStopGatewayButton;
    QLabel *StopStartLabel;
    QPushButton *StartStopButton;
    QLabel *StopStartGatewayLabel;
    QLabel *label;
    QGroupBox *groupBox_3;
    QCalendarWidget *TransactionDate;
    QTimeEdit *TransactionTime;
    QPushButton *GetInfoButton;
    QRadioButton *LastRadioButton;
    QRadioButton *SelectedRadioButton;
    QRadioButton *FirstRadioButton;
    QLabel *label_11;
    QGroupBox *groupBox_2;
    QTextEdit *Info2;
    QLabel *InfoLabel4;
    QTextEdit *Info5;
    QTextEdit *Info3;
    QLabel *InfoLabel6;
    QTextEdit *Info8;
    QLabel *InfoLabel2;
    QLabel *InfoLabel5;
    QLabel *InfoLabel1;
    QLabel *InfoLabel7;
    QTextEdit *Info4;
    QTextEdit *Info1;
    QTextEdit *Info6;
    QLabel *InfoLabel3;
    QLabel *InfoLabel8;
    QTextEdit *Info7;
    QLabel *TransactionDateTimeText;
    QDateTimeEdit *TransactionDateTime;
    QFrame *line_3;
    QTextEdit *GetInfoOutput;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *tab;
    QPushButton *GetBlockInfoButton;
    QTextEdit *ChosenBlockInfoText;
    QSpinBox *BlockNumber;
    QLabel *Nb_Tx_selected_label;
    QLabel *Hash_selected_label;
    QLineEdit *nbTx_selected;
    QTextEdit *Hash_selected;
    QLabel *LastHash_selected_label;
    QTextEdit *LastHash_selected;
    QLineEdit *TimeBlock_selected;
    QLabel *BlockTime_selected_label;
    QPushButton *QuitButtonTab3;
    QLabel *label_10;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *tabParameters;
    QGroupBox *groupBox_4;
    QLineEdit *filteredInfo1;
    QLineEdit *filteredInfo3;
    QLineEdit *filteredInfo2;
    QLineEdit *filteredInfo4;
    QLineEdit *filteredInfo5;
    QLineEdit *filteredInfo6;
    QCheckBox *CaseSensitiveCheckBox;
    QGroupBox *groupBox_5;
    QSpinBox *TimerPeriod;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *TimerPeriodLabel;
    QCheckBox *BlockInfoBlinkingButton;
    QGroupBox *groupBox_9;
    QLabel *PortNumberLabel;
    QSpinBox *PortNumber;
    QLineEdit *HistoricPath;
    QLabel *HistoricPathLabel;
    QCheckBox *StopBlockchainCheckBox;
    QCheckBox *EmptyTransactionsCheckBox;
    QCheckBox *GaetwayModeCheckBox;
    QPushButton *DefaultConfigButton;
    QPushButton *SaveConfigButton;
    QPushButton *QuitButtonTab4;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QMenuBar *menuBar;
    QMenu *menusmartcity;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BlockChainViewer)
    {
        if (BlockChainViewer->objectName().isEmpty())
            BlockChainViewer->setObjectName(QString::fromUtf8("BlockChainViewer"));
        BlockChainViewer->resize(1538, 1003);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BlockChainViewer->sizePolicy().hasHeightForWidth());
        BlockChainViewer->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(BlockChainViewer);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMaximumSize(QSize(1535, 963));
        QPalette palette;
        QLinearGradient gradient(0, 0, 1, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(255, 255, 255, 255));
        gradient.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush(gradient);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient1(0, 0, 1, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush1(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(184, 184, 184, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush2);
        QLinearGradient gradient2(0, 0, 1, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(255, 255, 255, 255));
        gradient2.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush3(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Text, brush3);
        QLinearGradient gradient3(0, 0, 1, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(255, 255, 255, 255));
        gradient3.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush4(gradient3);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        QLinearGradient gradient4(0, 0, 1, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush5(gradient4);
        palette.setBrush(QPalette::Active, QPalette::Base, brush5);
        QLinearGradient gradient5(0, 0, 1, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush6(gradient5);
        palette.setBrush(QPalette::Active, QPalette::Window, brush6);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        QLinearGradient gradient6(0, 0, 1, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(255, 255, 255, 255));
        gradient6.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush8(gradient6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        QLinearGradient gradient7(0, 0, 1, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush9(gradient7);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush2);
        QLinearGradient gradient8(0, 0, 1, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(255, 255, 255, 255));
        gradient8.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush10(gradient8);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        QLinearGradient gradient9(0, 0, 1, 1);
        gradient9.setSpread(QGradient::PadSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0, QColor(255, 255, 255, 255));
        gradient9.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush11(gradient9);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        QLinearGradient gradient10(0, 0, 1, 1);
        gradient10.setSpread(QGradient::PadSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush12(gradient10);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        QLinearGradient gradient11(0, 0, 1, 1);
        gradient11.setSpread(QGradient::PadSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush13(gradient11);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        QBrush brush14(QColor(0, 0, 0, 128));
        brush14.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        QLinearGradient gradient12(0, 0, 1, 1);
        gradient12.setSpread(QGradient::PadSpread);
        gradient12.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient12.setColorAt(0, QColor(255, 255, 255, 255));
        gradient12.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush15(gradient12);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        QLinearGradient gradient13(0, 0, 1, 1);
        gradient13.setSpread(QGradient::PadSpread);
        gradient13.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient13.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush16(gradient13);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush16);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        QLinearGradient gradient14(0, 0, 1, 1);
        gradient14.setSpread(QGradient::PadSpread);
        gradient14.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient14.setColorAt(0, QColor(255, 255, 255, 255));
        gradient14.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush17(gradient14);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush17);
        QLinearGradient gradient15(0, 0, 1, 1);
        gradient15.setSpread(QGradient::PadSpread);
        gradient15.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient15.setColorAt(0, QColor(255, 255, 255, 255));
        gradient15.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush18(gradient15);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush18);
        QLinearGradient gradient16(0, 0, 1, 1);
        gradient16.setSpread(QGradient::PadSpread);
        gradient16.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient16.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush19(gradient16);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush19);
        QLinearGradient gradient17(0, 0, 1, 1);
        gradient17.setSpread(QGradient::PadSpread);
        gradient17.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient17.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush20(gradient17);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush20);
        QBrush brush21(QColor(0, 0, 0, 128));
        brush21.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush21);
#endif
        tabWidget->setPalette(palette);
        tabWidget->setCursor(QCursor(Qt::ArrowCursor));
        tabWidget->setMouseTracking(false);
        tabWidget->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(12, 62, 97, 255));"));
        TabInit = new QWidget();
        TabInit->setObjectName(QString::fromUtf8("TabInit"));
        verticalLayout = new QVBoxLayout(TabInit);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblCount_3 = new QLabel(TabInit);
        lblCount_3->setObjectName(QString::fromUtf8("lblCount_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblCount_3->sizePolicy().hasHeightForWidth());
        lblCount_3->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(lblCount_3);

        NodeTypeSelector = new QComboBox(TabInit);
        NodeTypeSelector->addItem(QString());
        NodeTypeSelector->addItem(QString());
        NodeTypeSelector->setObjectName(QString::fromUtf8("NodeTypeSelector"));
        NodeTypeSelector->setEditable(false);
        NodeTypeSelector->setMaxVisibleItems(2);

        verticalLayout->addWidget(NodeTypeSelector);

        AccountNameLabel = new QLabel(TabInit);
        AccountNameLabel->setObjectName(QString::fromUtf8("AccountNameLabel"));
        sizePolicy1.setHeightForWidth(AccountNameLabel->sizePolicy().hasHeightForWidth());
        AccountNameLabel->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(AccountNameLabel);

        AccountName = new QTextEdit(TabInit);
        AccountName->setObjectName(QString::fromUtf8("AccountName"));

        verticalLayout->addWidget(AccountName);

        NodeNameLabel = new QLabel(TabInit);
        NodeNameLabel->setObjectName(QString::fromUtf8("NodeNameLabel"));
        sizePolicy1.setHeightForWidth(NodeNameLabel->sizePolicy().hasHeightForWidth());
        NodeNameLabel->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(NodeNameLabel);

        NodeName = new QTextEdit(TabInit);
        NodeName->setObjectName(QString::fromUtf8("NodeName"));
        sizePolicy1.setHeightForWidth(NodeName->sizePolicy().hasHeightForWidth());
        NodeName->setSizePolicy(sizePolicy1);
        NodeName->setMinimumSize(QSize(150, 0));

        verticalLayout->addWidget(NodeName);

        AccountBalanceLabel = new QLabel(TabInit);
        AccountBalanceLabel->setObjectName(QString::fromUtf8("AccountBalanceLabel"));
        sizePolicy1.setHeightForWidth(AccountBalanceLabel->sizePolicy().hasHeightForWidth());
        AccountBalanceLabel->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(AccountBalanceLabel);

        AccountBalance = new QTextEdit(TabInit);
        AccountBalance->setObjectName(QString::fromUtf8("AccountBalance"));

        verticalLayout->addWidget(AccountBalance);

        ChainIDLabel = new QLabel(TabInit);
        ChainIDLabel->setObjectName(QString::fromUtf8("ChainIDLabel"));
        sizePolicy1.setHeightForWidth(ChainIDLabel->sizePolicy().hasHeightForWidth());
        ChainIDLabel->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(ChainIDLabel);

        ChainID = new QTextEdit(TabInit);
        ChainID->setObjectName(QString::fromUtf8("ChainID"));

        verticalLayout->addWidget(ChainID);

        PasswordLabel = new QLabel(TabInit);
        PasswordLabel->setObjectName(QString::fromUtf8("PasswordLabel"));
        sizePolicy1.setHeightForWidth(PasswordLabel->sizePolicy().hasHeightForWidth());
        PasswordLabel->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(PasswordLabel);

        PWEdit = new QLineEdit(TabInit);
        PWEdit->setObjectName(QString::fromUtf8("PWEdit"));
        sizePolicy1.setHeightForWidth(PWEdit->sizePolicy().hasHeightForWidth());
        PWEdit->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(PWEdit);

        PasswordLabel_2 = new QLabel(TabInit);
        PasswordLabel_2->setObjectName(QString::fromUtf8("PasswordLabel_2"));
        sizePolicy1.setHeightForWidth(PasswordLabel_2->sizePolicy().hasHeightForWidth());
        PasswordLabel_2->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(PasswordLabel_2);

        PWEdit_2 = new QLineEdit(TabInit);
        PWEdit_2->setObjectName(QString::fromUtf8("PWEdit_2"));
        sizePolicy1.setHeightForWidth(PWEdit_2->sizePolicy().hasHeightForWidth());
        PWEdit_2->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(PWEdit_2);

        Creation_Button = new QPushButton(TabInit);
        Creation_Button->setObjectName(QString::fromUtf8("Creation_Button"));
        sizePolicy1.setHeightForWidth(Creation_Button->sizePolicy().hasHeightForWidth());
        Creation_Button->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(Creation_Button);

        btnHello_2 = new QPushButton(TabInit);
        btnHello_2->setObjectName(QString::fromUtf8("btnHello_2"));
        sizePolicy1.setHeightForWidth(btnHello_2->sizePolicy().hasHeightForWidth());
        btnHello_2->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(btnHello_2);

        pushButton = new QPushButton(TabInit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(pushButton);

        ResetButton = new QPushButton(TabInit);
        ResetButton->setObjectName(QString::fromUtf8("ResetButton"));
        sizePolicy1.setHeightForWidth(ResetButton->sizePolicy().hasHeightForWidth());
        ResetButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(ResetButton);

        InfoLabel = new QLabel(TabInit);
        InfoLabel->setObjectName(QString::fromUtf8("InfoLabel"));
        sizePolicy1.setHeightForWidth(InfoLabel->sizePolicy().hasHeightForWidth());
        InfoLabel->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(InfoLabel);

        ConsoleOutput = new QTextEdit(TabInit);
        ConsoleOutput->setObjectName(QString::fromUtf8("ConsoleOutput"));
        sizePolicy1.setHeightForWidth(ConsoleOutput->sizePolicy().hasHeightForWidth());
        ConsoleOutput->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(ConsoleOutput);

        ConsoleOutputLabel = new QLabel(TabInit);
        ConsoleOutputLabel->setObjectName(QString::fromUtf8("ConsoleOutputLabel"));
        sizePolicy1.setHeightForWidth(ConsoleOutputLabel->sizePolicy().hasHeightForWidth());
        ConsoleOutputLabel->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(ConsoleOutputLabel);

        InfoDisplay = new QTextEdit(TabInit);
        InfoDisplay->setObjectName(QString::fromUtf8("InfoDisplay"));
        sizePolicy1.setHeightForWidth(InfoDisplay->sizePolicy().hasHeightForWidth());
        InfoDisplay->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(InfoDisplay);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QuitButtonTab1 = new QPushButton(TabInit);
        QuitButtonTab1->setObjectName(QString::fromUtf8("QuitButtonTab1"));
        QuitButtonTab1->setEnabled(true);
        sizePolicy1.setHeightForWidth(QuitButtonTab1->sizePolicy().hasHeightForWidth());
        QuitButtonTab1->setSizePolicy(sizePolicy1);
        QPalette palette1;
        QLinearGradient gradient18(0, 0, 1, 1);
        gradient18.setSpread(QGradient::PadSpread);
        gradient18.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient18.setColorAt(0, QColor(255, 255, 255, 255));
        gradient18.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush22(gradient18);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush22);
        QLinearGradient gradient19(0, 0, 1, 1);
        gradient19.setSpread(QGradient::PadSpread);
        gradient19.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient19.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush23(gradient19);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush23);
        QLinearGradient gradient20(0, 0, 1, 1);
        gradient20.setSpread(QGradient::PadSpread);
        gradient20.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient20.setColorAt(0, QColor(255, 255, 255, 255));
        gradient20.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush24(gradient20);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush24);
        QLinearGradient gradient21(0, 0, 1, 1);
        gradient21.setSpread(QGradient::PadSpread);
        gradient21.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient21.setColorAt(0, QColor(255, 255, 255, 255));
        gradient21.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush25(gradient21);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush25);
        QLinearGradient gradient22(0, 0, 1, 1);
        gradient22.setSpread(QGradient::PadSpread);
        gradient22.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient22.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush26(gradient22);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush26);
        QLinearGradient gradient23(0, 0, 1, 1);
        gradient23.setSpread(QGradient::PadSpread);
        gradient23.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient23.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush27(gradient23);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush27);
        QBrush brush28(QColor(0, 0, 0, 128));
        brush28.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush28);
#endif
        QLinearGradient gradient24(0, 0, 1, 1);
        gradient24.setSpread(QGradient::PadSpread);
        gradient24.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient24.setColorAt(0, QColor(255, 255, 255, 255));
        gradient24.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush29(gradient24);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush29);
        QLinearGradient gradient25(0, 0, 1, 1);
        gradient25.setSpread(QGradient::PadSpread);
        gradient25.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient25.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush30(gradient25);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush30);
        QLinearGradient gradient26(0, 0, 1, 1);
        gradient26.setSpread(QGradient::PadSpread);
        gradient26.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient26.setColorAt(0, QColor(255, 255, 255, 255));
        gradient26.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush31(gradient26);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush31);
        QLinearGradient gradient27(0, 0, 1, 1);
        gradient27.setSpread(QGradient::PadSpread);
        gradient27.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient27.setColorAt(0, QColor(255, 255, 255, 255));
        gradient27.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush32(gradient27);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush32);
        QLinearGradient gradient28(0, 0, 1, 1);
        gradient28.setSpread(QGradient::PadSpread);
        gradient28.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient28.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush33(gradient28);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush33);
        QLinearGradient gradient29(0, 0, 1, 1);
        gradient29.setSpread(QGradient::PadSpread);
        gradient29.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient29.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush34(gradient29);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush34);
        QBrush brush35(QColor(0, 0, 0, 128));
        brush35.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush35);
#endif
        QLinearGradient gradient30(0, 0, 1, 1);
        gradient30.setSpread(QGradient::PadSpread);
        gradient30.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient30.setColorAt(0, QColor(255, 255, 255, 255));
        gradient30.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush36(gradient30);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush36);
        QLinearGradient gradient31(0, 0, 1, 1);
        gradient31.setSpread(QGradient::PadSpread);
        gradient31.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient31.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush37(gradient31);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush37);
        QLinearGradient gradient32(0, 0, 1, 1);
        gradient32.setSpread(QGradient::PadSpread);
        gradient32.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient32.setColorAt(0, QColor(255, 255, 255, 255));
        gradient32.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush38(gradient32);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush38);
        QLinearGradient gradient33(0, 0, 1, 1);
        gradient33.setSpread(QGradient::PadSpread);
        gradient33.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient33.setColorAt(0, QColor(255, 255, 255, 255));
        gradient33.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush39(gradient33);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush39);
        QLinearGradient gradient34(0, 0, 1, 1);
        gradient34.setSpread(QGradient::PadSpread);
        gradient34.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient34.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush40(gradient34);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush40);
        QLinearGradient gradient35(0, 0, 1, 1);
        gradient35.setSpread(QGradient::PadSpread);
        gradient35.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient35.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush41(gradient35);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush41);
        QBrush brush42(QColor(0, 0, 0, 128));
        brush42.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush42);
#endif
        QuitButtonTab1->setPalette(palette1);

        verticalLayout->addWidget(QuitButtonTab1);

        tabWidget->addTab(TabInit, QString());
        TabInfo = new QWidget();
        TabInfo->setObjectName(QString::fromUtf8("TabInfo"));
        line_2 = new QFrame(TabInfo);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(610, 50, 16, 681));
        sizePolicy1.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy1);
        QPalette palette2;
        QLinearGradient gradient36(0, 0, 1, 1);
        gradient36.setSpread(QGradient::PadSpread);
        gradient36.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient36.setColorAt(0, QColor(255, 255, 255, 255));
        gradient36.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush43(gradient36);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush43);
        QLinearGradient gradient37(0, 0, 1, 1);
        gradient37.setSpread(QGradient::PadSpread);
        gradient37.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient37.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush44(gradient37);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush44);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush2);
        QLinearGradient gradient38(0, 0, 1, 1);
        gradient38.setSpread(QGradient::PadSpread);
        gradient38.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient38.setColorAt(0, QColor(255, 255, 255, 255));
        gradient38.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush45(gradient38);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush45);
        QLinearGradient gradient39(0, 0, 1, 1);
        gradient39.setSpread(QGradient::PadSpread);
        gradient39.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient39.setColorAt(0, QColor(255, 255, 255, 255));
        gradient39.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush46(gradient39);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush46);
        QLinearGradient gradient40(0, 0, 1, 1);
        gradient40.setSpread(QGradient::PadSpread);
        gradient40.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient40.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush47(gradient40);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush47);
        QLinearGradient gradient41(0, 0, 1, 1);
        gradient41.setSpread(QGradient::PadSpread);
        gradient41.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient41.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush48(gradient41);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush48);
        QBrush brush49(QColor(0, 0, 0, 128));
        brush49.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush49);
#endif
        QLinearGradient gradient42(0, 0, 1, 1);
        gradient42.setSpread(QGradient::PadSpread);
        gradient42.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient42.setColorAt(0, QColor(255, 255, 255, 255));
        gradient42.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush50(gradient42);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush50);
        QLinearGradient gradient43(0, 0, 1, 1);
        gradient43.setSpread(QGradient::PadSpread);
        gradient43.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient43.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush51(gradient43);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush51);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush2);
        QLinearGradient gradient44(0, 0, 1, 1);
        gradient44.setSpread(QGradient::PadSpread);
        gradient44.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient44.setColorAt(0, QColor(255, 255, 255, 255));
        gradient44.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush52(gradient44);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush52);
        QLinearGradient gradient45(0, 0, 1, 1);
        gradient45.setSpread(QGradient::PadSpread);
        gradient45.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient45.setColorAt(0, QColor(255, 255, 255, 255));
        gradient45.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush53(gradient45);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush53);
        QLinearGradient gradient46(0, 0, 1, 1);
        gradient46.setSpread(QGradient::PadSpread);
        gradient46.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient46.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush54(gradient46);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush54);
        QLinearGradient gradient47(0, 0, 1, 1);
        gradient47.setSpread(QGradient::PadSpread);
        gradient47.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient47.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush55(gradient47);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush55);
        QBrush brush56(QColor(0, 0, 0, 128));
        brush56.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush56);
#endif
        QLinearGradient gradient48(0, 0, 1, 1);
        gradient48.setSpread(QGradient::PadSpread);
        gradient48.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient48.setColorAt(0, QColor(255, 255, 255, 255));
        gradient48.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush57(gradient48);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush57);
        QLinearGradient gradient49(0, 0, 1, 1);
        gradient49.setSpread(QGradient::PadSpread);
        gradient49.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient49.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush58(gradient49);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush58);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        QLinearGradient gradient50(0, 0, 1, 1);
        gradient50.setSpread(QGradient::PadSpread);
        gradient50.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient50.setColorAt(0, QColor(255, 255, 255, 255));
        gradient50.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush59(gradient50);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush59);
        QLinearGradient gradient51(0, 0, 1, 1);
        gradient51.setSpread(QGradient::PadSpread);
        gradient51.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient51.setColorAt(0, QColor(255, 255, 255, 255));
        gradient51.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush60(gradient51);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush60);
        QLinearGradient gradient52(0, 0, 1, 1);
        gradient52.setSpread(QGradient::PadSpread);
        gradient52.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient52.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush61(gradient52);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush61);
        QLinearGradient gradient53(0, 0, 1, 1);
        gradient53.setSpread(QGradient::PadSpread);
        gradient53.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient53.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush62(gradient53);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush62);
        QBrush brush63(QColor(0, 0, 0, 128));
        brush63.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush63);
#endif
        line_2->setPalette(palette2);
        line_2->setAutoFillBackground(false);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(TabInfo);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 50, 571, 551));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        QPalette palette3;
        QLinearGradient gradient54(0, 0, 1, 1);
        gradient54.setSpread(QGradient::PadSpread);
        gradient54.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient54.setColorAt(0, QColor(255, 255, 255, 255));
        gradient54.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush64(gradient54);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush64);
        QLinearGradient gradient55(0, 0, 1, 1);
        gradient55.setSpread(QGradient::PadSpread);
        gradient55.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient55.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush65(gradient55);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush65);
        QLinearGradient gradient56(0, 0, 1, 1);
        gradient56.setSpread(QGradient::PadSpread);
        gradient56.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient56.setColorAt(0, QColor(255, 255, 255, 255));
        gradient56.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush66(gradient56);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush66);
        QLinearGradient gradient57(0, 0, 1, 1);
        gradient57.setSpread(QGradient::PadSpread);
        gradient57.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient57.setColorAt(0, QColor(255, 255, 255, 255));
        gradient57.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush67(gradient57);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush67);
        QLinearGradient gradient58(0, 0, 1, 1);
        gradient58.setSpread(QGradient::PadSpread);
        gradient58.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient58.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush68(gradient58);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush68);
        QLinearGradient gradient59(0, 0, 1, 1);
        gradient59.setSpread(QGradient::PadSpread);
        gradient59.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient59.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush69(gradient59);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush69);
        QBrush brush70(QColor(0, 0, 0, 128));
        brush70.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush70);
#endif
        QLinearGradient gradient60(0, 0, 1, 1);
        gradient60.setSpread(QGradient::PadSpread);
        gradient60.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient60.setColorAt(0, QColor(255, 255, 255, 255));
        gradient60.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush71(gradient60);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush71);
        QLinearGradient gradient61(0, 0, 1, 1);
        gradient61.setSpread(QGradient::PadSpread);
        gradient61.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient61.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush72(gradient61);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush72);
        QLinearGradient gradient62(0, 0, 1, 1);
        gradient62.setSpread(QGradient::PadSpread);
        gradient62.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient62.setColorAt(0, QColor(255, 255, 255, 255));
        gradient62.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush73(gradient62);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush73);
        QLinearGradient gradient63(0, 0, 1, 1);
        gradient63.setSpread(QGradient::PadSpread);
        gradient63.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient63.setColorAt(0, QColor(255, 255, 255, 255));
        gradient63.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush74(gradient63);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush74);
        QLinearGradient gradient64(0, 0, 1, 1);
        gradient64.setSpread(QGradient::PadSpread);
        gradient64.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient64.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush75(gradient64);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush75);
        QLinearGradient gradient65(0, 0, 1, 1);
        gradient65.setSpread(QGradient::PadSpread);
        gradient65.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient65.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush76(gradient65);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush76);
        QBrush brush77(QColor(0, 0, 0, 128));
        brush77.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush77);
#endif
        QLinearGradient gradient66(0, 0, 1, 1);
        gradient66.setSpread(QGradient::PadSpread);
        gradient66.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient66.setColorAt(0, QColor(255, 255, 255, 255));
        gradient66.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush78(gradient66);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush78);
        QLinearGradient gradient67(0, 0, 1, 1);
        gradient67.setSpread(QGradient::PadSpread);
        gradient67.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient67.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush79(gradient67);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush79);
        QLinearGradient gradient68(0, 0, 1, 1);
        gradient68.setSpread(QGradient::PadSpread);
        gradient68.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient68.setColorAt(0, QColor(255, 255, 255, 255));
        gradient68.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush80(gradient68);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush80);
        QLinearGradient gradient69(0, 0, 1, 1);
        gradient69.setSpread(QGradient::PadSpread);
        gradient69.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient69.setColorAt(0, QColor(255, 255, 255, 255));
        gradient69.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush81(gradient69);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush81);
        QLinearGradient gradient70(0, 0, 1, 1);
        gradient70.setSpread(QGradient::PadSpread);
        gradient70.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient70.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush82(gradient70);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush82);
        QLinearGradient gradient71(0, 0, 1, 1);
        gradient71.setSpread(QGradient::PadSpread);
        gradient71.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient71.setColorAt(1, QColor(12, 62, 97, 255));
        QBrush brush83(gradient71);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush83);
        QBrush brush84(QColor(0, 0, 0, 128));
        brush84.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush84);
#endif
        groupBox->setPalette(palette3);
        QFont font;
        font.setFamily(QString::fromUtf8("Nimbus Roman No9 L"));
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QString::fromUtf8("font: 75 Bold 10.5pt \"Nimbus Roman No9 L\";\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        groupBox->setAlignment(Qt::AlignCenter);
        TransactionsCounterLabel = new QLabel(groupBox);
        TransactionsCounterLabel->setObjectName(QString::fromUtf8("TransactionsCounterLabel"));
        TransactionsCounterLabel->setEnabled(true);
        TransactionsCounterLabel->setGeometry(QRect(400, 30, 151, 20));
        sizePolicy1.setHeightForWidth(TransactionsCounterLabel->sizePolicy().hasHeightForWidth());
        TransactionsCounterLabel->setSizePolicy(sizePolicy1);
        TransactionsCounterLabel->setStyleSheet(QString::fromUtf8("font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        TransactionsCounterLabel->setAlignment(Qt::AlignCenter);
        LatestTransactionDate = new QDateTimeEdit(groupBox);
        LatestTransactionDate->setObjectName(QString::fromUtf8("LatestTransactionDate"));
        LatestTransactionDate->setEnabled(true);
        LatestTransactionDate->setGeometry(QRect(210, 50, 171, 26));
        sizePolicy1.setHeightForWidth(LatestTransactionDate->sizePolicy().hasHeightForWidth());
        LatestTransactionDate->setSizePolicy(sizePolicy1);
        LatestTransactionDate->setStyleSheet(QString::fromUtf8("font: 75 Bold 10pt \"Nimbus Roman No9 L\";background-color: rgb(255, 255, 255);"));
        LatestTransactionDate->setAlignment(Qt::AlignCenter);
        LatestTransactionDate->setReadOnly(true);
        FirstTransactionDate = new QDateTimeEdit(groupBox);
        FirstTransactionDate->setObjectName(QString::fromUtf8("FirstTransactionDate"));
        FirstTransactionDate->setEnabled(true);
        FirstTransactionDate->setGeometry(QRect(20, 50, 171, 26));
        sizePolicy1.setHeightForWidth(FirstTransactionDate->sizePolicy().hasHeightForWidth());
        FirstTransactionDate->setSizePolicy(sizePolicy1);
        FirstTransactionDate->setAutoFillBackground(false);
        FirstTransactionDate->setStyleSheet(QString::fromUtf8("font: 75 Bold 10pt \"Nimbus Roman No9 L\";background-color: rgb(255, 255, 255);"));
        FirstTransactionDate->setAlignment(Qt::AlignCenter);
        FirstTransactionDate->setReadOnly(true);
        FirstTransaction = new QLabel(groupBox);
        FirstTransaction->setObjectName(QString::fromUtf8("FirstTransaction"));
        FirstTransaction->setEnabled(true);
        FirstTransaction->setGeometry(QRect(20, 30, 171, 20));
        sizePolicy1.setHeightForWidth(FirstTransaction->sizePolicy().hasHeightForWidth());
        FirstTransaction->setSizePolicy(sizePolicy1);
        FirstTransaction->setStyleSheet(QString::fromUtf8("font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        FirstTransaction->setAlignment(Qt::AlignCenter);
        LatestTransaction = new QLabel(groupBox);
        LatestTransaction->setObjectName(QString::fromUtf8("LatestTransaction"));
        LatestTransaction->setEnabled(true);
        LatestTransaction->setGeometry(QRect(210, 30, 171, 20));
        sizePolicy1.setHeightForWidth(LatestTransaction->sizePolicy().hasHeightForWidth());
        LatestTransaction->setSizePolicy(sizePolicy1);
        LatestTransaction->setStyleSheet(QString::fromUtf8("font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        LatestTransaction->setAlignment(Qt::AlignCenter);
        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 90, 551, 231));
        sizePolicy1.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy1);
        groupBox_6->setFont(font);
        groupBox_6->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(12, 62, 97, 255));\n"
"font: 75 Bold 10.5pt \"Nimbus Roman No9 L\";"));
        groupBox_6->setAlignment(Qt::AlignCenter);
        LastHash_before_label = new QLabel(groupBox_6);
        LastHash_before_label->setObjectName(QString::fromUtf8("LastHash_before_label"));
        LastHash_before_label->setEnabled(true);
        LastHash_before_label->setGeometry(QRect(10, 90, 531, 17));
        sizePolicy1.setHeightForWidth(LastHash_before_label->sizePolicy().hasHeightForWidth());
        LastHash_before_label->setSizePolicy(sizePolicy1);
        LastHash_before_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        LastHash_before_label->setAlignment(Qt::AlignCenter);
        LastHash_before = new QTextEdit(groupBox_6);
        LastHash_before->setObjectName(QString::fromUtf8("LastHash_before"));
        LastHash_before->setEnabled(true);
        LastHash_before->setGeometry(QRect(10, 110, 531, 31));
        sizePolicy1.setHeightForWidth(LastHash_before->sizePolicy().hasHeightForWidth());
        LastHash_before->setSizePolicy(sizePolicy1);
        LastHash_before->setFont(font);
        LastHash_before->setStyleSheet(QString::fromUtf8("font: 75 Bold 10.5pt \"Nimbus Roman No9 L\";background-color: rgb(255, 255, 255);"));
        LastHash_before->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        LastHash_before->setReadOnly(true);
        Hash_before_label = new QLabel(groupBox_6);
        Hash_before_label->setObjectName(QString::fromUtf8("Hash_before_label"));
        Hash_before_label->setEnabled(true);
        Hash_before_label->setGeometry(QRect(10, 150, 531, 17));
        sizePolicy1.setHeightForWidth(Hash_before_label->sizePolicy().hasHeightForWidth());
        Hash_before_label->setSizePolicy(sizePolicy1);
        Hash_before_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        Hash_before_label->setAlignment(Qt::AlignCenter);
        Hash_before = new QTextEdit(groupBox_6);
        Hash_before->setObjectName(QString::fromUtf8("Hash_before"));
        Hash_before->setEnabled(true);
        Hash_before->setGeometry(QRect(10, 170, 531, 31));
        sizePolicy1.setHeightForWidth(Hash_before->sizePolicy().hasHeightForWidth());
        Hash_before->setSizePolicy(sizePolicy1);
        Hash_before->setFont(font);
        Hash_before->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Hash_before->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Hash_before->setReadOnly(true);
        Nb_Tx_before_label = new QLabel(groupBox_6);
        Nb_Tx_before_label->setObjectName(QString::fromUtf8("Nb_Tx_before_label"));
        Nb_Tx_before_label->setEnabled(true);
        Nb_Tx_before_label->setGeometry(QRect(150, 30, 121, 17));
        sizePolicy1.setHeightForWidth(Nb_Tx_before_label->sizePolicy().hasHeightForWidth());
        Nb_Tx_before_label->setSizePolicy(sizePolicy1);
        Nb_Tx_before_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        Nb_Tx_before_label->setAlignment(Qt::AlignCenter);
        BlockTime_before_label = new QLabel(groupBox_6);
        BlockTime_before_label->setObjectName(QString::fromUtf8("BlockTime_before_label"));
        BlockTime_before_label->setEnabled(true);
        BlockTime_before_label->setGeometry(QRect(290, 30, 251, 20));
        sizePolicy1.setHeightForWidth(BlockTime_before_label->sizePolicy().hasHeightForWidth());
        BlockTime_before_label->setSizePolicy(sizePolicy1);
        BlockTime_before_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        BlockTime_before_label->setAlignment(Qt::AlignCenter);
        nbTx_before = new QLineEdit(groupBox_6);
        nbTx_before->setObjectName(QString::fromUtf8("nbTx_before"));
        nbTx_before->setGeometry(QRect(150, 50, 121, 25));
        sizePolicy1.setHeightForWidth(nbTx_before->sizePolicy().hasHeightForWidth());
        nbTx_before->setSizePolicy(sizePolicy1);
        nbTx_before->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);font: 75 Bold 10.5pt \"Nimbus Roman No9 L\";"));
        nbTx_before->setAlignment(Qt::AlignCenter);
        nbTx_before->setReadOnly(true);
        BlockTime_before = new QLineEdit(groupBox_6);
        BlockTime_before->setObjectName(QString::fromUtf8("BlockTime_before"));
        BlockTime_before->setGeometry(QRect(290, 50, 251, 25));
        sizePolicy1.setHeightForWidth(BlockTime_before->sizePolicy().hasHeightForWidth());
        BlockTime_before->setSizePolicy(sizePolicy1);
        BlockTime_before->setStyleSheet(QString::fromUtf8("font: 75 Bold 10.5pt \"Nimbus Roman No9 L\";background-color: rgb(255, 255, 255);"));
        BlockTime_before->setAlignment(Qt::AlignCenter);
        BlockTime_before->setReadOnly(true);
        PreviousBlockNumber = new QLineEdit(groupBox_6);
        PreviousBlockNumber->setObjectName(QString::fromUtf8("PreviousBlockNumber"));
        PreviousBlockNumber->setGeometry(QRect(10, 50, 121, 25));
        sizePolicy1.setHeightForWidth(PreviousBlockNumber->sizePolicy().hasHeightForWidth());
        PreviousBlockNumber->setSizePolicy(sizePolicy1);
        PreviousBlockNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 75 Bold 10.5pt \"Nimbus Roman No9 L\";"));
        PreviousBlockNumber->setAlignment(Qt::AlignCenter);
        PreviousBlockNumber->setReadOnly(true);
        PreviousBlockNumberLabel = new QLabel(groupBox_6);
        PreviousBlockNumberLabel->setObjectName(QString::fromUtf8("PreviousBlockNumberLabel"));
        PreviousBlockNumberLabel->setEnabled(true);
        PreviousBlockNumberLabel->setGeometry(QRect(10, 30, 121, 20));
        sizePolicy1.setHeightForWidth(PreviousBlockNumberLabel->sizePolicy().hasHeightForWidth());
        PreviousBlockNumberLabel->setSizePolicy(sizePolicy1);
        PreviousBlockNumberLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        PreviousBlockNumberLabel->setAlignment(Qt::AlignCenter);
        groupBox_7 = new QGroupBox(groupBox);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 330, 551, 211));
        sizePolicy1.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy1);
        groupBox_7->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(12, 62, 97, 255));font: 75 Bold 10.5pt \"Nimbus Roman No9 L\";"));
        groupBox_7->setAlignment(Qt::AlignCenter);
        LastHash_current_label = new QLabel(groupBox_7);
        LastHash_current_label->setObjectName(QString::fromUtf8("LastHash_current_label"));
        LastHash_current_label->setEnabled(true);
        LastHash_current_label->setGeometry(QRect(10, 90, 531, 17));
        sizePolicy1.setHeightForWidth(LastHash_current_label->sizePolicy().hasHeightForWidth());
        LastHash_current_label->setSizePolicy(sizePolicy1);
        LastHash_current_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        LastHash_current_label->setAlignment(Qt::AlignCenter);
        Hash_current_label = new QLabel(groupBox_7);
        Hash_current_label->setObjectName(QString::fromUtf8("Hash_current_label"));
        Hash_current_label->setEnabled(true);
        Hash_current_label->setGeometry(QRect(20, 150, 521, 20));
        sizePolicy1.setHeightForWidth(Hash_current_label->sizePolicy().hasHeightForWidth());
        Hash_current_label->setSizePolicy(sizePolicy1);
        Hash_current_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        Hash_current_label->setAlignment(Qt::AlignCenter);
        Hash_current = new QTextEdit(groupBox_7);
        Hash_current->setObjectName(QString::fromUtf8("Hash_current"));
        Hash_current->setEnabled(true);
        Hash_current->setGeometry(QRect(10, 170, 531, 31));
        sizePolicy1.setHeightForWidth(Hash_current->sizePolicy().hasHeightForWidth());
        Hash_current->setSizePolicy(sizePolicy1);
        Hash_current->setFont(font);
        Hash_current->setStyleSheet(QString::fromUtf8("font: 75 Bold 10.5pt \"Nimbus Roman No9 L\";background-color: rgb(255, 255, 255);"));
        Hash_current->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Hash_current->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        Hash_current->setReadOnly(true);
        Nb_Tx_current_label = new QLabel(groupBox_7);
        Nb_Tx_current_label->setObjectName(QString::fromUtf8("Nb_Tx_current_label"));
        Nb_Tx_current_label->setEnabled(true);
        Nb_Tx_current_label->setGeometry(QRect(150, 30, 131, 20));
        sizePolicy1.setHeightForWidth(Nb_Tx_current_label->sizePolicy().hasHeightForWidth());
        Nb_Tx_current_label->setSizePolicy(sizePolicy1);
        Nb_Tx_current_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        Nb_Tx_current_label->setAlignment(Qt::AlignCenter);
        BlockTime_current_label = new QLabel(groupBox_7);
        BlockTime_current_label->setObjectName(QString::fromUtf8("BlockTime_current_label"));
        BlockTime_current_label->setEnabled(true);
        BlockTime_current_label->setGeometry(QRect(310, 30, 231, 17));
        sizePolicy1.setHeightForWidth(BlockTime_current_label->sizePolicy().hasHeightForWidth());
        BlockTime_current_label->setSizePolicy(sizePolicy1);
        BlockTime_current_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        BlockTime_current_label->setAlignment(Qt::AlignCenter);
        nbTx_current = new QLineEdit(groupBox_7);
        nbTx_current->setObjectName(QString::fromUtf8("nbTx_current"));
        nbTx_current->setGeometry(QRect(150, 50, 131, 25));
        sizePolicy1.setHeightForWidth(nbTx_current->sizePolicy().hasHeightForWidth());
        nbTx_current->setSizePolicy(sizePolicy1);
        nbTx_current->setStyleSheet(QString::fromUtf8("font: 75 Bold 10.5pt \"Nimbus Roman No9 L\";background-color: rgb(255, 255, 255);"));
        nbTx_current->setAlignment(Qt::AlignCenter);
        nbTx_current->setReadOnly(true);
        BlockTime_current = new QLineEdit(groupBox_7);
        BlockTime_current->setObjectName(QString::fromUtf8("BlockTime_current"));
        BlockTime_current->setGeometry(QRect(320, 50, 221, 25));
        sizePolicy1.setHeightForWidth(BlockTime_current->sizePolicy().hasHeightForWidth());
        BlockTime_current->setSizePolicy(sizePolicy1);
        BlockTime_current->setStyleSheet(QString::fromUtf8("font: 75 Bold 10.5pt \"Nimbus Roman No9 L\";background-color: rgb(255, 255, 255);"));
        BlockTime_current->setAlignment(Qt::AlignCenter);
        BlockTime_current->setReadOnly(true);
        CurrentBlockNumber = new QLineEdit(groupBox_7);
        CurrentBlockNumber->setObjectName(QString::fromUtf8("CurrentBlockNumber"));
        CurrentBlockNumber->setGeometry(QRect(10, 50, 121, 25));
        sizePolicy1.setHeightForWidth(CurrentBlockNumber->sizePolicy().hasHeightForWidth());
        CurrentBlockNumber->setSizePolicy(sizePolicy1);
        CurrentBlockNumber->setStyleSheet(QString::fromUtf8("font: 75 Bold 10.5pt \"Nimbus Roman No9 L\";background-color: rgb(255, 255, 255);"));
        CurrentBlockNumber->setAlignment(Qt::AlignCenter);
        CurrentBlockNumber->setReadOnly(true);
        CurrentBlockNumberLabel = new QLabel(groupBox_7);
        CurrentBlockNumberLabel->setObjectName(QString::fromUtf8("CurrentBlockNumberLabel"));
        CurrentBlockNumberLabel->setEnabled(true);
        CurrentBlockNumberLabel->setGeometry(QRect(10, 30, 121, 20));
        sizePolicy1.setHeightForWidth(CurrentBlockNumberLabel->sizePolicy().hasHeightForWidth());
        CurrentBlockNumberLabel->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Nimbus Roman No9 L"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        CurrentBlockNumberLabel->setFont(font1);
        CurrentBlockNumberLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        CurrentBlockNumberLabel->setAlignment(Qt::AlignCenter);
        LastHash_current = new QTextEdit(groupBox_7);
        LastHash_current->setObjectName(QString::fromUtf8("LastHash_current"));
        LastHash_current->setEnabled(true);
        LastHash_current->setGeometry(QRect(10, 110, 531, 31));
        sizePolicy1.setHeightForWidth(LastHash_current->sizePolicy().hasHeightForWidth());
        LastHash_current->setSizePolicy(sizePolicy1);
        LastHash_current->setFont(font);
        LastHash_current->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        LastHash_current->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        LastHash_current->setReadOnly(true);
        TransactionsCounter = new QLineEdit(groupBox);
        TransactionsCounter->setObjectName(QString::fromUtf8("TransactionsCounter"));
        TransactionsCounter->setGeometry(QRect(400, 50, 151, 25));
        sizePolicy1.setHeightForWidth(TransactionsCounter->sizePolicy().hasHeightForWidth());
        TransactionsCounter->setSizePolicy(sizePolicy1);
        TransactionsCounter->setAutoFillBackground(false);
        TransactionsCounter->setStyleSheet(QString::fromUtf8("font: 75 Bold 10pt \"Nimbus Roman No9 L\";background-color: rgb(255, 255, 255);"));
        TransactionsCounter->setAlignment(Qt::AlignCenter);
        TransactionsCounter->setReadOnly(true);
        image = new QLabel(groupBox);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(700, 100, 131, 101));
        line_4 = new QFrame(TabInfo);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(620, 520, 571, 21));
        sizePolicy1.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy1);
        line_4->setAutoFillBackground(false);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        QuitButtonTab2 = new QPushButton(TabInfo);
        QuitButtonTab2->setObjectName(QString::fromUtf8("QuitButtonTab2"));
        QuitButtonTab2->setGeometry(QRect(1290, 670, 151, 31));
        sizePolicy1.setHeightForWidth(QuitButtonTab2->sizePolicy().hasHeightForWidth());
        QuitButtonTab2->setSizePolicy(sizePolicy1);
        QPalette palette4;
        QLinearGradient gradient72(0, 0, 1, 1);
        gradient72.setSpread(QGradient::PadSpread);
        gradient72.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient72.setColorAt(0, QColor(255, 255, 255, 255));
        gradient72.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush85(gradient72);
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush85);
        QBrush brush86(QColor(170, 40, 40, 255));
        brush86.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush86);
        QLinearGradient gradient73(0, 0, 1, 1);
        gradient73.setSpread(QGradient::PadSpread);
        gradient73.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient73.setColorAt(0, QColor(255, 255, 255, 255));
        gradient73.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush87(gradient73);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush87);
        QLinearGradient gradient74(0, 0, 1, 1);
        gradient74.setSpread(QGradient::PadSpread);
        gradient74.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient74.setColorAt(0, QColor(255, 255, 255, 255));
        gradient74.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush88(gradient74);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush88);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush86);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush86);
        QBrush brush89(QColor(0, 0, 0, 128));
        brush89.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush89);
#endif
        QLinearGradient gradient75(0, 0, 1, 1);
        gradient75.setSpread(QGradient::PadSpread);
        gradient75.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient75.setColorAt(0, QColor(255, 255, 255, 255));
        gradient75.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush90(gradient75);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush90);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush86);
        QLinearGradient gradient76(0, 0, 1, 1);
        gradient76.setSpread(QGradient::PadSpread);
        gradient76.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient76.setColorAt(0, QColor(255, 255, 255, 255));
        gradient76.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush91(gradient76);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush91);
        QLinearGradient gradient77(0, 0, 1, 1);
        gradient77.setSpread(QGradient::PadSpread);
        gradient77.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient77.setColorAt(0, QColor(255, 255, 255, 255));
        gradient77.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush92(gradient77);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush92);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush86);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush86);
        QBrush brush93(QColor(0, 0, 0, 128));
        brush93.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush93);
#endif
        QLinearGradient gradient78(0, 0, 1, 1);
        gradient78.setSpread(QGradient::PadSpread);
        gradient78.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient78.setColorAt(0, QColor(255, 255, 255, 255));
        gradient78.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush94(gradient78);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush94);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush86);
        QLinearGradient gradient79(0, 0, 1, 1);
        gradient79.setSpread(QGradient::PadSpread);
        gradient79.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient79.setColorAt(0, QColor(255, 255, 255, 255));
        gradient79.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush95(gradient79);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush95);
        QLinearGradient gradient80(0, 0, 1, 1);
        gradient80.setSpread(QGradient::PadSpread);
        gradient80.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient80.setColorAt(0, QColor(255, 255, 255, 255));
        gradient80.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush96(gradient80);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush96);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush86);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush86);
        QBrush brush97(QColor(0, 0, 0, 128));
        brush97.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush97);
#endif
        QuitButtonTab2->setPalette(palette4);
        QuitButtonTab2->setMouseTracking(false);
        QuitButtonTab2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 40, 40);font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        StartStopGatewayButton = new QPushButton(TabInfo);
        StartStopGatewayButton->setObjectName(QString::fromUtf8("StartStopGatewayButton"));
        StartStopGatewayButton->setEnabled(false);
        StartStopGatewayButton->setGeometry(QRect(350, 670, 161, 31));
        sizePolicy1.setHeightForWidth(StartStopGatewayButton->sizePolicy().hasHeightForWidth());
        StartStopGatewayButton->setSizePolicy(sizePolicy1);
        QPalette palette5;
        QLinearGradient gradient81(0, 0, 1, 1);
        gradient81.setSpread(QGradient::PadSpread);
        gradient81.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient81.setColorAt(0, QColor(255, 255, 255, 255));
        gradient81.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush98(gradient81);
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush98);
        QBrush brush99(QColor(56, 255, 12, 255));
        brush99.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush99);
        QLinearGradient gradient82(0, 0, 1, 1);
        gradient82.setSpread(QGradient::PadSpread);
        gradient82.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient82.setColorAt(0, QColor(255, 255, 255, 255));
        gradient82.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush100(gradient82);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush100);
        QLinearGradient gradient83(0, 0, 1, 1);
        gradient83.setSpread(QGradient::PadSpread);
        gradient83.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient83.setColorAt(0, QColor(255, 255, 255, 255));
        gradient83.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush101(gradient83);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush101);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush99);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush99);
        QBrush brush102(QColor(0, 0, 0, 128));
        brush102.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush102);
#endif
        QLinearGradient gradient84(0, 0, 1, 1);
        gradient84.setSpread(QGradient::PadSpread);
        gradient84.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient84.setColorAt(0, QColor(255, 255, 255, 255));
        gradient84.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush103(gradient84);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush103);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush99);
        QLinearGradient gradient85(0, 0, 1, 1);
        gradient85.setSpread(QGradient::PadSpread);
        gradient85.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient85.setColorAt(0, QColor(255, 255, 255, 255));
        gradient85.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush104(gradient85);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush104);
        QLinearGradient gradient86(0, 0, 1, 1);
        gradient86.setSpread(QGradient::PadSpread);
        gradient86.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient86.setColorAt(0, QColor(255, 255, 255, 255));
        gradient86.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush105(gradient86);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush105);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush99);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush99);
        QBrush brush106(QColor(0, 0, 0, 128));
        brush106.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush106);
#endif
        QLinearGradient gradient87(0, 0, 1, 1);
        gradient87.setSpread(QGradient::PadSpread);
        gradient87.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient87.setColorAt(0, QColor(255, 255, 255, 255));
        gradient87.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush107(gradient87);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush107);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush99);
        QLinearGradient gradient88(0, 0, 1, 1);
        gradient88.setSpread(QGradient::PadSpread);
        gradient88.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient88.setColorAt(0, QColor(255, 255, 255, 255));
        gradient88.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush108(gradient88);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush108);
        QLinearGradient gradient89(0, 0, 1, 1);
        gradient89.setSpread(QGradient::PadSpread);
        gradient89.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient89.setColorAt(0, QColor(255, 255, 255, 255));
        gradient89.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush109(gradient89);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush109);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush99);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush99);
        QBrush brush110(QColor(0, 0, 0, 128));
        brush110.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush110);
#endif
        StartStopGatewayButton->setPalette(palette5);
        StartStopGatewayButton->setAutoFillBackground(false);
        StartStopGatewayButton->setStyleSheet(QString::fromUtf8("background-color: rgb(56, 255, 12);"));
        StopStartLabel = new QLabel(TabInfo);
        StopStartLabel->setObjectName(QString::fromUtf8("StopStartLabel"));
        StopStartLabel->setGeometry(QRect(70, 650, 171, 20));
        StopStartLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 Bold 11pt \"Nimbus Roman No9 L\";"));
        StopStartLabel->setAlignment(Qt::AlignCenter);
        StartStopButton = new QPushButton(TabInfo);
        StartStopButton->setObjectName(QString::fromUtf8("StartStopButton"));
        StartStopButton->setGeometry(QRect(70, 670, 171, 31));
        sizePolicy1.setHeightForWidth(StartStopButton->sizePolicy().hasHeightForWidth());
        StartStopButton->setSizePolicy(sizePolicy1);
        QPalette palette6;
        QLinearGradient gradient90(0, 0, 1, 1);
        gradient90.setSpread(QGradient::PadSpread);
        gradient90.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient90.setColorAt(0, QColor(255, 255, 255, 255));
        gradient90.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush111(gradient90);
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush111);
        QBrush brush112(QColor(255, 88, 32, 255));
        brush112.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush112);
        QBrush brush113(QColor(40, 179, 252, 255));
        brush113.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush113);
        QBrush brush114(QColor(33, 149, 210, 255));
        brush114.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush114);
        QBrush brush115(QColor(13, 59, 84, 255));
        brush115.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush115);
        QBrush brush116(QColor(18, 79, 112, 255));
        brush116.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush116);
        QLinearGradient gradient91(0, 0, 1, 1);
        gradient91.setSpread(QGradient::PadSpread);
        gradient91.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient91.setColorAt(0, QColor(255, 255, 255, 255));
        gradient91.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush117(gradient91);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush117);
        QBrush brush118(QColor(255, 255, 255, 255));
        brush118.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush118);
        QLinearGradient gradient92(0, 0, 1, 1);
        gradient92.setSpread(QGradient::PadSpread);
        gradient92.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient92.setColorAt(0, QColor(255, 255, 255, 255));
        gradient92.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush119(gradient92);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush119);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush112);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush112);
        QBrush brush120(QColor(0, 0, 0, 255));
        brush120.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush120);
        QBrush brush121(QColor(141, 187, 211, 255));
        brush121.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush121);
        QBrush brush122(QColor(255, 255, 220, 255));
        brush122.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush122);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush120);
        QBrush brush123(QColor(0, 0, 0, 128));
        brush123.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush123);
#endif
        QLinearGradient gradient93(0, 0, 1, 1);
        gradient93.setSpread(QGradient::PadSpread);
        gradient93.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient93.setColorAt(0, QColor(255, 255, 255, 255));
        gradient93.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush124(gradient93);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush124);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush112);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush113);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush114);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush115);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush116);
        QLinearGradient gradient94(0, 0, 1, 1);
        gradient94.setSpread(QGradient::PadSpread);
        gradient94.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient94.setColorAt(0, QColor(255, 255, 255, 255));
        gradient94.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush125(gradient94);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush125);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush118);
        QLinearGradient gradient95(0, 0, 1, 1);
        gradient95.setSpread(QGradient::PadSpread);
        gradient95.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient95.setColorAt(0, QColor(255, 255, 255, 255));
        gradient95.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush126(gradient95);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush126);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush112);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush112);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush120);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush121);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush122);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush120);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush123);
#endif
        QLinearGradient gradient96(0, 0, 1, 1);
        gradient96.setSpread(QGradient::PadSpread);
        gradient96.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient96.setColorAt(0, QColor(255, 255, 255, 255));
        gradient96.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush127(gradient96);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush127);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush112);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush113);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush114);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush115);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush116);
        QLinearGradient gradient97(0, 0, 1, 1);
        gradient97.setSpread(QGradient::PadSpread);
        gradient97.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient97.setColorAt(0, QColor(255, 255, 255, 255));
        gradient97.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush128(gradient97);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush128);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush118);
        QLinearGradient gradient98(0, 0, 1, 1);
        gradient98.setSpread(QGradient::PadSpread);
        gradient98.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient98.setColorAt(0, QColor(255, 255, 255, 255));
        gradient98.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush129(gradient98);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush129);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush112);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush112);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush120);
        QBrush brush130(QColor(27, 119, 168, 255));
        brush130.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush130);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush122);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush120);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush123);
#endif
        StartStopButton->setPalette(palette6);
        StartStopButton->setAutoFillBackground(false);
        StartStopButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 88, 32);"));
        StopStartGatewayLabel = new QLabel(TabInfo);
        StopStartGatewayLabel->setObjectName(QString::fromUtf8("StopStartGatewayLabel"));
        StopStartGatewayLabel->setEnabled(false);
        StopStartGatewayLabel->setGeometry(QRect(350, 650, 161, 20));
        StopStartGatewayLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 Bold 11pt \"Nimbus Roman No9 L\";"));
        StopStartGatewayLabel->setAlignment(Qt::AlignCenter);
        label = new QLabel(TabInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1230, 10, 271, 41));
        label->setStyleSheet(QString::fromUtf8("font: 75 Bold 20pt \"Nimbus Roman No9 L\";\n"
"color: rgb(255, 255, 255);"));
        groupBox_3 = new QGroupBox(TabInfo);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(630, 40, 561, 301));
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        groupBox_3->setFont(font);
        groupBox_3->setStyleSheet(QString::fromUtf8("font: 75 Bold 10.5pt \"Nimbus Roman No9 L\";\n"
""));
        groupBox_3->setAlignment(Qt::AlignCenter);
        groupBox_3->setFlat(false);
        TransactionDate = new QCalendarWidget(groupBox_3);
        TransactionDate->setObjectName(QString::fromUtf8("TransactionDate"));
        TransactionDate->setEnabled(true);
        TransactionDate->setGeometry(QRect(20, 30, 531, 161));
        sizePolicy1.setHeightForWidth(TransactionDate->sizePolicy().hasHeightForWidth());
        TransactionDate->setSizePolicy(sizePolicy1);
        TransactionDate->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        TransactionTime = new QTimeEdit(groupBox_3);
        TransactionTime->setObjectName(QString::fromUtf8("TransactionTime"));
        TransactionTime->setEnabled(true);
        TransactionTime->setGeometry(QRect(20, 200, 531, 26));
        sizePolicy1.setHeightForWidth(TransactionTime->sizePolicy().hasHeightForWidth());
        TransactionTime->setSizePolicy(sizePolicy1);
        TransactionTime->setAutoFillBackground(false);
        TransactionTime->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        TransactionTime->setAlignment(Qt::AlignCenter);
        GetInfoButton = new QPushButton(groupBox_3);
        GetInfoButton->setObjectName(QString::fromUtf8("GetInfoButton"));
        GetInfoButton->setEnabled(true);
        GetInfoButton->setGeometry(QRect(320, 240, 191, 31));
        sizePolicy1.setHeightForWidth(GetInfoButton->sizePolicy().hasHeightForWidth());
        GetInfoButton->setSizePolicy(sizePolicy1);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush120);
        QBrush brush131(QColor(139, 255, 30, 255));
        brush131.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush131);
        QBrush brush132(QColor(229, 236, 255, 255));
        brush132.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush132);
        QBrush brush133(QColor(178, 195, 240, 255));
        brush133.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush133);
        QBrush brush134(QColor(64, 77, 113, 255));
        brush134.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush134);
        QBrush brush135(QColor(85, 103, 151, 255));
        brush135.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush135);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush120);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush118);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush120);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush131);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush131);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush120);
        QBrush brush136(QColor(191, 204, 240, 255));
        brush136.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush136);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush122);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush120);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush123);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush120);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush131);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush132);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush133);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush134);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush135);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush120);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush118);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush120);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush131);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush131);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush120);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush136);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush122);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush120);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush123);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush120);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush131);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush132);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush133);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush134);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush135);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush120);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush118);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush120);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush131);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush131);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush120);
        QBrush brush137(QColor(128, 154, 226, 255));
        brush137.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush137);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush122);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush120);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush123);
#endif
        GetInfoButton->setPalette(palette7);
        GetInfoButton->setFont(font1);
        GetInfoButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 Bold 12pt \"Nimbus Roman No9 L\";\n"
"background-color: rgb(139, 255, 30);"));
        LastRadioButton = new QRadioButton(groupBox_3);
        LastRadioButton->setObjectName(QString::fromUtf8("LastRadioButton"));
        LastRadioButton->setGeometry(QRect(210, 240, 61, 21));
        sizePolicy1.setHeightForWidth(LastRadioButton->sizePolicy().hasHeightForWidth());
        LastRadioButton->setSizePolicy(sizePolicy1);
        LastRadioButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        SelectedRadioButton = new QRadioButton(groupBox_3);
        SelectedRadioButton->setObjectName(QString::fromUtf8("SelectedRadioButton"));
        SelectedRadioButton->setGeometry(QRect(20, 240, 91, 21));
        sizePolicy1.setHeightForWidth(SelectedRadioButton->sizePolicy().hasHeightForWidth());
        SelectedRadioButton->setSizePolicy(sizePolicy1);
        SelectedRadioButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        SelectedRadioButton->setChecked(true);
        FirstRadioButton = new QRadioButton(groupBox_3);
        FirstRadioButton->setObjectName(QString::fromUtf8("FirstRadioButton"));
        FirstRadioButton->setGeometry(QRect(130, 240, 61, 21));
        sizePolicy1.setHeightForWidth(FirstRadioButton->sizePolicy().hasHeightForWidth());
        FirstRadioButton->setSizePolicy(sizePolicy1);
        FirstRadioButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setEnabled(false);
        label_11->setGeometry(QRect(20, 280, 531, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Nimbus Sans L"));
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setItalic(true);
        font2.setUnderline(false);
        font2.setWeight(9);
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("font: 75 italic 9pt \"Nimbus Sans L\";\n"
"color: rgb(109, 225, 67);"));
        groupBox_2 = new QGroupBox(TabInfo);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(630, 360, 561, 151));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setFont(font);
        groupBox_2->setAutoFillBackground(false);
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 75 Bold 10.5pt \"Nimbus Roman No9 L\";\n"
""));
        groupBox_2->setAlignment(Qt::AlignCenter);
        Info2 = new QTextEdit(groupBox_2);
        Info2->setObjectName(QString::fromUtf8("Info2"));
        Info2->setGeometry(QRect(70, 50, 51, 31));
        sizePolicy1.setHeightForWidth(Info2->sizePolicy().hasHeightForWidth());
        Info2->setSizePolicy(sizePolicy1);
        Info2->setFont(font);
        Info2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Info2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Info2->setReadOnly(true);
        InfoLabel4 = new QLabel(groupBox_2);
        InfoLabel4->setObjectName(QString::fromUtf8("InfoLabel4"));
        InfoLabel4->setEnabled(true);
        InfoLabel4->setGeometry(QRect(130, 30, 51, 17));
        sizePolicy1.setHeightForWidth(InfoLabel4->sizePolicy().hasHeightForWidth());
        InfoLabel4->setSizePolicy(sizePolicy1);
        InfoLabel4->setStyleSheet(QString::fromUtf8("font: 75 Bold 11pt \"Nimbus Roman No9 L\";"));
        InfoLabel4->setAlignment(Qt::AlignCenter);
        Info5 = new QTextEdit(groupBox_2);
        Info5->setObjectName(QString::fromUtf8("Info5"));
        Info5->setGeometry(QRect(450, 110, 101, 31));
        sizePolicy1.setHeightForWidth(Info5->sizePolicy().hasHeightForWidth());
        Info5->setSizePolicy(sizePolicy1);
        Info5->setFont(font);
        Info5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Info5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Info5->setReadOnly(true);
        Info3 = new QTextEdit(groupBox_2);
        Info3->setObjectName(QString::fromUtf8("Info3"));
        Info3->setGeometry(QRect(350, 110, 91, 31));
        sizePolicy1.setHeightForWidth(Info3->sizePolicy().hasHeightForWidth());
        Info3->setSizePolicy(sizePolicy1);
        Info3->setFont(font);
        Info3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Info3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Info3->setReadOnly(true);
        InfoLabel6 = new QLabel(groupBox_2);
        InfoLabel6->setObjectName(QString::fromUtf8("InfoLabel6"));
        InfoLabel6->setEnabled(true);
        InfoLabel6->setGeometry(QRect(250, 30, 131, 20));
        sizePolicy1.setHeightForWidth(InfoLabel6->sizePolicy().hasHeightForWidth());
        InfoLabel6->setSizePolicy(sizePolicy1);
        InfoLabel6->setStyleSheet(QString::fromUtf8("font: 75 Bold 11pt \"Nimbus Roman No9 L\";"));
        InfoLabel6->setAlignment(Qt::AlignCenter);
        Info8 = new QTextEdit(groupBox_2);
        Info8->setObjectName(QString::fromUtf8("Info8"));
        Info8->setGeometry(QRect(10, 110, 331, 31));
        sizePolicy1.setHeightForWidth(Info8->sizePolicy().hasHeightForWidth());
        Info8->setSizePolicy(sizePolicy1);
        Info8->setFont(font);
        Info8->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        Info8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Info8->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Info8->setReadOnly(true);
        InfoLabel2 = new QLabel(groupBox_2);
        InfoLabel2->setObjectName(QString::fromUtf8("InfoLabel2"));
        InfoLabel2->setEnabled(true);
        InfoLabel2->setGeometry(QRect(70, 30, 51, 17));
        sizePolicy1.setHeightForWidth(InfoLabel2->sizePolicy().hasHeightForWidth());
        InfoLabel2->setSizePolicy(sizePolicy1);
        InfoLabel2->setStyleSheet(QString::fromUtf8("font: 75 Bold 11pt \"Nimbus Roman No9 L\";"));
        InfoLabel2->setAlignment(Qt::AlignCenter);
        InfoLabel5 = new QLabel(groupBox_2);
        InfoLabel5->setObjectName(QString::fromUtf8("InfoLabel5"));
        InfoLabel5->setEnabled(true);
        InfoLabel5->setGeometry(QRect(450, 90, 91, 17));
        sizePolicy1.setHeightForWidth(InfoLabel5->sizePolicy().hasHeightForWidth());
        InfoLabel5->setSizePolicy(sizePolicy1);
        InfoLabel5->setStyleSheet(QString::fromUtf8("font: 75 Bold 11pt \"Nimbus Roman No9 L\";"));
        InfoLabel5->setAlignment(Qt::AlignCenter);
        InfoLabel1 = new QLabel(groupBox_2);
        InfoLabel1->setObjectName(QString::fromUtf8("InfoLabel1"));
        InfoLabel1->setEnabled(true);
        InfoLabel1->setGeometry(QRect(10, 30, 51, 17));
        sizePolicy1.setHeightForWidth(InfoLabel1->sizePolicy().hasHeightForWidth());
        InfoLabel1->setSizePolicy(sizePolicy1);
        InfoLabel1->setStyleSheet(QString::fromUtf8("font: 75 Bold 11pt \"Nimbus Roman No9 L\";"));
        InfoLabel1->setAlignment(Qt::AlignCenter);
        InfoLabel7 = new QLabel(groupBox_2);
        InfoLabel7->setObjectName(QString::fromUtf8("InfoLabel7"));
        InfoLabel7->setEnabled(true);
        InfoLabel7->setGeometry(QRect(190, 30, 51, 20));
        sizePolicy1.setHeightForWidth(InfoLabel7->sizePolicy().hasHeightForWidth());
        InfoLabel7->setSizePolicy(sizePolicy1);
        InfoLabel7->setStyleSheet(QString::fromUtf8("font: 75 Bold 11pt \"Nimbus Roman No9 L\";"));
        InfoLabel7->setAlignment(Qt::AlignCenter);
        Info4 = new QTextEdit(groupBox_2);
        Info4->setObjectName(QString::fromUtf8("Info4"));
        Info4->setGeometry(QRect(130, 50, 51, 31));
        sizePolicy1.setHeightForWidth(Info4->sizePolicy().hasHeightForWidth());
        Info4->setSizePolicy(sizePolicy1);
        Info4->setFont(font);
        Info4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Info4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Info4->setReadOnly(true);
        Info1 = new QTextEdit(groupBox_2);
        Info1->setObjectName(QString::fromUtf8("Info1"));
        Info1->setGeometry(QRect(10, 50, 51, 31));
        sizePolicy1.setHeightForWidth(Info1->sizePolicy().hasHeightForWidth());
        Info1->setSizePolicy(sizePolicy1);
        QPalette palette8;
        QLinearGradient gradient99(0, 0, 1, 1);
        gradient99.setSpread(QGradient::PadSpread);
        gradient99.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient99.setColorAt(0, QColor(255, 255, 255, 255));
        gradient99.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush138(gradient99);
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush138);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush118);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush118);
        QLinearGradient gradient100(0, 0, 1, 1);
        gradient100.setSpread(QGradient::PadSpread);
        gradient100.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient100.setColorAt(0, QColor(255, 255, 255, 255));
        gradient100.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush139(gradient100);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush139);
        QLinearGradient gradient101(0, 0, 1, 1);
        gradient101.setSpread(QGradient::PadSpread);
        gradient101.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient101.setColorAt(0, QColor(255, 255, 255, 255));
        gradient101.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush140(gradient101);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush140);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush118);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush118);
        QBrush brush141(QColor(0, 0, 0, 128));
        brush141.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush141);
#endif
        QLinearGradient gradient102(0, 0, 1, 1);
        gradient102.setSpread(QGradient::PadSpread);
        gradient102.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient102.setColorAt(0, QColor(255, 255, 255, 255));
        gradient102.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush142(gradient102);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush142);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush118);
        QBrush brush143(QColor(159, 159, 159, 255));
        brush143.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush143);
        QLinearGradient gradient103(0, 0, 1, 1);
        gradient103.setSpread(QGradient::PadSpread);
        gradient103.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient103.setColorAt(0, QColor(255, 255, 255, 255));
        gradient103.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush144(gradient103);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush144);
        QLinearGradient gradient104(0, 0, 1, 1);
        gradient104.setSpread(QGradient::PadSpread);
        gradient104.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient104.setColorAt(0, QColor(255, 255, 255, 255));
        gradient104.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush145(gradient104);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush145);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush118);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush118);
        QBrush brush146(QColor(0, 0, 0, 128));
        brush146.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush146);
#endif
        QLinearGradient gradient105(0, 0, 1, 1);
        gradient105.setSpread(QGradient::PadSpread);
        gradient105.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient105.setColorAt(0, QColor(255, 255, 255, 255));
        gradient105.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush147(gradient105);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush147);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush118);
        QBrush brush148(QColor(190, 190, 190, 255));
        brush148.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush148);
        QLinearGradient gradient106(0, 0, 1, 1);
        gradient106.setSpread(QGradient::PadSpread);
        gradient106.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient106.setColorAt(0, QColor(255, 255, 255, 255));
        gradient106.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush149(gradient106);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush149);
        QLinearGradient gradient107(0, 0, 1, 1);
        gradient107.setSpread(QGradient::PadSpread);
        gradient107.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient107.setColorAt(0, QColor(255, 255, 255, 255));
        gradient107.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush150(gradient107);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush150);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush118);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush118);
        QBrush brush151(QColor(0, 0, 0, 128));
        brush151.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush151);
#endif
        Info1->setPalette(palette8);
        Info1->setFont(font);
        Info1->setTabletTracking(false);
        Info1->setAutoFillBackground(true);
        Info1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Info1->setFrameShape(QFrame::StyledPanel);
        Info1->setFrameShadow(QFrame::Sunken);
        Info1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Info1->setReadOnly(true);
        Info1->setOverwriteMode(false);
        Info6 = new QTextEdit(groupBox_2);
        Info6->setObjectName(QString::fromUtf8("Info6"));
        Info6->setGeometry(QRect(250, 50, 131, 31));
        sizePolicy1.setHeightForWidth(Info6->sizePolicy().hasHeightForWidth());
        Info6->setSizePolicy(sizePolicy1);
        Info6->setFont(font);
        Info6->setContextMenuPolicy(Qt::DefaultContextMenu);
        Info6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Info6->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Info6->setReadOnly(true);
        InfoLabel3 = new QLabel(groupBox_2);
        InfoLabel3->setObjectName(QString::fromUtf8("InfoLabel3"));
        InfoLabel3->setEnabled(true);
        InfoLabel3->setGeometry(QRect(350, 90, 91, 17));
        sizePolicy1.setHeightForWidth(InfoLabel3->sizePolicy().hasHeightForWidth());
        InfoLabel3->setSizePolicy(sizePolicy1);
        InfoLabel3->setStyleSheet(QString::fromUtf8("font: 75 Bold 11pt \"Nimbus Roman No9 L\";"));
        InfoLabel3->setAlignment(Qt::AlignCenter);
        InfoLabel8 = new QLabel(groupBox_2);
        InfoLabel8->setObjectName(QString::fromUtf8("InfoLabel8"));
        InfoLabel8->setEnabled(true);
        InfoLabel8->setGeometry(QRect(10, 90, 331, 20));
        sizePolicy1.setHeightForWidth(InfoLabel8->sizePolicy().hasHeightForWidth());
        InfoLabel8->setSizePolicy(sizePolicy1);
        InfoLabel8->setStyleSheet(QString::fromUtf8("font: 75 Bold 11pt \"Nimbus Roman No9 L\";"));
        InfoLabel8->setAlignment(Qt::AlignCenter);
        Info7 = new QTextEdit(groupBox_2);
        Info7->setObjectName(QString::fromUtf8("Info7"));
        Info7->setGeometry(QRect(190, 50, 51, 31));
        sizePolicy1.setHeightForWidth(Info7->sizePolicy().hasHeightForWidth());
        Info7->setSizePolicy(sizePolicy1);
        Info7->setFont(font);
        Info7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Info7->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Info7->setReadOnly(true);
        TransactionDateTimeText = new QLabel(groupBox_2);
        TransactionDateTimeText->setObjectName(QString::fromUtf8("TransactionDateTimeText"));
        TransactionDateTimeText->setEnabled(true);
        TransactionDateTimeText->setGeometry(QRect(390, 30, 151, 17));
        sizePolicy1.setHeightForWidth(TransactionDateTimeText->sizePolicy().hasHeightForWidth());
        TransactionDateTimeText->setSizePolicy(sizePolicy1);
        TransactionDateTimeText->setStyleSheet(QString::fromUtf8("font: 75 Bold 11pt \"Nimbus Roman No9 L\";"));
        TransactionDateTimeText->setAlignment(Qt::AlignCenter);
        TransactionDateTime = new QDateTimeEdit(groupBox_2);
        TransactionDateTime->setObjectName(QString::fromUtf8("TransactionDateTime"));
        TransactionDateTime->setEnabled(true);
        TransactionDateTime->setGeometry(QRect(390, 50, 161, 31));
        sizePolicy1.setHeightForWidth(TransactionDateTime->sizePolicy().hasHeightForWidth());
        TransactionDateTime->setSizePolicy(sizePolicy1);
        TransactionDateTime->setFont(font);
        TransactionDateTime->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        TransactionDateTime->setAlignment(Qt::AlignCenter);
        TransactionDateTime->setReadOnly(true);
        line_3 = new QFrame(TabInfo);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(620, 340, 571, 21));
        sizePolicy1.setHeightForWidth(line_3->sizePolicy().hasHeightForWidth());
        line_3->setSizePolicy(sizePolicy1);
        line_3->setAutoFillBackground(false);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        GetInfoOutput = new QTextEdit(TabInfo);
        GetInfoOutput->setObjectName(QString::fromUtf8("GetInfoOutput"));
        GetInfoOutput->setGeometry(QRect(630, 540, 561, 171));
        sizePolicy1.setHeightForWidth(GetInfoOutput->sizePolicy().hasHeightForWidth());
        GetInfoOutput->setSizePolicy(sizePolicy1);
        GetInfoOutput->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(123, 255, 15);"));
        GetInfoOutput->setReadOnly(true);
        label_2 = new QLabel(TabInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1260, 70, 231, 211));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/rsz_1rsz_1kissclipart-intelligent-city-png-clipart-smart-city-2nd-intern-ec22b77c391cd6c1.png")));
        label_3 = new QLabel(TabInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1280, 280, 171, 181));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/rsz_kisspng-blockchain-vector-graphics-computer-icons-illustra-flvr-calculator-chasing-coins-5bf698394026119278574715428874812628.png")));
        label_4 = new QLabel(TabInfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1270, 460, 191, 91));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/rsz_cosmos-logo-white.png")));
        label_5 = new QLabel(TabInfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1270, 540, 191, 121));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/rsz_tendermint-logo-white.png")));
        tabWidget->addTab(TabInfo, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        GetBlockInfoButton = new QPushButton(tab);
        GetBlockInfoButton->setObjectName(QString::fromUtf8("GetBlockInfoButton"));
        GetBlockInfoButton->setGeometry(QRect(20, 10, 121, 31));
        sizePolicy1.setHeightForWidth(GetBlockInfoButton->sizePolicy().hasHeightForWidth());
        GetBlockInfoButton->setSizePolicy(sizePolicy1);
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush120);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush131);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush120);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush120);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush131);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush131);
        QBrush brush152(QColor(0, 0, 0, 128));
        brush152.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush152);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush120);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush131);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush120);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush120);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush131);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush131);
        QBrush brush153(QColor(0, 0, 0, 128));
        brush153.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush153);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush120);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush131);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush120);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush120);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush131);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush131);
        QBrush brush154(QColor(0, 0, 0, 128));
        brush154.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush154);
#endif
        GetBlockInfoButton->setPalette(palette9);
        GetBlockInfoButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 Bold 12pt \"Nimbus Roman No9 L\";\n"
"background-color: rgb(139, 255, 30);"));
        ChosenBlockInfoText = new QTextEdit(tab);
        ChosenBlockInfoText->setObjectName(QString::fromUtf8("ChosenBlockInfoText"));
        ChosenBlockInfoText->setGeometry(QRect(20, 250, 1111, 461));
        sizePolicy1.setHeightForWidth(ChosenBlockInfoText->sizePolicy().hasHeightForWidth());
        ChosenBlockInfoText->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Nimbus Sans L"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        ChosenBlockInfoText->setFont(font3);
        ChosenBlockInfoText->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        ChosenBlockInfoText->setReadOnly(true);
        BlockNumber = new QSpinBox(tab);
        BlockNumber->setObjectName(QString::fromUtf8("BlockNumber"));
        BlockNumber->setGeometry(QRect(150, 10, 92, 31));
        sizePolicy1.setHeightForWidth(BlockNumber->sizePolicy().hasHeightForWidth());
        BlockNumber->setSizePolicy(sizePolicy1);
        BlockNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        BlockNumber->setMinimum(1);
        BlockNumber->setMaximum(10000000);
        Nb_Tx_selected_label = new QLabel(tab);
        Nb_Tx_selected_label->setObjectName(QString::fromUtf8("Nb_Tx_selected_label"));
        Nb_Tx_selected_label->setEnabled(true);
        Nb_Tx_selected_label->setGeometry(QRect(430, 60, 121, 20));
        sizePolicy1.setHeightForWidth(Nb_Tx_selected_label->sizePolicy().hasHeightForWidth());
        Nb_Tx_selected_label->setSizePolicy(sizePolicy1);
        Nb_Tx_selected_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        Nb_Tx_selected_label->setAlignment(Qt::AlignCenter);
        Hash_selected_label = new QLabel(tab);
        Hash_selected_label->setObjectName(QString::fromUtf8("Hash_selected_label"));
        Hash_selected_label->setEnabled(true);
        Hash_selected_label->setGeometry(QRect(20, 180, 531, 17));
        sizePolicy1.setHeightForWidth(Hash_selected_label->sizePolicy().hasHeightForWidth());
        Hash_selected_label->setSizePolicy(sizePolicy1);
        Hash_selected_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        Hash_selected_label->setAlignment(Qt::AlignCenter);
        nbTx_selected = new QLineEdit(tab);
        nbTx_selected->setObjectName(QString::fromUtf8("nbTx_selected"));
        nbTx_selected->setGeometry(QRect(430, 80, 121, 31));
        sizePolicy1.setHeightForWidth(nbTx_selected->sizePolicy().hasHeightForWidth());
        nbTx_selected->setSizePolicy(sizePolicy1);
        nbTx_selected->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        nbTx_selected->setReadOnly(true);
        Hash_selected = new QTextEdit(tab);
        Hash_selected->setObjectName(QString::fromUtf8("Hash_selected"));
        Hash_selected->setEnabled(true);
        Hash_selected->setGeometry(QRect(20, 200, 531, 31));
        sizePolicy1.setHeightForWidth(Hash_selected->sizePolicy().hasHeightForWidth());
        Hash_selected->setSizePolicy(sizePolicy1);
        Hash_selected->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Hash_selected->setReadOnly(true);
        LastHash_selected_label = new QLabel(tab);
        LastHash_selected_label->setObjectName(QString::fromUtf8("LastHash_selected_label"));
        LastHash_selected_label->setEnabled(true);
        LastHash_selected_label->setGeometry(QRect(20, 120, 531, 17));
        sizePolicy1.setHeightForWidth(LastHash_selected_label->sizePolicy().hasHeightForWidth());
        LastHash_selected_label->setSizePolicy(sizePolicy1);
        LastHash_selected_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        LastHash_selected_label->setAlignment(Qt::AlignCenter);
        LastHash_selected = new QTextEdit(tab);
        LastHash_selected->setObjectName(QString::fromUtf8("LastHash_selected"));
        LastHash_selected->setEnabled(true);
        LastHash_selected->setGeometry(QRect(20, 140, 531, 31));
        sizePolicy1.setHeightForWidth(LastHash_selected->sizePolicy().hasHeightForWidth());
        LastHash_selected->setSizePolicy(sizePolicy1);
        LastHash_selected->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LastHash_selected->setReadOnly(true);
        TimeBlock_selected = new QLineEdit(tab);
        TimeBlock_selected->setObjectName(QString::fromUtf8("TimeBlock_selected"));
        TimeBlock_selected->setGeometry(QRect(20, 80, 261, 31));
        sizePolicy1.setHeightForWidth(TimeBlock_selected->sizePolicy().hasHeightForWidth());
        TimeBlock_selected->setSizePolicy(sizePolicy1);
        TimeBlock_selected->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        TimeBlock_selected->setReadOnly(true);
        BlockTime_selected_label = new QLabel(tab);
        BlockTime_selected_label->setObjectName(QString::fromUtf8("BlockTime_selected_label"));
        BlockTime_selected_label->setEnabled(true);
        BlockTime_selected_label->setGeometry(QRect(20, 60, 191, 17));
        sizePolicy1.setHeightForWidth(BlockTime_selected_label->sizePolicy().hasHeightForWidth());
        BlockTime_selected_label->setSizePolicy(sizePolicy1);
        BlockTime_selected_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        BlockTime_selected_label->setAlignment(Qt::AlignCenter);
        QuitButtonTab3 = new QPushButton(tab);
        QuitButtonTab3->setObjectName(QString::fromUtf8("QuitButtonTab3"));
        QuitButtonTab3->setGeometry(QRect(1280, 670, 141, 41));
        sizePolicy1.setHeightForWidth(QuitButtonTab3->sizePolicy().hasHeightForWidth());
        QuitButtonTab3->setSizePolicy(sizePolicy1);
        QPalette palette10;
        QLinearGradient gradient108(0, 0, 1, 1);
        gradient108.setSpread(QGradient::PadSpread);
        gradient108.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient108.setColorAt(0, QColor(255, 255, 255, 255));
        gradient108.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush155(gradient108);
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush155);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush86);
        QLinearGradient gradient109(0, 0, 1, 1);
        gradient109.setSpread(QGradient::PadSpread);
        gradient109.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient109.setColorAt(0, QColor(255, 255, 255, 255));
        gradient109.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush156(gradient109);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush156);
        QLinearGradient gradient110(0, 0, 1, 1);
        gradient110.setSpread(QGradient::PadSpread);
        gradient110.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient110.setColorAt(0, QColor(255, 255, 255, 255));
        gradient110.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush157(gradient110);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush157);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush86);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush86);
        QBrush brush158(QColor(0, 0, 0, 128));
        brush158.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush158);
#endif
        QLinearGradient gradient111(0, 0, 1, 1);
        gradient111.setSpread(QGradient::PadSpread);
        gradient111.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient111.setColorAt(0, QColor(255, 255, 255, 255));
        gradient111.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush159(gradient111);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush159);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush86);
        QLinearGradient gradient112(0, 0, 1, 1);
        gradient112.setSpread(QGradient::PadSpread);
        gradient112.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient112.setColorAt(0, QColor(255, 255, 255, 255));
        gradient112.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush160(gradient112);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush160);
        QLinearGradient gradient113(0, 0, 1, 1);
        gradient113.setSpread(QGradient::PadSpread);
        gradient113.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient113.setColorAt(0, QColor(255, 255, 255, 255));
        gradient113.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush161(gradient113);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush161);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush86);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush86);
        QBrush brush162(QColor(0, 0, 0, 128));
        brush162.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush162);
#endif
        QLinearGradient gradient114(0, 0, 1, 1);
        gradient114.setSpread(QGradient::PadSpread);
        gradient114.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient114.setColorAt(0, QColor(255, 255, 255, 255));
        gradient114.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush163(gradient114);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush163);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush86);
        QLinearGradient gradient115(0, 0, 1, 1);
        gradient115.setSpread(QGradient::PadSpread);
        gradient115.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient115.setColorAt(0, QColor(255, 255, 255, 255));
        gradient115.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush164(gradient115);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush164);
        QLinearGradient gradient116(0, 0, 1, 1);
        gradient116.setSpread(QGradient::PadSpread);
        gradient116.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient116.setColorAt(0, QColor(255, 255, 255, 255));
        gradient116.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush165(gradient116);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush165);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush86);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush86);
        QBrush brush166(QColor(0, 0, 0, 128));
        brush166.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush166);
#endif
        QuitButtonTab3->setPalette(palette10);
        QuitButtonTab3->setMouseTracking(false);
        QuitButtonTab3->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 40, 40);font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(1220, 20, 271, 41));
        label_10->setStyleSheet(QString::fromUtf8("font: 75 Bold 20pt \"Nimbus Roman No9 L\";\n"
"color: rgb(255, 255, 255);"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(1250, 460, 191, 91));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/rsz_cosmos-logo-white.png")));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1260, 280, 171, 181));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/rsz_kisspng-blockchain-vector-graphics-computer-icons-illustra-flvr-calculator-chasing-coins-5bf698394026119278574715428874812628.png")));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(1240, 70, 231, 211));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/rsz_1rsz_1kissclipart-intelligent-city-png-clipart-smart-city-2nd-intern-ec22b77c391cd6c1.png")));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(1250, 540, 191, 121));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/rsz_tendermint-logo-white.png")));
        tabWidget->addTab(tab, QString());
        tabParameters = new QWidget();
        tabParameters->setObjectName(QString::fromUtf8("tabParameters"));
        groupBox_4 = new QGroupBox(tabParameters);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 30, 281, 171));
        groupBox_4->setStyleSheet(QString::fromUtf8("font: 75 Bold 12pt \"Nimbus Roman No9 L\";\n"
""));
        groupBox_4->setAlignment(Qt::AlignCenter);
        filteredInfo1 = new QLineEdit(groupBox_4);
        filteredInfo1->setObjectName(QString::fromUtf8("filteredInfo1"));
        filteredInfo1->setGeometry(QRect(11, 31, 116, 25));
        filteredInfo1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        filteredInfo3 = new QLineEdit(groupBox_4);
        filteredInfo3->setObjectName(QString::fromUtf8("filteredInfo3"));
        filteredInfo3->setGeometry(QRect(11, 61, 116, 25));
        filteredInfo3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        filteredInfo2 = new QLineEdit(groupBox_4);
        filteredInfo2->setObjectName(QString::fromUtf8("filteredInfo2"));
        filteredInfo2->setGeometry(QRect(133, 31, 117, 25));
        filteredInfo2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        filteredInfo4 = new QLineEdit(groupBox_4);
        filteredInfo4->setObjectName(QString::fromUtf8("filteredInfo4"));
        filteredInfo4->setGeometry(QRect(133, 61, 117, 25));
        filteredInfo4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        filteredInfo5 = new QLineEdit(groupBox_4);
        filteredInfo5->setObjectName(QString::fromUtf8("filteredInfo5"));
        filteredInfo5->setGeometry(QRect(11, 91, 116, 25));
        filteredInfo5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        filteredInfo6 = new QLineEdit(groupBox_4);
        filteredInfo6->setObjectName(QString::fromUtf8("filteredInfo6"));
        filteredInfo6->setGeometry(QRect(133, 91, 117, 25));
        filteredInfo6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        CaseSensitiveCheckBox = new QCheckBox(groupBox_4);
        CaseSensitiveCheckBox->setObjectName(QString::fromUtf8("CaseSensitiveCheckBox"));
        CaseSensitiveCheckBox->setGeometry(QRect(70, 130, 131, 23));
        CaseSensitiveCheckBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        CaseSensitiveCheckBox->setChecked(true);
        groupBox_5 = new QGroupBox(tabParameters);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 220, 721, 481));
        groupBox_5->setStyleSheet(QString::fromUtf8("font: 75 Bold 12pt \"Nimbus Roman No9 L\";\n"
""));
        groupBox_5->setAlignment(Qt::AlignCenter);
        TimerPeriod = new QSpinBox(groupBox_5);
        TimerPeriod->setObjectName(QString::fromUtf8("TimerPeriod"));
        TimerPeriod->setGeometry(QRect(260, 30, 57, 26));
        TimerPeriod->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        TimerPeriod->setMinimum(3);
        TimerPeriod->setMaximum(30);
        TimerPeriod->setSingleStep(1);
        TimerPeriod->setValue(5);
        layoutWidget = new QWidget(groupBox_5);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 239, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        TimerPeriodLabel = new QLabel(layoutWidget);
        TimerPeriodLabel->setObjectName(QString::fromUtf8("TimerPeriodLabel"));
        TimerPeriodLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(TimerPeriodLabel);

        BlockInfoBlinkingButton = new QCheckBox(groupBox_5);
        BlockInfoBlinkingButton->setObjectName(QString::fromUtf8("BlockInfoBlinkingButton"));
        BlockInfoBlinkingButton->setGeometry(QRect(20, 70, 161, 23));
        BlockInfoBlinkingButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        BlockInfoBlinkingButton->setChecked(true);
        groupBox_9 = new QGroupBox(groupBox_5);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(20, 120, 681, 341));
        groupBox_9->setStyleSheet(QString::fromUtf8("font: 75 Bold 12pt \"Nimbus Roman No9 L\";\n"
""));
        groupBox_9->setAlignment(Qt::AlignCenter);
        PortNumberLabel = new QLabel(groupBox_9);
        PortNumberLabel->setObjectName(QString::fromUtf8("PortNumberLabel"));
        PortNumberLabel->setGeometry(QRect(10, 30, 101, 26));
        PortNumber = new QSpinBox(groupBox_9);
        PortNumber->setObjectName(QString::fromUtf8("PortNumber"));
        PortNumber->setGeometry(QRect(110, 30, 91, 26));
        PortNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        PortNumber->setMinimum(1);
        PortNumber->setMaximum(1000000);
        PortNumber->setSingleStep(1);
        PortNumber->setValue(26657);
        HistoricPath = new QLineEdit(groupBox_9);
        HistoricPath->setObjectName(QString::fromUtf8("HistoricPath"));
        HistoricPath->setGeometry(QRect(110, 150, 531, 25));
        sizePolicy1.setHeightForWidth(HistoricPath->sizePolicy().hasHeightForWidth());
        HistoricPath->setSizePolicy(sizePolicy1);
        HistoricPath->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        HistoricPath->setReadOnly(false);
        HistoricPathLabel = new QLabel(groupBox_9);
        HistoricPathLabel->setObjectName(QString::fromUtf8("HistoricPathLabel"));
        HistoricPathLabel->setEnabled(true);
        HistoricPathLabel->setGeometry(QRect(0, 150, 111, 21));
        sizePolicy1.setHeightForWidth(HistoricPathLabel->sizePolicy().hasHeightForWidth());
        HistoricPathLabel->setSizePolicy(sizePolicy1);
        HistoricPathLabel->setAlignment(Qt::AlignCenter);
        StopBlockchainCheckBox = new QCheckBox(groupBox_9);
        StopBlockchainCheckBox->setObjectName(QString::fromUtf8("StopBlockchainCheckBox"));
        StopBlockchainCheckBox->setGeometry(QRect(10, 60, 251, 23));
        StopBlockchainCheckBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        StopBlockchainCheckBox->setChecked(false);
        EmptyTransactionsCheckBox = new QCheckBox(groupBox_9);
        EmptyTransactionsCheckBox->setObjectName(QString::fromUtf8("EmptyTransactionsCheckBox"));
        EmptyTransactionsCheckBox->setGeometry(QRect(10, 100, 251, 23));
        EmptyTransactionsCheckBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        EmptyTransactionsCheckBox->setChecked(false);
        GaetwayModeCheckBox = new QCheckBox(groupBox_9);
        GaetwayModeCheckBox->setObjectName(QString::fromUtf8("GaetwayModeCheckBox"));
        GaetwayModeCheckBox->setGeometry(QRect(10, 190, 251, 23));
        GaetwayModeCheckBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        GaetwayModeCheckBox->setChecked(false);
        DefaultConfigButton = new QPushButton(groupBox_9);
        DefaultConfigButton->setObjectName(QString::fromUtf8("DefaultConfigButton"));
        DefaultConfigButton->setEnabled(true);
        DefaultConfigButton->setGeometry(QRect(190, 270, 151, 31));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush120);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush131);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush120);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush120);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush131);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush131);
        QBrush brush167(QColor(0, 0, 0, 128));
        brush167.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush167);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush120);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush131);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush120);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush120);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush131);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush131);
        QBrush brush168(QColor(0, 0, 0, 128));
        brush168.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush168);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush120);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush131);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush120);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush120);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush131);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush131);
        QBrush brush169(QColor(0, 0, 0, 128));
        brush169.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush169);
#endif
        DefaultConfigButton->setPalette(palette11);
        DefaultConfigButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 Bold 12pt \"Nimbus Roman No9 L\";\n"
"background-color: rgb(139, 255, 30);"));
        SaveConfigButton = new QPushButton(groupBox_9);
        SaveConfigButton->setObjectName(QString::fromUtf8("SaveConfigButton"));
        SaveConfigButton->setEnabled(false);
        SaveConfigButton->setGeometry(QRect(10, 270, 151, 31));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush120);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush131);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush120);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush120);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush131);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush131);
        QBrush brush170(QColor(0, 0, 0, 128));
        brush170.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush170);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush120);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush131);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush120);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush120);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush131);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush131);
        QBrush brush171(QColor(0, 0, 0, 128));
        brush171.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush171);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush120);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush131);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush120);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush120);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush131);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush131);
        QBrush brush172(QColor(0, 0, 0, 128));
        brush172.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush172);
#endif
        SaveConfigButton->setPalette(palette12);
        SaveConfigButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 Bold 12pt \"Nimbus Roman No9 L\";\n"
"background-color: rgb(139, 255, 30);"));
        QuitButtonTab4 = new QPushButton(tabParameters);
        QuitButtonTab4->setObjectName(QString::fromUtf8("QuitButtonTab4"));
        QuitButtonTab4->setGeometry(QRect(1270, 660, 141, 41));
        sizePolicy1.setHeightForWidth(QuitButtonTab4->sizePolicy().hasHeightForWidth());
        QuitButtonTab4->setSizePolicy(sizePolicy1);
        QPalette palette13;
        QLinearGradient gradient117(0, 0, 1, 1);
        gradient117.setSpread(QGradient::PadSpread);
        gradient117.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient117.setColorAt(0, QColor(255, 255, 255, 255));
        gradient117.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush173(gradient117);
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush173);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush86);
        QLinearGradient gradient118(0, 0, 1, 1);
        gradient118.setSpread(QGradient::PadSpread);
        gradient118.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient118.setColorAt(0, QColor(255, 255, 255, 255));
        gradient118.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush174(gradient118);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush174);
        QLinearGradient gradient119(0, 0, 1, 1);
        gradient119.setSpread(QGradient::PadSpread);
        gradient119.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient119.setColorAt(0, QColor(255, 255, 255, 255));
        gradient119.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush175(gradient119);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush175);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush86);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush86);
        QBrush brush176(QColor(0, 0, 0, 128));
        brush176.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush176);
#endif
        QLinearGradient gradient120(0, 0, 1, 1);
        gradient120.setSpread(QGradient::PadSpread);
        gradient120.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient120.setColorAt(0, QColor(255, 255, 255, 255));
        gradient120.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush177(gradient120);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush177);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush86);
        QLinearGradient gradient121(0, 0, 1, 1);
        gradient121.setSpread(QGradient::PadSpread);
        gradient121.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient121.setColorAt(0, QColor(255, 255, 255, 255));
        gradient121.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush178(gradient121);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush178);
        QLinearGradient gradient122(0, 0, 1, 1);
        gradient122.setSpread(QGradient::PadSpread);
        gradient122.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient122.setColorAt(0, QColor(255, 255, 255, 255));
        gradient122.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush179(gradient122);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush179);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush86);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush86);
        QBrush brush180(QColor(0, 0, 0, 128));
        brush180.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush180);
#endif
        QLinearGradient gradient123(0, 0, 1, 1);
        gradient123.setSpread(QGradient::PadSpread);
        gradient123.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient123.setColorAt(0, QColor(255, 255, 255, 255));
        gradient123.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush181(gradient123);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush181);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush86);
        QLinearGradient gradient124(0, 0, 1, 1);
        gradient124.setSpread(QGradient::PadSpread);
        gradient124.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient124.setColorAt(0, QColor(255, 255, 255, 255));
        gradient124.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush182(gradient124);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush182);
        QLinearGradient gradient125(0, 0, 1, 1);
        gradient125.setSpread(QGradient::PadSpread);
        gradient125.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient125.setColorAt(0, QColor(255, 255, 255, 255));
        gradient125.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush183(gradient125);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush183);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush86);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush86);
        QBrush brush184(QColor(0, 0, 0, 128));
        brush184.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush184);
#endif
        QuitButtonTab4->setPalette(palette13);
        QuitButtonTab4->setMouseTracking(false);
        QuitButtonTab4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 40, 40);font: 75 Bold 12pt \"Nimbus Roman No9 L\";"));
        label_16 = new QLabel(tabParameters);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(1250, 280, 171, 181));
        label_16->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/rsz_kisspng-blockchain-vector-graphics-computer-icons-illustra-flvr-calculator-chasing-coins-5bf698394026119278574715428874812628.png")));
        label_17 = new QLabel(tabParameters);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(1210, 20, 271, 41));
        label_17->setStyleSheet(QString::fromUtf8("font: 75 Bold 20pt \"Nimbus Roman No9 L\";\n"
"color: rgb(255, 255, 255);"));
        label_18 = new QLabel(tabParameters);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(1230, 70, 231, 211));
        label_18->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/rsz_1rsz_1kissclipart-intelligent-city-png-clipart-smart-city-2nd-intern-ec22b77c391cd6c1.png")));
        label_19 = new QLabel(tabParameters);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(1240, 460, 191, 91));
        label_19->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/rsz_cosmos-logo-white.png")));
        label_20 = new QLabel(tabParameters);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(1240, 540, 191, 121));
        label_20->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/rsz_tendermint-logo-white.png")));
        tabWidget->addTab(tabParameters, QString());

        horizontalLayout->addWidget(tabWidget);

        BlockChainViewer->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BlockChainViewer);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1538, 20));
        menusmartcity = new QMenu(menuBar);
        menusmartcity->setObjectName(QString::fromUtf8("menusmartcity"));
        BlockChainViewer->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BlockChainViewer);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        BlockChainViewer->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BlockChainViewer);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        BlockChainViewer->setStatusBar(statusBar);

        menuBar->addAction(menusmartcity->menuAction());

        retranslateUi(BlockChainViewer);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(BlockChainViewer);
    } // setupUi

    void retranslateUi(QMainWindow *BlockChainViewer)
    {
        BlockChainViewer->setWindowTitle(QApplication::translate("BlockChainViewer", "BlockChainViewer", nullptr));
        lblCount_3->setText(QApplication::translate("BlockChainViewer", "Node Type", nullptr));
        NodeTypeSelector->setItemText(0, QApplication::translate("BlockChainViewer", "Primary", nullptr));
        NodeTypeSelector->setItemText(1, QApplication::translate("BlockChainViewer", "Secondary", nullptr));

        NodeTypeSelector->setCurrentText(QApplication::translate("BlockChainViewer", "Primary", nullptr));
        AccountNameLabel->setText(QApplication::translate("BlockChainViewer", "Account name", nullptr));
        NodeNameLabel->setText(QApplication::translate("BlockChainViewer", "Node Name", nullptr));
        AccountBalanceLabel->setText(QApplication::translate("BlockChainViewer", "Account balance", nullptr));
        ChainIDLabel->setText(QApplication::translate("BlockChainViewer", "Chain ID", nullptr));
        PasswordLabel->setText(QApplication::translate("BlockChainViewer", "Enter password", nullptr));
        PasswordLabel_2->setText(QApplication::translate("BlockChainViewer", "Rewrite password", nullptr));
        Creation_Button->setText(QApplication::translate("BlockChainViewer", "Creation", nullptr));
        btnHello_2->setText(QApplication::translate("BlockChainViewer", "Dummy", nullptr));
        pushButton->setText(QApplication::translate("BlockChainViewer", "Launch Data Collection", nullptr));
        ResetButton->setText(QApplication::translate("BlockChainViewer", "Reset Node Info", nullptr));
        InfoLabel->setText(QApplication::translate("BlockChainViewer", "Console Output", nullptr));
        ConsoleOutputLabel->setText(QApplication::translate("BlockChainViewer", "Information", nullptr));
        QuitButtonTab1->setText(QApplication::translate("BlockChainViewer", "Quit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(TabInit), QApplication::translate("BlockChainViewer", "Tab 1", nullptr));
        groupBox->setTitle(QApplication::translate("BlockChainViewer", "Blockchain Information", nullptr));
        TransactionsCounterLabel->setText(QApplication::translate("BlockChainViewer", "Transactions counter", nullptr));
        FirstTransaction->setText(QApplication::translate("BlockChainViewer", "First Transaction Date", nullptr));
        LatestTransaction->setText(QApplication::translate("BlockChainViewer", "Latest Transaction Date", nullptr));
        groupBox_6->setTitle(QApplication::translate("BlockChainViewer", "Previous block", nullptr));
        LastHash_before_label->setText(QApplication::translate("BlockChainViewer", "Last Hash", nullptr));
        LastHash_before->setHtml(QApplication::translate("BlockChainViewer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Nimbus Roman No9 L'; font-size:10.5pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p></body></html>", nullptr));
        Hash_before_label->setText(QApplication::translate("BlockChainViewer", "Hash", nullptr));
        Nb_Tx_before_label->setText(QApplication::translate("BlockChainViewer", "Num Txs:", nullptr));
        BlockTime_before_label->setText(QApplication::translate("BlockChainViewer", "Block time:", nullptr));
        PreviousBlockNumberLabel->setText(QApplication::translate("BlockChainViewer", "Number:", nullptr));
        groupBox_7->setTitle(QApplication::translate("BlockChainViewer", "Current block", nullptr));
        LastHash_current_label->setText(QApplication::translate("BlockChainViewer", "Last Hash", nullptr));
        Hash_current_label->setText(QApplication::translate("BlockChainViewer", "Hash", nullptr));
        Hash_current->setHtml(QApplication::translate("BlockChainViewer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Nimbus Roman No9 L'; font-size:10.5pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p></body></html>", nullptr));
        Nb_Tx_current_label->setText(QApplication::translate("BlockChainViewer", "Num Txs:", nullptr));
        BlockTime_current_label->setText(QApplication::translate("BlockChainViewer", "Block time:", nullptr));
        CurrentBlockNumberLabel->setText(QApplication::translate("BlockChainViewer", "Number:", nullptr));
        LastHash_current->setHtml(QApplication::translate("BlockChainViewer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Nimbus Roman No9 L'; font-size:10.5pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p></body></html>", nullptr));
        image->setText(QString());
        QuitButtonTab2->setText(QApplication::translate("BlockChainViewer", "Quit", nullptr));
        StartStopGatewayButton->setText(QString());
        StopStartLabel->setText(QApplication::translate("BlockChainViewer", "Stop blocks data display", nullptr));
        StartStopButton->setText(QString());
        StopStartGatewayLabel->setText(QApplication::translate("BlockChainViewer", "Start gateway mode", nullptr));
        label->setText(QApplication::translate("BlockChainViewer", "Smart City Application", nullptr));
        groupBox_3->setTitle(QApplication::translate("BlockChainViewer", "Choose transaction date and hour", nullptr));
        GetInfoButton->setText(QApplication::translate("BlockChainViewer", "Get Information", nullptr));
        LastRadioButton->setText(QApplication::translate("BlockChainViewer", "Last", nullptr));
        SelectedRadioButton->setText(QApplication::translate("BlockChainViewer", "Selected", nullptr));
        FirstRadioButton->setText(QApplication::translate("BlockChainViewer", "First", nullptr));
        label_11->setText(QApplication::translate("BlockChainViewer", "* Please look at the first transaction date (blockchain information) to choose your date", nullptr));
        groupBox_2->setTitle(QApplication::translate("BlockChainViewer", "Transaction Information", nullptr));
        Info2->setHtml(QApplication::translate("BlockChainViewer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Nimbus Roman No9 L'; font-size:10.5pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Serif'; font-size:9pt; font-weight:400;\"><br /></p></body></html>", nullptr));
        InfoLabel4->setText(QString());
        Info5->setHtml(QApplication::translate("BlockChainViewer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Nimbus Roman No9 L'; font-size:10.5pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Serif'; font-size:9pt; font-weight:400;\"><br /></p></body></html>", nullptr));
        Info3->setHtml(QApplication::translate("BlockChainViewer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Nimbus Roman No9 L'; font-size:10.5pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Serif'; font-size:9pt; font-weight:400;\"><br /></p></body></html>", nullptr));
        InfoLabel6->setText(QString());
        InfoLabel2->setText(QString());
        InfoLabel5->setText(QString());
        InfoLabel1->setText(QString());
        InfoLabel7->setText(QString());
        Info4->setHtml(QApplication::translate("BlockChainViewer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Nimbus Roman No9 L'; font-size:10.5pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Serif'; font-size:9pt; font-weight:400;\"><br /></p></body></html>", nullptr));
        Info1->setHtml(QApplication::translate("BlockChainViewer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Nimbus Roman No9 L'; font-size:10.5pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Serif'; font-size:9pt; font-weight:400;\"><br /></p></body></html>", nullptr));
        Info6->setHtml(QApplication::translate("BlockChainViewer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Nimbus Roman No9 L'; font-size:10.5pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Serif'; font-size:9pt; font-weight:400;\"><br /></p></body></html>", nullptr));
        InfoLabel3->setText(QString());
        InfoLabel8->setText(QString());
        Info7->setHtml(QApplication::translate("BlockChainViewer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Nimbus Roman No9 L'; font-size:10.5pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Serif'; font-size:9pt; font-weight:400;\"><br /></p></body></html>", nullptr));
        TransactionDateTimeText->setText(QApplication::translate("BlockChainViewer", "Date and Time", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(TabInfo), QApplication::translate("BlockChainViewer", "Tab 2", nullptr));
        GetBlockInfoButton->setText(QApplication::translate("BlockChainViewer", "GetBlockInfo", nullptr));
        Nb_Tx_selected_label->setText(QApplication::translate("BlockChainViewer", "Num Txs:", nullptr));
        Hash_selected_label->setText(QApplication::translate("BlockChainViewer", "Hash", nullptr));
        LastHash_selected_label->setText(QApplication::translate("BlockChainViewer", "Last Hash", nullptr));
        BlockTime_selected_label->setText(QApplication::translate("BlockChainViewer", "Block time:", nullptr));
        QuitButtonTab3->setText(QApplication::translate("BlockChainViewer", "Quit", nullptr));
        label_10->setText(QApplication::translate("BlockChainViewer", "Smart City Application", nullptr));
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("BlockChainViewer", "Page", nullptr));
        groupBox_4->setTitle(QApplication::translate("BlockChainViewer", "Fields to be filtered", nullptr));
        filteredInfo1->setText(QString());
        filteredInfo3->setText(QString());
        filteredInfo2->setText(QString());
        filteredInfo4->setText(QString());
        filteredInfo5->setText(QString());
        filteredInfo6->setText(QString());
        CaseSensitiveCheckBox->setText(QApplication::translate("BlockChainViewer", "Case sensitive", nullptr));
        groupBox_5->setTitle(QApplication::translate("BlockChainViewer", "Blockchain information", nullptr));
        TimerPeriodLabel->setText(QApplication::translate("BlockChainViewer", "BlockChain info period (s)", nullptr));
        BlockInfoBlinkingButton->setText(QApplication::translate("BlockChainViewer", "Blocks info blinking", nullptr));
        groupBox_9->setTitle(QApplication::translate("BlockChainViewer", "Advanced settings", nullptr));
        PortNumberLabel->setText(QApplication::translate("BlockChainViewer", "Port number", nullptr));
        HistoricPath->setText(QApplication::translate("BlockChainViewer", "/root/go/src/github.com/hussein1571/smartcity/n1.txt", nullptr));
        HistoricPathLabel->setText(QApplication::translate("BlockChainViewer", "Historic path:", nullptr));
        StopBlockchainCheckBox->setText(QApplication::translate("BlockChainViewer", "Stop blockchain when quitting", nullptr));
        EmptyTransactionsCheckBox->setText(QApplication::translate("BlockChainViewer", "Empty transaction when quitting", nullptr));
        GaetwayModeCheckBox->setText(QApplication::translate("BlockChainViewer", "Use tool as a gateway", nullptr));
        DefaultConfigButton->setText(QApplication::translate("BlockChainViewer", "Back to default", nullptr));
        SaveConfigButton->setText(QApplication::translate("BlockChainViewer", "Save", nullptr));
        QuitButtonTab4->setText(QApplication::translate("BlockChainViewer", "Quit", nullptr));
        label_16->setText(QString());
        label_17->setText(QApplication::translate("BlockChainViewer", "Smart City Application", nullptr));
        label_18->setText(QString());
        label_19->setText(QString());
        label_20->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabParameters), QApplication::translate("BlockChainViewer", "Page", nullptr));
        menusmartcity->setTitle(QApplication::translate("BlockChainViewer", "smartcity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BlockChainViewer: public Ui_BlockChainViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKCHAINVIEWER_H
