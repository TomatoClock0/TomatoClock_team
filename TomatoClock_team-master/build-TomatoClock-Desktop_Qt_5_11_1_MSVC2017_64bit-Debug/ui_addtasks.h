/********************************************************************************
** Form generated from reading UI file 'addtasks.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASKS_H
#define UI_ADDTASKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddTasks
{
public:
    QLineEdit *tasksname;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *tasksdetail;
    QPushButton *OK;
    QPushButton *Cancel;

    void setupUi(QDialog *AddTasks)
    {
        if (AddTasks->objectName().isEmpty())
            AddTasks->setObjectName(QStringLiteral("AddTasks"));
        AddTasks->resize(633, 469);
        tasksname = new QLineEdit(AddTasks);
        tasksname->setObjectName(QStringLiteral("tasksname"));
        tasksname->setGeometry(QRect(90, 10, 491, 21));
        label = new QLabel(AddTasks);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 72, 15));
        label_2 = new QLabel(AddTasks);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 72, 15));
        tasksdetail = new QTextEdit(AddTasks);
        tasksdetail->setObjectName(QStringLiteral("tasksdetail"));
        tasksdetail->setGeometry(QRect(90, 50, 491, 341));
        OK = new QPushButton(AddTasks);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setGeometry(QRect(430, 410, 93, 28));
        Cancel = new QPushButton(AddTasks);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(530, 410, 93, 28));

        retranslateUi(AddTasks);

        QMetaObject::connectSlotsByName(AddTasks);
    } // setupUi

    void retranslateUi(QDialog *AddTasks)
    {
        AddTasks->setWindowTitle(QApplication::translate("AddTasks", "Dialog", nullptr));
        label->setText(QApplication::translate("AddTasks", "name", nullptr));
        label_2->setText(QApplication::translate("AddTasks", "details", nullptr));
        OK->setText(QApplication::translate("AddTasks", "ok", nullptr));
        Cancel->setText(QApplication::translate("AddTasks", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTasks: public Ui_AddTasks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASKS_H
