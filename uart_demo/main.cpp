#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QStringList>
#include<QSerialPortInfo>
#include<QSerialPort>

QStringList m_portNameList;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}


