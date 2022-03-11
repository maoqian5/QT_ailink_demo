#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QList>
#include <QDebug>
#include "child_ui_mutiltpms.h"
#include "ailink_common.h"
#include <QMessageBox>
#include <QTimer>
#include <Thread>

namespace Ui {
class MainWindow;
}


class M_mytimerID
{
    public:
    int serial_timeout_timerID;
    int serial_timeout_time;
    int serial_timeout_cnt;


};//定时器ID
extern M_mytimerID mytimerID;

class M_serial_buff
{
public :
    bool        Got_serial_data_F;
    QString     Got_serial_data_buff;
    QByteArray  serial_data_bytes;
    int         serial_data_bytes_len;
};
extern M_serial_buff myserial_buff;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QStringList getPortNameList();


    Child_UI_mutilTPMS my_mutilTPMS;//定义子窗口

    void    mainwindow_log_show(QByteArray input_ByteArray , QString input_String);//log 窗口


private slots:
    void on_btn_openConsole_clicked();
    void on_btn_send_clicked();
    void on_btn_clearRecv_clicked();
    void on_btn_clearSend_clicked();
    void readData();


    void on_btn_refreshCOM_clicked();

    void timerEvent(QTimerEvent *);//超时回调

    void on_btn_mutilTPMS_clicked();//定义跳转到子窗口的信号槽

    void mouseMoveEvent(QMouseEvent* event);
    void on_btn_SetBleName_clicked();

    void on_btn_findText_clicked();
    void on_btn_FineAilinkPT_F_clicked();

    void on_btn_FineAilinkPT_B_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort *serial;

     ailink_common_tag ailink_common_func;
};

#endif // MAINWINDOW_H

extern QString QByteArray_add_Space_to_QString(QByteArray temp_QByteArray);
extern void  mainwindow_text_log_show(QByteArray show_bytes ,Ui::MainWindow *P_ui);


//自定义信号与槽
class MySerialSignalSlot:public QWidget{

    Q_OBJECT//Q_OBJECT 是一个宏，添加它才能正常使用 Qt 的信号和槽机制

signals://信号函数
    void MySignal(M_serial_buff serial_buff);
public:
    //发射信号的函数
    void emitSignal(){
        emit MySignal(serial_buff);
    }


public slots://槽函数
    void recSlot(M_serial_buff serial_buff){
        qDebug() << "执行 recSlot2() 槽函数，输出"<<serial_buff.Got_serial_data_buff;

    }
public:
    M_serial_buff serial_buff;
};
extern  void recSlot_ailink(M_serial_buff serial_buff);


