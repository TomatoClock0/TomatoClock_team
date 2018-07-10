/********************************************************************************
** Form generated from reading UI file 'susp_frame.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUSP_FRAME_H
#define UI_SUSP_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_susp_frame
{
public:
    QLabel *label;

    void setupUi(QDialog *susp_frame)
    {
        if (susp_frame->objectName().isEmpty())
            susp_frame->setObjectName(QStringLiteral("susp_frame"));
        susp_frame->resize(71, 71);
        label = new QLabel(susp_frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 71, 71));

        retranslateUi(susp_frame);

        QMetaObject::connectSlotsByName(susp_frame);
    } // setupUi

    void retranslateUi(QDialog *susp_frame)
    {
        susp_frame->setWindowTitle(QApplication::translate("susp_frame", "Dialog", nullptr));
        label->setText(QApplication::translate("susp_frame", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class susp_frame: public Ui_susp_frame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUSP_FRAME_H
