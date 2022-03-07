#ifndef AILINK_COMMON_H
#define AILINK_COMMON_H

#include "ui_mainwindow.h"

class ailink_common_tag
{
public :
    Ui::MainWindow *cui;
    void ailink_window_init(Ui::MainWindow *ailink_ui);
    void set_ble_name();
};
#endif // AILINK_COMMON_H
