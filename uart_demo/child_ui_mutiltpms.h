#ifndef CHILD_UI_MUTILTPMS_H
#define CHILD_UI_MUTILTPMS_H

#include <QWidget>

namespace Ui {
class Child_UI_mutilTPMS;
}

class Child_UI_mutilTPMS : public QWidget
{
    Q_OBJECT

public:
    explicit Child_UI_mutilTPMS(QWidget *parent = 0);
    ~Child_UI_mutilTPMS();

private:
    Ui::Child_UI_mutilTPMS *ui;
};

#endif // CHILD_UI_MUTILTPMS_H
