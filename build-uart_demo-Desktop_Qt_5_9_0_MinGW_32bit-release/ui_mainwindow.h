/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QComboBox *comboBox_parity;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_7;
    QComboBox *comboBox_flowBit;
    QPushButton *btn_refreshCOM;
    QComboBox *comboBox_dataBits;
    QLabel *label_2;
    QComboBox *comboBox_serialPort;
    QComboBox *comboBox_baudRate;
    QComboBox *comboBox_stopBit;
    QPushButton *btn_openConsole;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *btn_clearRecv;
    QCheckBox *checkBoxHexReceive;
    QLabel *label_6;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBoxHexSend;
    QPushButton *btn_clearSend;
    QGroupBox *groupBox_5;
    QTextEdit *textEdit_recv;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit_send;
    QPushButton *btn_send;
    QGroupBox *groupBox_6;
    QPushButton *btn_mutilTPMS;
    QLabel *lblMouseEventGlobalPos;
    QLabel *lblMouseEventETlPos;
    QTabWidget *tabWidget_AIlink_PT;
    QWidget *tab;
    QGroupBox *groupBox_7;
    QTextEdit *textEdit_Name;
    QComboBox *comboBox_NameMacLen;
    QPushButton *btn_SetBleName;
    QLabel *label_BleName;
    QPushButton *btn_reflash_BleName;
    QGroupBox *groupBox_8;
    QTextEdit *textEdit_Name_2;
    QComboBox *comboBox_NameMacLen_2;
    QPushButton *btn_ReadMacAddr;
    QLabel *label_BleName_2;
    QPushButton *btn_reflash_BleName_2;
    QGroupBox *groupBox_9;
    QTextEdit *textEdit_Name_3;
    QComboBox *comboBox_NameMacLen_3;
    QPushButton *btn_SetBleName_3;
    QLabel *label_BleName_3;
    QPushButton *btn_reflash_BleName_3;
    QGroupBox *groupBox_10;
    QTextEdit *textEdit_Name_4;
    QComboBox *comboBox_NameMacLen_4;
    QPushButton *btn_SetBleName_4;
    QLabel *label_BleName_4;
    QPushButton *btn_reflash_BleName_4;
    QGroupBox *groupBox_11;
    QTextEdit *textEdit_Name_5;
    QComboBox *comboBox_NameMacLen_5;
    QPushButton *btn_SetBleName_5;
    QLabel *label_BleName_5;
    QPushButton *btn_reflash_BleName_5;
    QGroupBox *groupBox_12;
    QTextEdit *textEdit_Name_6;
    QComboBox *comboBox_NameMacLen_6;
    QPushButton *btn_SetBleName_6;
    QLabel *label_BleName_6;
    QPushButton *btn_reflash_BleName_6;
    QWidget *tab_4;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_5;
    QWidget *tab_6;
    QWidget *tab_7;
    QGroupBox *groupBox_FineAiLinkPT;
    QTextEdit *textEdit_FineTXT;
    QPushButton *btn_FineAilinkPT_F;
    QPushButton *btn_FineAilinkPT_B;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1583, 985);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 171, 421));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        comboBox_parity = new QComboBox(groupBox);
        comboBox_parity->setObjectName(QStringLiteral("comboBox_parity"));

        gridLayout->addWidget(comboBox_parity, 3, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 5, 0, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        comboBox_flowBit = new QComboBox(groupBox);
        comboBox_flowBit->setObjectName(QStringLiteral("comboBox_flowBit"));

        gridLayout->addWidget(comboBox_flowBit, 5, 1, 1, 1);

        btn_refreshCOM = new QPushButton(groupBox);
        btn_refreshCOM->setObjectName(QStringLiteral("btn_refreshCOM"));

        gridLayout->addWidget(btn_refreshCOM, 6, 1, 1, 1);

        comboBox_dataBits = new QComboBox(groupBox);
        comboBox_dataBits->setObjectName(QStringLiteral("comboBox_dataBits"));

        gridLayout->addWidget(comboBox_dataBits, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        comboBox_serialPort = new QComboBox(groupBox);
        comboBox_serialPort->setObjectName(QStringLiteral("comboBox_serialPort"));

        gridLayout->addWidget(comboBox_serialPort, 0, 1, 1, 1);

        comboBox_baudRate = new QComboBox(groupBox);
        comboBox_baudRate->setObjectName(QStringLiteral("comboBox_baudRate"));

        gridLayout->addWidget(comboBox_baudRate, 1, 1, 1, 1);

        comboBox_stopBit = new QComboBox(groupBox);
        comboBox_stopBit->setObjectName(QStringLiteral("comboBox_stopBit"));

        gridLayout->addWidget(comboBox_stopBit, 4, 1, 1, 1);

        btn_openConsole = new QPushButton(groupBox);
        btn_openConsole->setObjectName(QStringLiteral("btn_openConsole"));

        gridLayout->addWidget(btn_openConsole, 7, 0, 1, 2);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        btn_clearRecv = new QPushButton(groupBox_2);
        btn_clearRecv->setObjectName(QStringLiteral("btn_clearRecv"));

        gridLayout_2->addWidget(btn_clearRecv, 0, 1, 1, 1);

        checkBoxHexReceive = new QCheckBox(groupBox_2);
        checkBoxHexReceive->setObjectName(QStringLiteral("checkBoxHexReceive"));
        checkBoxHexReceive->setChecked(true);

        gridLayout_2->addWidget(checkBoxHexReceive, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 8, 0, 1, 2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        checkBoxHexSend = new QCheckBox(groupBox_3);
        checkBoxHexSend->setObjectName(QStringLiteral("checkBoxHexSend"));
        checkBoxHexSend->setChecked(true);

        gridLayout_3->addWidget(checkBoxHexSend, 0, 0, 1, 1);

        btn_clearSend = new QPushButton(groupBox_3);
        btn_clearSend->setObjectName(QStringLiteral("btn_clearSend"));

        gridLayout_3->addWidget(btn_clearSend, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox_3, 9, 0, 1, 2);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(190, 30, 461, 411));
        textEdit_recv = new QTextEdit(groupBox_5);
        textEdit_recv->setObjectName(QStringLiteral("textEdit_recv"));
        textEdit_recv->setGeometry(QRect(20, 10, 431, 331));
        groupBox_4 = new QGroupBox(groupBox_5);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 350, 441, 51));
        horizontalLayout = new QHBoxLayout(groupBox_4);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textEdit_send = new QTextEdit(groupBox_4);
        textEdit_send->setObjectName(QStringLiteral("textEdit_send"));

        horizontalLayout->addWidget(textEdit_send);

        btn_send = new QPushButton(groupBox_4);
        btn_send->setObjectName(QStringLiteral("btn_send"));

        horizontalLayout->addWidget(btn_send);

        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(20, 450, 101, 81));
        btn_mutilTPMS = new QPushButton(groupBox_6);
        btn_mutilTPMS->setObjectName(QStringLiteral("btn_mutilTPMS"));
        btn_mutilTPMS->setGeometry(QRect(20, 30, 75, 23));
        lblMouseEventGlobalPos = new QLabel(centralWidget);
        lblMouseEventGlobalPos->setObjectName(QStringLiteral("lblMouseEventGlobalPos"));
        lblMouseEventGlobalPos->setGeometry(QRect(280, 0, 180, 20));
        lblMouseEventETlPos = new QLabel(centralWidget);
        lblMouseEventETlPos->setObjectName(QStringLiteral("lblMouseEventETlPos"));
        lblMouseEventETlPos->setGeometry(QRect(90, 0, 180, 20));
        tabWidget_AIlink_PT = new QTabWidget(centralWidget);
        tabWidget_AIlink_PT->setObjectName(QStringLiteral("tabWidget_AIlink_PT"));
        tabWidget_AIlink_PT->setGeometry(QRect(670, 70, 671, 831));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_7 = new QGroupBox(tab);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 40, 641, 71));
        textEdit_Name = new QTextEdit(groupBox_7);
        textEdit_Name->setObjectName(QStringLiteral("textEdit_Name"));
        textEdit_Name->setGeometry(QRect(10, 30, 104, 31));
        comboBox_NameMacLen = new QComboBox(groupBox_7);
        comboBox_NameMacLen->setObjectName(QStringLiteral("comboBox_NameMacLen"));
        comboBox_NameMacLen->setGeometry(QRect(120, 30, 41, 31));
        btn_SetBleName = new QPushButton(groupBox_7);
        btn_SetBleName->setObjectName(QStringLiteral("btn_SetBleName"));
        btn_SetBleName->setGeometry(QRect(180, 30, 93, 31));
        label_BleName = new QLabel(groupBox_7);
        label_BleName->setObjectName(QStringLiteral("label_BleName"));
        label_BleName->setGeometry(QRect(370, 30, 81, 21));
        btn_reflash_BleName = new QPushButton(groupBox_7);
        btn_reflash_BleName->setObjectName(QStringLiteral("btn_reflash_BleName"));
        btn_reflash_BleName->setGeometry(QRect(310, 30, 31, 28));
        groupBox_8 = new QGroupBox(tab);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 110, 641, 71));
        textEdit_Name_2 = new QTextEdit(groupBox_8);
        textEdit_Name_2->setObjectName(QStringLiteral("textEdit_Name_2"));
        textEdit_Name_2->setGeometry(QRect(10, 30, 104, 31));
        comboBox_NameMacLen_2 = new QComboBox(groupBox_8);
        comboBox_NameMacLen_2->setObjectName(QStringLiteral("comboBox_NameMacLen_2"));
        comboBox_NameMacLen_2->setGeometry(QRect(120, 30, 41, 31));
        btn_ReadMacAddr = new QPushButton(groupBox_8);
        btn_ReadMacAddr->setObjectName(QStringLiteral("btn_ReadMacAddr"));
        btn_ReadMacAddr->setGeometry(QRect(180, 30, 93, 31));
        label_BleName_2 = new QLabel(groupBox_8);
        label_BleName_2->setObjectName(QStringLiteral("label_BleName_2"));
        label_BleName_2->setGeometry(QRect(370, 30, 81, 21));
        btn_reflash_BleName_2 = new QPushButton(groupBox_8);
        btn_reflash_BleName_2->setObjectName(QStringLiteral("btn_reflash_BleName_2"));
        btn_reflash_BleName_2->setGeometry(QRect(310, 30, 31, 28));
        groupBox_9 = new QGroupBox(tab);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 180, 641, 71));
        textEdit_Name_3 = new QTextEdit(groupBox_9);
        textEdit_Name_3->setObjectName(QStringLiteral("textEdit_Name_3"));
        textEdit_Name_3->setGeometry(QRect(10, 30, 104, 31));
        comboBox_NameMacLen_3 = new QComboBox(groupBox_9);
        comboBox_NameMacLen_3->setObjectName(QStringLiteral("comboBox_NameMacLen_3"));
        comboBox_NameMacLen_3->setGeometry(QRect(120, 30, 41, 31));
        btn_SetBleName_3 = new QPushButton(groupBox_9);
        btn_SetBleName_3->setObjectName(QStringLiteral("btn_SetBleName_3"));
        btn_SetBleName_3->setGeometry(QRect(180, 30, 93, 31));
        label_BleName_3 = new QLabel(groupBox_9);
        label_BleName_3->setObjectName(QStringLiteral("label_BleName_3"));
        label_BleName_3->setGeometry(QRect(370, 30, 81, 21));
        btn_reflash_BleName_3 = new QPushButton(groupBox_9);
        btn_reflash_BleName_3->setObjectName(QStringLiteral("btn_reflash_BleName_3"));
        btn_reflash_BleName_3->setGeometry(QRect(310, 30, 31, 28));
        groupBox_10 = new QGroupBox(tab);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(10, 260, 641, 71));
        textEdit_Name_4 = new QTextEdit(groupBox_10);
        textEdit_Name_4->setObjectName(QStringLiteral("textEdit_Name_4"));
        textEdit_Name_4->setGeometry(QRect(10, 30, 104, 31));
        comboBox_NameMacLen_4 = new QComboBox(groupBox_10);
        comboBox_NameMacLen_4->setObjectName(QStringLiteral("comboBox_NameMacLen_4"));
        comboBox_NameMacLen_4->setGeometry(QRect(120, 30, 41, 31));
        btn_SetBleName_4 = new QPushButton(groupBox_10);
        btn_SetBleName_4->setObjectName(QStringLiteral("btn_SetBleName_4"));
        btn_SetBleName_4->setGeometry(QRect(180, 30, 93, 31));
        label_BleName_4 = new QLabel(groupBox_10);
        label_BleName_4->setObjectName(QStringLiteral("label_BleName_4"));
        label_BleName_4->setGeometry(QRect(370, 30, 81, 21));
        btn_reflash_BleName_4 = new QPushButton(groupBox_10);
        btn_reflash_BleName_4->setObjectName(QStringLiteral("btn_reflash_BleName_4"));
        btn_reflash_BleName_4->setGeometry(QRect(310, 30, 31, 28));
        groupBox_11 = new QGroupBox(tab);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(10, 330, 641, 71));
        textEdit_Name_5 = new QTextEdit(groupBox_11);
        textEdit_Name_5->setObjectName(QStringLiteral("textEdit_Name_5"));
        textEdit_Name_5->setGeometry(QRect(10, 30, 104, 31));
        comboBox_NameMacLen_5 = new QComboBox(groupBox_11);
        comboBox_NameMacLen_5->setObjectName(QStringLiteral("comboBox_NameMacLen_5"));
        comboBox_NameMacLen_5->setGeometry(QRect(120, 30, 41, 31));
        btn_SetBleName_5 = new QPushButton(groupBox_11);
        btn_SetBleName_5->setObjectName(QStringLiteral("btn_SetBleName_5"));
        btn_SetBleName_5->setGeometry(QRect(180, 30, 93, 31));
        label_BleName_5 = new QLabel(groupBox_11);
        label_BleName_5->setObjectName(QStringLiteral("label_BleName_5"));
        label_BleName_5->setGeometry(QRect(370, 30, 81, 21));
        btn_reflash_BleName_5 = new QPushButton(groupBox_11);
        btn_reflash_BleName_5->setObjectName(QStringLiteral("btn_reflash_BleName_5"));
        btn_reflash_BleName_5->setGeometry(QRect(310, 30, 31, 28));
        groupBox_12 = new QGroupBox(tab);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(10, 400, 641, 71));
        textEdit_Name_6 = new QTextEdit(groupBox_12);
        textEdit_Name_6->setObjectName(QStringLiteral("textEdit_Name_6"));
        textEdit_Name_6->setGeometry(QRect(10, 30, 104, 31));
        comboBox_NameMacLen_6 = new QComboBox(groupBox_12);
        comboBox_NameMacLen_6->setObjectName(QStringLiteral("comboBox_NameMacLen_6"));
        comboBox_NameMacLen_6->setGeometry(QRect(120, 30, 41, 31));
        btn_SetBleName_6 = new QPushButton(groupBox_12);
        btn_SetBleName_6->setObjectName(QStringLiteral("btn_SetBleName_6"));
        btn_SetBleName_6->setGeometry(QRect(180, 30, 93, 31));
        label_BleName_6 = new QLabel(groupBox_12);
        label_BleName_6->setObjectName(QStringLiteral("label_BleName_6"));
        label_BleName_6->setGeometry(QRect(370, 30, 81, 21));
        btn_reflash_BleName_6 = new QPushButton(groupBox_12);
        btn_reflash_BleName_6->setObjectName(QStringLiteral("btn_reflash_BleName_6"));
        btn_reflash_BleName_6->setGeometry(QRect(310, 30, 31, 28));
        tabWidget_AIlink_PT->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget_AIlink_PT->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_AIlink_PT->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget_AIlink_PT->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget_AIlink_PT->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tabWidget_AIlink_PT->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        tabWidget_AIlink_PT->addTab(tab_7, QString());
        groupBox_FineAiLinkPT = new QGroupBox(centralWidget);
        groupBox_FineAiLinkPT->setObjectName(QStringLiteral("groupBox_FineAiLinkPT"));
        groupBox_FineAiLinkPT->setGeometry(QRect(670, 0, 391, 61));
        textEdit_FineTXT = new QTextEdit(groupBox_FineAiLinkPT);
        textEdit_FineTXT->setObjectName(QStringLiteral("textEdit_FineTXT"));
        textEdit_FineTXT->setGeometry(QRect(10, 20, 181, 31));
        btn_FineAilinkPT_F = new QPushButton(groupBox_FineAiLinkPT);
        btn_FineAilinkPT_F->setObjectName(QStringLiteral("btn_FineAilinkPT_F"));
        btn_FineAilinkPT_F->setGeometry(QRect(200, 20, 81, 28));
        btn_FineAilinkPT_B = new QPushButton(groupBox_FineAiLinkPT);
        btn_FineAilinkPT_B->setObjectName(QStringLiteral("btn_FineAilinkPT_B"));
        btn_FineAilinkPT_B->setGeometry(QRect(290, 20, 81, 28));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1583, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget_AIlink_PT->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\346\265\201\346\216\247\344\275\215\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
        btn_refreshCOM->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        btn_openConsole->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\216\245\346\224\266\350\256\276\347\275\256", Q_NULLPTR));
        btn_clearRecv->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266", Q_NULLPTR));
        checkBoxHexReceive->setText(QApplication::translate("MainWindow", "Hex", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\345\217\221\351\200\201\350\256\276\347\275\256", Q_NULLPTR));
        checkBoxHexSend->setText(QApplication::translate("MainWindow", "Hex", Q_NULLPTR));
        btn_clearSend->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\345\217\221\351\200\201", Q_NULLPTR));
        groupBox_5->setTitle(QString());
        groupBox_4->setTitle(QString());
        btn_send->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        btn_mutilTPMS->setText(QApplication::translate("MainWindow", "\345\244\232\350\275\256\350\203\216\345\216\213", Q_NULLPTR));
        lblMouseEventGlobalPos->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        lblMouseEventETlPos->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\350\223\235\347\211\231\345\220\215\347\247\260", Q_NULLPTR));
        btn_SetBleName->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\220\215\347\247\260", Q_NULLPTR));
        label_BleName->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        btn_reflash_BleName->setText(QString());
        groupBox_8->setTitle(QApplication::translate("MainWindow", "\350\223\235\347\211\231 MAC", Q_NULLPTR));
        btn_ReadMacAddr->setText(QApplication::translate("MainWindow", " \350\216\267\345\217\226MAC\345\234\260\345\235\200", Q_NULLPTR));
        label_BleName_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        btn_reflash_BleName_2->setText(QString());
        groupBox_9->setTitle(QApplication::translate("MainWindow", "\350\223\235\347\211\231 \347\211\210\346\234\254\345\217\267", Q_NULLPTR));
        btn_SetBleName_3->setText(QApplication::translate("MainWindow", " \350\216\267\345\217\226 \347\211\210\346\234\254\345\217\267", Q_NULLPTR));
        label_BleName_3->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        btn_reflash_BleName_3->setText(QString());
        groupBox_10->setTitle(QApplication::translate("MainWindow", "\350\223\235\347\211\231 \350\207\252\345\212\250\347\235\241\347\234\240\346\227\266\351\227\264", Q_NULLPTR));
        btn_SetBleName_4->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\347\235\241\347\234\240\346\227\266\351\227\264", Q_NULLPTR));
        label_BleName_4->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        btn_reflash_BleName_4->setText(QString());
        groupBox_11->setTitle(QApplication::translate("MainWindow", "\350\223\235\347\211\231 \347\253\213\345\215\263\344\274\221\347\234\240", Q_NULLPTR));
        btn_SetBleName_5->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\347\235\241\347\234\240\346\227\266\351\227\264", Q_NULLPTR));
        label_BleName_5->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        btn_reflash_BleName_5->setText(QString());
        groupBox_12->setTitle(QApplication::translate("MainWindow", "\350\223\235\347\211\231 \345\224\244\351\206\222", Q_NULLPTR));
        btn_SetBleName_6->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\347\235\241\347\234\240\346\227\266\351\227\264", Q_NULLPTR));
        label_BleName_6->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        btn_reflash_BleName_6->setText(QString());
        tabWidget_AIlink_PT->setTabText(tabWidget_AIlink_PT->indexOf(tab), QApplication::translate("MainWindow", "ailink\351\200\232\347\224\250\350\256\276\347\275\256", Q_NULLPTR));
        tabWidget_AIlink_PT->setTabText(tabWidget_AIlink_PT->indexOf(tab_4), QApplication::translate("MainWindow", "ailink\351\200\232\347\224\250\350\256\276\347\275\256", Q_NULLPTR));
        tabWidget_AIlink_PT->setTabText(tabWidget_AIlink_PT->indexOf(tab_2), QApplication::translate("MainWindow", "ailink\351\200\232\347\224\250\350\256\276\347\275\256", Q_NULLPTR));
        tabWidget_AIlink_PT->setTabText(tabWidget_AIlink_PT->indexOf(tab_3), QApplication::translate("MainWindow", "ailink\351\200\232\347\224\250\350\256\276\347\275\256", Q_NULLPTR));
        tabWidget_AIlink_PT->setTabText(tabWidget_AIlink_PT->indexOf(tab_5), QApplication::translate("MainWindow", "\351\241\265", Q_NULLPTR));
        tabWidget_AIlink_PT->setTabText(tabWidget_AIlink_PT->indexOf(tab_6), QApplication::translate("MainWindow", "\351\241\265", Q_NULLPTR));
        tabWidget_AIlink_PT->setTabText(tabWidget_AIlink_PT->indexOf(tab_7), QApplication::translate("MainWindow", "\351\241\265", Q_NULLPTR));
        groupBox_FineAiLinkPT->setTitle(QApplication::translate("MainWindow", " fine", Q_NULLPTR));
        btn_FineAilinkPT_F->setText(QApplication::translate("MainWindow", " \345\220\221\345\211\215", Q_NULLPTR));
        btn_FineAilinkPT_B->setText(QApplication::translate("MainWindow", " \345\220\221\345\220\216", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
