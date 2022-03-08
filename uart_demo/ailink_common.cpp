#include "ailink_common.h"
#include <QDebug>
#include "mainwindow.h"
#include <QDateTime>
#define _Ailink_Cmd_A6_Head (uchar)0xA6
#define _Ailink_Cmd_A6_End  (uchar)0x6A



void ailink_common_tag ::ailink_a6_input_payload(QString Str_payload , QByteArray Byte_payload)
{
    Str_payload = "";
    QByteArray A6_byte_array ;
    A6_byte_array.resize(128);
    A6_byte_array.fill(0);
    A6_byte_array[0] = _Ailink_Cmd_A6_Head;
    A6_byte_array[1] = Byte_payload.size();

    qDebug()<<"Byte_payload.size()="<<Byte_payload.size()<<endl;
    qDebug()<<"Byte_payload="<<Byte_payload<<endl;

    memcpy(A6_byte_array.data()+2,Byte_payload.data(),Byte_payload.size()); //指针移动,写入多个数据

    uchar temp_sum =  0 ;
    for(int i = 0 ;i <(Byte_payload.size()+1) ; i++)
    {
        temp_sum += A6_byte_array[i+1];
    }
    A6_byte_array[2+Byte_payload.size()] = temp_sum;
    A6_byte_array[2+Byte_payload.size()+1] = (uchar)0x6A;

    A6_byte_array.resize(2+Byte_payload.size()+1+1);
    qDebug()<<"A6_byte_array="<<A6_byte_array<<endl;
    P_ailink_serial->write(A6_byte_array);

    mainwindow_text_log_show(A6_byte_array,cui);
}
void ailink_common_tag ::ailink_a7_input_payload(QByteArray Byte_CID , QString Str_payload , QByteArray Byte_payload)
{
    Byte_CID = "";
    Str_payload = "";
    Byte_payload = "";

}



void ailink_common_tag ::set_ble_name()
{
    QString str_Name_MAC_LEN = "";

    if(cui->comboBox_NameMacLen->currentText()=="0")
    {
        str_Name_MAC_LEN = "";

    }
     qDebug()<<cui->comboBox_NameMacLen->currentText()<<endl;
    QString m_strSendData = cui->textEdit_Name->toPlainText();

    cui->label_BleName->setText(m_strSendData+cui->comboBox_NameMacLen->currentText());
}

void ailink_common_tag ::ailink_window_init(Ui::MainWindow *ailink_ui)
{
    //UI 初始化
    ailink_ui->comboBox_NameMacLen ->addItems({QStringLiteral("0"),
                                               QStringLiteral("1"),
                                               QStringLiteral("2"),
                                               QStringLiteral("3"),
                                               QStringLiteral("4"),
                                               QStringLiteral("5"),
                                               QStringLiteral("6"),
                                               QStringLiteral("7"),
                                               QStringLiteral("8"),
                                               QStringLiteral("9"),
                                               QStringLiteral("10"),
                                               QStringLiteral("11"),
                                               QStringLiteral("12"),
                                                 });

}


