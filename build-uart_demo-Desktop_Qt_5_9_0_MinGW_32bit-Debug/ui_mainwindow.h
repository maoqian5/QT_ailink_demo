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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCheckBox *checkBoxHexSend;
    QCheckBox *checkBoxHexReceive;
    QLabel *label_3;
    QTextEdit *textEdit_recv;
    QTextEdit *textEdit_send;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QComboBox *comboBox_stopBit;
    QComboBox *comboBox_parity;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label;
    QComboBox *comboBox_serialPort;
    QComboBox *comboBox_baudRate;
    QLabel *label_7;
    QComboBox *comboBox_dataBits;
    QComboBox *comboBox_flowBit;
    QPushButton *btn_refreshCOM;
    QPushButton *btn_openConsole;
    QLabel *label_2;
    QLabel *label_8;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_send;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_clearRecv;
    QPushButton *btn_clearSend;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(535, 545);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        checkBoxHexSend = new QCheckBox(centralWidget);
        checkBoxHexSend->setObjectName(QStringLiteral("checkBoxHexSend"));
        checkBoxHexSend->setGeometry(QRect(290, 230, 71, 16));
        checkBoxHexReceive = new QCheckBox(centralWidget);
        checkBoxHexReceive->setObjectName(QStringLiteral("checkBoxHexReceive"));
        checkBoxHexReceive->setGeometry(QRect(310, 30, 71, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 30, 54, 12));
        textEdit_recv = new QTextEdit(centralWidget);
        textEdit_recv->setObjectName(QStringLiteral("textEdit_recv"));
        textEdit_recv->setGeometry(QRect(240, 50, 281, 151));
        textEdit_send = new QTextEdit(centralWidget);
        textEdit_send->setObjectName(QStringLiteral("textEdit_send"));
        textEdit_send->setGeometry(QRect(240, 250, 281, 171));
        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 111, 228));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 6, 0, 1, 1);

        comboBox_stopBit = new QComboBox(gridLayoutWidget_2);
        comboBox_stopBit->setObjectName(QStringLiteral("comboBox_stopBit"));

        gridLayout_2->addWidget(comboBox_stopBit, 4, 1, 1, 1);

        comboBox_parity = new QComboBox(gridLayoutWidget_2);
        comboBox_parity->setObjectName(QStringLiteral("comboBox_parity"));

        gridLayout_2->addWidget(comboBox_parity, 3, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 5, 0, 1, 1);

        comboBox_serialPort = new QComboBox(gridLayoutWidget_2);
        comboBox_serialPort->setObjectName(QStringLiteral("comboBox_serialPort"));

        gridLayout_2->addWidget(comboBox_serialPort, 0, 1, 1, 1);

        comboBox_baudRate = new QComboBox(gridLayoutWidget_2);
        comboBox_baudRate->setObjectName(QStringLiteral("comboBox_baudRate"));

        gridLayout_2->addWidget(comboBox_baudRate, 1, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        comboBox_dataBits = new QComboBox(gridLayoutWidget_2);
        comboBox_dataBits->setObjectName(QStringLiteral("comboBox_dataBits"));

        gridLayout_2->addWidget(comboBox_dataBits, 2, 1, 1, 1);

        comboBox_flowBit = new QComboBox(gridLayoutWidget_2);
        comboBox_flowBit->setObjectName(QStringLiteral("comboBox_flowBit"));

        gridLayout_2->addWidget(comboBox_flowBit, 5, 1, 1, 1);

        btn_refreshCOM = new QPushButton(gridLayoutWidget_2);
        btn_refreshCOM->setObjectName(QStringLiteral("btn_refreshCOM"));

        gridLayout_2->addWidget(btn_refreshCOM, 6, 1, 1, 1);

        btn_openConsole = new QPushButton(gridLayoutWidget_2);
        btn_openConsole->setObjectName(QStringLiteral("btn_openConsole"));

        gridLayout_2->addWidget(btn_openConsole, 8, 0, 1, 2);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(240, 230, 54, 12));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(240, 440, 281, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_send = new QPushButton(horizontalLayoutWidget);
        btn_send->setObjectName(QStringLiteral("btn_send"));

        horizontalLayout->addWidget(btn_send);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btn_clearRecv = new QPushButton(horizontalLayoutWidget);
        btn_clearRecv->setObjectName(QStringLiteral("btn_clearRecv"));

        horizontalLayout->addWidget(btn_clearRecv);

        btn_clearSend = new QPushButton(centralWidget);
        btn_clearSend->setObjectName(QStringLiteral("btn_clearSend"));
        btn_clearSend->setGeometry(QRect(450, 20, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 535, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        checkBoxHexSend->setText(QApplication::translate("MainWindow", "Hex\345\217\221\351\200\201", Q_NULLPTR));
        checkBoxHexReceive->setText(QApplication::translate("MainWindow", "Hex\346\230\276\347\244\272", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\346\216\245\346\224\266\345\214\272\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\346\265\201\346\216\247\344\275\215\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
        btn_refreshCOM->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        btn_openConsole->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\345\214\272\357\274\232", Q_NULLPTR));
        btn_send->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", Q_NULLPTR));
        btn_clearRecv->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266", Q_NULLPTR));
        btn_clearSend->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\345\217\221\351\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
