#include "ailink_common.h"
#include <QDebug>

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
