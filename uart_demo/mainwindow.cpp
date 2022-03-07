#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextCodec>
#include<windows.h>

#include <QDateTime>
#include <Qicon>

char *url_reflash_pic =  ":/pic/image/reflash.png"; //刷新图片的路径

static const char blankString[] = QT_TRANSLATE_NOOP("SettingsDialog", "N/A");
M_mytimerID mytimerID;
M_serial_buff myserial_buff;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cest123.cui = ui;
    cest123.ailink_window_init(ui);

    serial = new QSerialPort;
    QString description;
    QString manufacturer;
    QString serialNumber;

    qsrand(time(0));
    mytimerID.serial_timeout_time = 10;
    mytimerID.serial_timeout_timerID =startTimer(mytimerID.serial_timeout_time);//创建10ms定时器

    //获取可以用的串口
     QList<QSerialPortInfo> serialPortInfos = QSerialPortInfo::availablePorts();
     //输出当前系统可以使用的串口个数
      qDebug() << "Total numbers of ports: " << serialPortInfos.count();

      //将所有可以使用的串口设备添加到ComboBox中
      for (const QSerialPortInfo &serialPortInfo : serialPortInfos)
      {
       QStringList list;
       description = serialPortInfo.description();
       manufacturer = serialPortInfo.manufacturer();
       serialNumber = serialPortInfo.serialNumber();
       list << serialPortInfo.portName()
         << (!description.isEmpty() ? description : blankString)
         << (!manufacturer.isEmpty() ? manufacturer : blankString)
         << (!serialNumber.isEmpty() ? serialNumber : blankString)
         << serialPortInfo.systemLocation()
         << (serialPortInfo.vendorIdentifier() ? QString::number(serialPortInfo.vendorIdentifier(), 16) : blankString)
         << (serialPortInfo.productIdentifier() ? QString::number(serialPortInfo.productIdentifier(), 16) : blankString);
       ui->comboBox_serialPort->addItem(list.first(), list);
      }
       if(serialPortInfos.count()==0)ui->comboBox_serialPort->addItem(tr(""));//显示一个空得 com

       //设置波特率
       ui->comboBox_baudRate->addItem(QStringLiteral("9600"), QSerialPort::Baud9600);
       ui->comboBox_baudRate->addItem(QStringLiteral("19200"), QSerialPort::Baud19200);
       ui->comboBox_baudRate->addItem(QStringLiteral("38400"), QSerialPort::Baud38400);
       ui->comboBox_baudRate->addItem(QStringLiteral("115200"), QSerialPort::Baud115200);
       ui->comboBox_baudRate->setCurrentIndex(0);

       //设置数据位
       ui->comboBox_dataBits->addItem(QStringLiteral("5"), QSerialPort::Data5);
       ui->comboBox_dataBits->addItem(QStringLiteral("6"), QSerialPort::Data6);
       ui->comboBox_dataBits->addItem(QStringLiteral("7"), QSerialPort::Data7);
       ui->comboBox_dataBits->addItem(QStringLiteral("8"), QSerialPort::Data8);
       ui->comboBox_dataBits->setCurrentIndex(3);

       //设置奇偶校验位
       ui->comboBox_parity->addItem(tr("None"), QSerialPort::NoParity);
       ui->comboBox_parity->addItem(tr("Even"), QSerialPort::EvenParity);
       ui->comboBox_parity->addItem(tr("Odd"), QSerialPort::OddParity);
       ui->comboBox_parity->addItem(tr("Mark"), QSerialPort::MarkParity);
       ui->comboBox_parity->addItem(tr("Space"), QSerialPort::SpaceParity);

       //设置停止位
        ui->comboBox_stopBit->addItem(QStringLiteral("1"), QSerialPort::OneStop);
        ui->comboBox_stopBit->addItem(QStringLiteral("2"), QSerialPort::TwoStop);

        //添加流控
         ui->comboBox_flowBit->addItem(tr("None"), QSerialPort::NoFlowControl);
         ui->comboBox_flowBit->addItem(tr("RTS/CTS"), QSerialPort::HardwareControl);
         ui->comboBox_flowBit->addItem(tr("XON/XOFF"), QSerialPort::SoftwareControl);

         //禁用发送按钮
         ui->btn_send->setEnabled(false);
        //ui->btn_SetBleName->setIcon(QPixmap("C:/Users/96012/Desktop/123.png"));


        ui->btn_reflash_BleName->setIcon(QPixmap(url_reflash_pic));
    //子窗口
    //通过按钮信号槽来写,不能同时写,否则出发两次 connect(ui->btn_mutilTPMS, &QPushButton::clicked, this, &MainWindow::on_btn_mutilTPMS_clicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_btn_openConsole_clicked()
{
    qDebug() << ui->btn_openConsole->text();
    if (ui->btn_openConsole->text() == tr("打开串口"))
    {
     //设置串口名字
     serial->setPortName(ui->comboBox_serialPort->currentText());
     //设置波特率
     serial->setBaudRate(ui->comboBox_baudRate->currentText().toInt());
     //设置数据位
     serial->setDataBits(QSerialPort::Data8);
     //设置奇偶校验位
     serial->setParity(QSerialPort::NoParity);
     //设置停止位
     serial->setStopBits(QSerialPort::OneStop);
     //设置流控
     serial->setFlowControl(QSerialPort::NoFlowControl);
     //打开串口
     if (serial->open(QIODevice::ReadWrite))
     {
      ui->comboBox_baudRate->setEnabled(false);
      ui->comboBox_dataBits->setEnabled(false);
      ui->comboBox_flowBit->setEnabled(false);
      ui->comboBox_parity->setEnabled(false);
      ui->comboBox_serialPort->setEnabled(false);
      ui->comboBox_stopBit->setEnabled(false);
      ui->btn_send->setEnabled(true);
      ui->btn_openConsole->setText(tr("关闭串口"));
      //信号与槽函数关联
      connect(serial, &QSerialPort::readyRead, this, &MainWindow::readData);
      serial->clear();
     }
     else
         qDebug() << "串口打开失败 " << endl;
    }
    else
    {
     //关闭串口
     serial->clear();
     serial->close();
     //serial->deleteLater();
     //恢复设置功能
     ui->comboBox_baudRate->setEnabled(true);
     ui->comboBox_dataBits->setEnabled(true);
     ui->comboBox_flowBit->setEnabled(true);
     ui->comboBox_parity->setEnabled(true);
     ui->comboBox_serialPort->setEnabled(true);
     ui->comboBox_stopBit->setEnabled(true);
     ui->btn_openConsole->setText(tr("打开串口"));
     ui->btn_send->setEnabled(false);
     disconnect(serial, &QSerialPort::readyRead, this, &MainWindow::readData);//不加这个容易导致奔溃
    }
}

/*字符转化*/
char convertCharToHex(char ch)
{
    if((ch >= '0') && (ch <= '9'))
         return ch-0x30;
     else if((ch >= 'A') && (ch <= 'F'))
         return ch-'A'+10;
     else if((ch >= 'a') && (ch <= 'f'))
         return ch-'a'+10;
    else return (-1);
}
void convertStringToHex(const QString &str, QByteArray &byteData)
{
    int hexdata,lowhexdata;
    int hexdatalen = 0;
    int len = str.length();
    byteData.resize(len/2);
    char lstr,hstr;
    for(int i=0; i<len; )
    {
        //char lstr,
        hstr=str[i].toLatin1();
        if(hstr == ' ')
        {
            i++;
            continue;
        }
        i++;
        if(i >= len)
            break;
        lstr = str[i].toLatin1();
        hexdata = convertCharToHex(hstr);
        lowhexdata = convertCharToHex(lstr);
        if((hexdata == 16) || (lowhexdata == 16))
            break;
        else
            hexdata = hexdata*16+lowhexdata;
        i++;
        byteData[hexdatalen] = (char)hexdata;
        hexdatalen++;
    }
    byteData.resize(hexdatalen);
}
//发送数据槽函数
void MainWindow::on_btn_send_clicked()
{
 //serial->write(ui->textEdit_send->toPlainText().toLatin1());

    QString m_strSendData = ui->textEdit_send->toPlainText();

    QString temp_strsend = "";

    if(ui->checkBoxHexSend->isChecked())
    {
        if (m_strSendData.contains(" "))
        {
            m_strSendData.replace(QString(" "),QString(""));    // 把空格去掉
        }
        QByteArray sendBuf;
        convertStringToHex(m_strSendData, sendBuf);             // 把 QString 转换 为 hex
        serial->write(sendBuf);

        temp_strsend = QByteArray_add_Space_to_QString(sendBuf);//加上空格

    }
    else
    {
        serial->write(m_strSendData.toLocal8Bit());
        temp_strsend = m_strSendData;
    }
    //发送区域显示
    QDateTime dt = QDateTime::currentDateTime();
    QString datetime = dt.toString("HH:mm:ss.zzz");
    ui->textEdit_recv->append("<--["+datetime + "]  " +temp_strsend);

}
//清空接收数据槽函数
void MainWindow::on_btn_clearRecv_clicked()
{
 ui->textEdit_recv->clear();
}
//清空发送区槽函数
void MainWindow::on_btn_clearSend_clicked()
{
 ui->textEdit_send->clear();
}
void MainWindow::readData()
{

    qDebug()<<"receiveInfo()"<<endl;
    QByteArray info = serial->readAll();//获取com口数据

    if(info.at(0)==0x12)

    qDebug()<<"处理前的串口数据: "<<info;

    if(info.at(0)==0x12) qDebug("get buff 0x12");
    QString strReceiveData = "";


    QDateTime dt = QDateTime::currentDateTime();
    QString datetime = dt.toString("HH:mm:ss.zzz");

    if(ui->checkBoxHexReceive->isChecked())//16进制显示
    {

#if    1 // 带空格
        strReceiveData = QByteArray_add_Space_to_QString(info);
#else  //不带空格
         QByteArray hexData = hexData1.toHex();//转为16进制
         strReceiveData = hexData.toUpper();//转为大写(toUpper()函数)
#endif

         qDebug()<<"处理后的串口数据: "<<strReceiveData;
        // ui->textEdit_recv->append('['+datetime + "]  " +strReceiveData );
          myserial_buff.Got_serial_data_buff = myserial_buff.Got_serial_data_buff+strReceiveData;
    }
    else
    {
     strReceiveData = info;

     // 避免中文乱码
     QTextCodec *tc = QTextCodec::codecForName("GBK");
     QString tmpQStr = tc->toUnicode(info);

     //ui->textEdit_recv->append(tmpQStr);
     qDebug()<<"处理后的串口数据: "<<tmpQStr;
     //ui->textEdit_recv->append('['+datetime + "]  " +tmpQStr );
      myserial_buff.Got_serial_data_buff = myserial_buff.Got_serial_data_buff+tmpQStr;
    }
    myserial_buff.Got_serial_data_F = 1;
    mytimerID.serial_timeout_cnt = 0 ;

    //ui->txtReceiveData->append("\r\n");

}



//刷新COM口
void MainWindow::on_btn_refreshCOM_clicked()
{
    //qApp->processEvents();

    ui->comboBox_serialPort->clear();//清空所有得item
    QString description;
    QString manufacturer;
    QString serialNumber;

    //获取可以用的串口
     QList<QSerialPortInfo> serialPortInfos = QSerialPortInfo::availablePorts();
     //输出当前系统可以使用的串口个数
      qDebug() << "Total numbers of ports: " << serialPortInfos.count();

      //将所有可以使用的串口设备添加到ComboBox中
      for (const QSerialPortInfo &serialPortInfo : serialPortInfos)
      {
       QStringList list;
       description = serialPortInfo.description();
       manufacturer = serialPortInfo.manufacturer();
       serialNumber = serialPortInfo.serialNumber();
       list << serialPortInfo.portName()
         << (!description.isEmpty() ? description : blankString)
         << (!manufacturer.isEmpty() ? manufacturer : blankString)
         << (!serialNumber.isEmpty() ? serialNumber : blankString)
         << serialPortInfo.systemLocation()
         << (serialPortInfo.vendorIdentifier() ? QString::number(serialPortInfo.vendorIdentifier(), 16) : blankString)
         << (serialPortInfo.productIdentifier() ? QString::number(serialPortInfo.productIdentifier(), 16) : blankString);
       ui->comboBox_serialPort->addItem(list.first(), list);
      }
      if(serialPortInfos.count()==0)ui->comboBox_serialPort->addItem(tr(""));//显示一个空得 com
}
//定时器回调
void MainWindow::timerEvent(QTimerEvent *t)
{
    //qDebug()<<"timer="<<mytimerID.mytimerID1<<mytimerID.mytimerID2<<mytimerID.mytimerID3;
    //qDebug()<<"timeOUT timerID="<<t->timerId();
    int temp_timeID = (int)t->timerId();
    if(temp_timeID==mytimerID.serial_timeout_timerID)//serial数据回调
    {

        if(mytimerID.serial_timeout_cnt<5)mytimerID.serial_timeout_cnt++;
        else
        {
            if(myserial_buff.Got_serial_data_F)
            {
                QDateTime dt = QDateTime::currentDateTime();
                QString datetime = dt.toString("HH:mm:ss.zzz");
                ui->textEdit_recv->append("-->["+datetime + "]  " +myserial_buff.Got_serial_data_buff );
                myserial_buff.Got_serial_data_buff = "";
            }
            myserial_buff.Got_serial_data_F = 0;
            mytimerID.serial_timeout_cnt = 0;
        }
    }

}

//byte数据加空格返回字符
QString MainWindow :: QByteArray_add_Space_to_QString(QByteArray temp_QByteArray)
{
    QString return_string = "";
    QString temp_string = "";
    for(int i=0; i<temp_QByteArray.size();i++)
    {
        return_string = return_string + temp_string.sprintf("%02X",temp_QByteArray.at(i)) + ' ';
        temp_string = return_string;
        qDebug()<<"处理后的串口数据0: "<<return_string;
    }
    return return_string;
}
//窗口跳转函数
void MainWindow::on_btn_mutilTPMS_clicked()
{
    if(my_mutilTPMS.isVisible())
        my_mutilTPMS.close();
    else
    {
        QPoint globalPos = MainWindow::mapToGlobal(QPoint(0, 0));
        my_mutilTPMS.move(globalPos.x() + 530, globalPos.y() + 45);
        my_mutilTPMS.show();

    }
}

void MainWindow::mouseMoveEvent(QMouseEvent* event)
{
    QPoint Et_pos = event->pos();//鼠标光标相对于接收事件的小部件的位置(可以理解为当前窗口的鼠标位置?)
    QPoint Et_global_ = event->globalPos();//事件发生时鼠标光标的全局位置(可以理解为当前屏幕的鼠标位置?)

    ui->lblMouseEventETlPos->setText("FormXY:" + QString("(%1,%2)").arg(Et_pos.x()).arg(Et_pos.y()));//鼠标的全局坐标
    ui->lblMouseEventGlobalPos->setText("GlobalXY:" +QString("(%1,%2)").arg(Et_global_.x()).arg(Et_global_.y()));//鼠标的全局坐标

}

void MainWindow::on_btn_SetBleName_clicked()
{
    cest123.set_ble_name();

}
