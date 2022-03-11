/********************************************************************************
** Form generated from reading UI file 'child_ui_mutiltpms.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHILD_UI_MUTILTPMS_H
#define UI_CHILD_UI_MUTILTPMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Child_UI_mutilTPMS
{
public:
    QLabel *label;

    void setupUi(QWidget *Child_UI_mutilTPMS)
    {
        if (Child_UI_mutilTPMS->objectName().isEmpty())
            Child_UI_mutilTPMS->setObjectName(QStringLiteral("Child_UI_mutilTPMS"));
        Child_UI_mutilTPMS->resize(553, 529);
        label = new QLabel(Child_UI_mutilTPMS);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 270, 72, 15));

        retranslateUi(Child_UI_mutilTPMS);

        QMetaObject::connectSlotsByName(Child_UI_mutilTPMS);
    } // setupUi

    void retranslateUi(QWidget *Child_UI_mutilTPMS)
    {
        Child_UI_mutilTPMS->setWindowTitle(QApplication::translate("Child_UI_mutilTPMS", "TPMS", Q_NULLPTR));
        label->setText(QApplication::translate("Child_UI_mutilTPMS", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Child_UI_mutilTPMS: public Ui_Child_UI_mutilTPMS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILD_UI_MUTILTPMS_H
