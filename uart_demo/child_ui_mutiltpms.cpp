#include "child_ui_mutiltpms.h"
#include "ui_child_ui_mutiltpms.h"

Child_UI_mutilTPMS::Child_UI_mutilTPMS(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Child_UI_mutilTPMS)
{
    ui->setupUi(this);
}

Child_UI_mutilTPMS::~Child_UI_mutilTPMS()
{
    delete ui;
}
