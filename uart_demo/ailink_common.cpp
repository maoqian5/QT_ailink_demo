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

    //设置状态
    ailink_ui->checkBoxHexReceive_3->setEnabled(true);
    ailink_ui->checkBoxHexReceive_3->setCheckState(Qt::Unchecked);//Qt::Checked  Qt::Unchecked
    ailink_ui->checkBoxHexReceive_3->setEnabled(false);



}


void  Get_Serial_data_fun(M_serial_buff serial_buff ,Ui::MainWindow *Sui)
{
     qDebug("Get_Serial_data_fun");//
     Sui->label_BleName->setText(serial_buff.Got_serial_data_String);
     quint8 len = serial_buff.serial_data_bytes_len ;
     serial_buff.serial_data_bytes.resize(len);
     QByteArray data =  serial_buff.serial_data_bytes;
     quint8 n = 0 ;
     quint8 i = 0 ;


     qDebug("len=%d",len);//
      qDebug("data.at(0)=%d",serial_buff.serial_data_bytes.at(0));//
     if(len >= 4)
     {
         for(n=0; n<len; n++)
         {
              // qDebug("data[n]=%d",serial_buff.serial_data_bytes[n]);//
               if(serial_buff.serial_data_bytes.at(0)==0xa6) qDebug("get buff 0x12");
             if(data[n]  == _Ailink_Cmd_A6_Head)
             {

                 //-------payload长度不为0，总长度必须大于等于payload长度+3,有效长度小于等于20
                 if(data[n+1] && (data[n+1] <= (len-n-4)) )
                 {
                     if(data[n+1+data[n+1]+2]==_Ailink_Cmd_A6_End)
                     {
                         goto __L_ParseElinkSetCmd;
                     }
 __L_directData1:
                     n=n;//减少编译出现的警告
                 }

             }

         }
     }
    return;
    __L_ParseElinkSetCmd:
    quint8 checksum = 0;
    quint8 indexPayloadLen1 = n+1;
    checksum+=data[indexPayloadLen1];
    for(i=0; i<data[indexPayloadLen1]; i++)
    {
        checksum += data[i+indexPayloadLen1+1];
        qDebug("checksum=%d",checksum);//
    }
    if(checksum != data[indexPayloadLen1+data[indexPayloadLen1]+1])
    {
        goto __L_directData1;
    }
    qDebug("A6 cmd");//

}



