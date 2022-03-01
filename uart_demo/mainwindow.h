#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QList>
#include <QDebug>

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
    bool Got_serial_data_F;
    QString Got_serial_data_buff;
};
extern M_serial_buff myserial_buff;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QStringList getPortNameList();
    QString QByteArray_add_Space_to_QString(QByteArray temp_QByteArray);

private slots:
    void on_btn_openConsole_clicked();
    void on_btn_send_clicked();
    void on_btn_clearRecv_clicked();
    void on_btn_clearSend_clicked();
    void readData();


    void on_btn_refreshCOM_clicked();

    void timerEvent(QTimerEvent *);//超时回调

private:
    Ui::MainWindow *ui;
    QSerialPort *serial;
};

#endif // MAINWINDOW_H
