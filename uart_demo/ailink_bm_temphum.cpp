#include "ailink_common.h"
#include <QDebug>
#include "mainwindow.h"
#include <QDateTime>
#include "ailink_bm_temphum.h"

#define _Ailink_Cmd_A6_Head (uchar)0xA6
#define _Ailink_Cmd_A6_End  (uchar)0x6A



void ailink_BMTempHum_tag ::ailink_window_init(Ui::MainWindow *ailink_ui)
{
    //UI 初始化

}




void MainWindow::on_btn_SetDeviceID_clicked()
{
    qDebug("on_btn_SetDeviceID_clicked");//
    QByteArray test_byte  ;
    QByteArray A6_bytes  ;
    test_byte.resize(8);
    A6_bytes.resize(8);

    A6_bytes[0] = AiLink_A6_CMD_SetID;
    A6_bytes[1]  = 7 ;

    QString STR_CID = ui->label_ID_CID->text();
    QString STR_VID = ui->label_ID_VID->toPlainText();
    QString STR_PID = ui->label_ID_PID->toPlainText();
    QString STR_ID  = STR_CID + STR_VID+STR_PID;
    convertStringToHex(STR_ID, test_byte);
    memcpy(A6_bytes.data()+2,test_byte,6);

    qDebug()<<"STR_ID="<<STR_ID;
    qDebug()<<"A6_bytes="<<A6_bytes;

    QString  test_string = "";
    ailink_common_func.ailink_a6_input_payload(test_string,A6_bytes);
}

void MainWindow::on_btn_ReadDeviceID_clicked()
{
    qDebug("on_btn_ReadDeviceID_clicked");//

    QByteArray A6_bytes  ;
    A6_bytes.resize(1);
    A6_bytes[0] = AiLink_A6_CMD_ReadID;
    QString  test_string = "";
    ailink_common_func.ailink_a6_input_payload(test_string,A6_bytes);
}
