#ifndef AILINK_COMMON_H
#define AILINK_COMMON_H

#include "ui_mainwindow.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

namespace cui {
class ailink_common_tag;
}

extern QByteArray Temp_Byte_payload1 ;
extern QByteArray *P_Temp_Byte_payload1 ;
class ailink_common_tag
{
public :
    Ui::MainWindow *cui;
    void ailink_a6_input_payload(QString Str_payload , QByteArray Byte_payload);
    void ailink_a7_input_payload(QByteArray Byte_CID , QString Str_payload , QByteArray Byte_payload);

    void ailink_window_init(Ui::MainWindow *ailink_ui);
    void set_ble_name();

    QSerialPort *P_ailink_serial;//声明一个指针,指向mainwindow里面的serial

private slots:
    void on_btn_SetBleName_clicked();
    void on_btn_send_clicked();
    void on_btn_openConsole_clicked();
    void on_btn_findText_clicked();
};
#endif // AILINK_COMMON_H
