/********************************************************************************
** Form generated from reading UI file 'managetasks.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGETASKS_H
#define UI_MANAGETASKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_managetasks
{
public:
    QPushButton *m_clear;
    QPushButton *m_delete;
    QPushButton *m_OK;
    QPushButton *m_Cancel;
    QTableView *tableView;

    void setupUi(QDialog *managetasks)
    {
        if (managetasks->objectName().isEmpty())
            managetasks->setObjectName(QStringLiteral("managetasks"));
        managetasks->resize(819, 522);
        m_clear = new QPushButton(managetasks);
        m_clear->setObjectName(QStringLiteral("m_clear"));
        m_clear->setGeometry(QRect(690, 270, 71, 71));
        m_delete = new QPushButton(managetasks);
        m_delete->setObjectName(QStringLiteral("m_delete"));
        m_delete->setGeometry(QRect(690, 180, 71, 71));
        m_OK = new QPushButton(managetasks);
        m_OK->setObjectName(QStringLiteral("m_OK"));
        m_OK->setGeometry(QRect(100, 440, 93, 28));
        m_Cancel = new QPushButton(managetasks);
        m_Cancel->setObjectName(QStringLiteral("m_Cancel"));
        m_Cancel->setGeometry(QRect(560, 440, 93, 28));
        tableView = new QTableView(managetasks);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(140, 50, 471, 192));

        retranslateUi(managetasks);

        QMetaObject::connectSlotsByName(managetasks);
    } // setupUi

    void retranslateUi(QDialog *managetasks)
    {
        managetasks->setWindowTitle(QApplication::translate("managetasks", "Dialog", nullptr));
        m_clear->setText(QString());
        m_delete->setText(QString());
        m_OK->setText(QApplication::translate("managetasks", "OK", nullptr));
        m_Cancel->setText(QApplication::translate("managetasks", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managetasks: public Ui_managetasks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGETASKS_H
