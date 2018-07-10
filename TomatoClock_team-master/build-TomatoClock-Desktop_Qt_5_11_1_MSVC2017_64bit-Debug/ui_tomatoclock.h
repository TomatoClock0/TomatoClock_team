/********************************************************************************
** Form generated from reading UI file 'tomatoclock.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOMATOCLOCK_H
#define UI_TOMATOCLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TomatoClock
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *Todolist;
    QPushButton *Add;
    QPushButton *Manage;
    QTableView *addlabel;
    QWidget *Completed;
    QPushButton *completed_Delete;
    QPushButton *completed_Clear;
    QTableView *completedlabel;
    QTextEdit *completed_tasksdetal;
    QLabel *label_6;
    QWidget *Clock;
    QPushButton *Start;
    QPushButton *Stop;
    QPushButton *Finish;
    QLCDNumber *minute_clock;
    QLCDNumber *second_clock;
    QLineEdit *clock_tasksname;
    QLabel *label_5;
    QLineEdit *clock_tasksid;
    QWidget *Settings;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *work_time;
    QLineEdit *relax_time;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *Done;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TomatoClock)
    {
        if (TomatoClock->objectName().isEmpty())
            TomatoClock->setObjectName(QStringLiteral("TomatoClock"));
        TomatoClock->resize(979, 555);
        centralWidget = new QWidget(TomatoClock);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 20, 980, 550));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        tabWidget->setFont(font);
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setMovable(false);
        Todolist = new QWidget();
        Todolist->setObjectName(QStringLiteral("Todolist"));
        Add = new QPushButton(Todolist);
        Add->setObjectName(QStringLiteral("Add"));
        Add->setGeometry(QRect(760, 290, 71, 71));
        Manage = new QPushButton(Todolist);
        Manage->setObjectName(QStringLiteral("Manage"));
        Manage->setGeometry(QRect(760, 380, 71, 71));
        addlabel = new QTableView(Todolist);
        addlabel->setObjectName(QStringLiteral("addlabel"));
        addlabel->setGeometry(QRect(130, 30, 550, 300));
        tabWidget->addTab(Todolist, QString());
        Completed = new QWidget();
        Completed->setObjectName(QStringLiteral("Completed"));
        completed_Delete = new QPushButton(Completed);
        completed_Delete->setObjectName(QStringLiteral("completed_Delete"));
        completed_Delete->setGeometry(QRect(770, 280, 71, 71));
        completed_Clear = new QPushButton(Completed);
        completed_Clear->setObjectName(QStringLiteral("completed_Clear"));
        completed_Clear->setGeometry(QRect(770, 380, 71, 71));
        completedlabel = new QTableView(Completed);
        completedlabel->setObjectName(QStringLiteral("completedlabel"));
        completedlabel->setGeometry(QRect(130, 20, 550, 200));
        completed_tasksdetal = new QTextEdit(Completed);
        completed_tasksdetal->setObjectName(QStringLiteral("completed_tasksdetal"));
        completed_tasksdetal->setGeometry(QRect(130, 260, 550, 160));
        label_6 = new QLabel(Completed);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(130, 230, 72, 15));
        tabWidget->addTab(Completed, QString());
        Clock = new QWidget();
        Clock->setObjectName(QStringLiteral("Clock"));
        Start = new QPushButton(Clock);
        Start->setObjectName(QStringLiteral("Start"));
        Start->setGeometry(QRect(150, 320, 71, 71));
        Stop = new QPushButton(Clock);
        Stop->setObjectName(QStringLiteral("Stop"));
        Stop->setGeometry(QRect(360, 320, 71, 71));
        Finish = new QPushButton(Clock);
        Finish->setObjectName(QStringLiteral("Finish"));
        Finish->setGeometry(QRect(570, 317, 71, 71));
        minute_clock = new QLCDNumber(Clock);
        minute_clock->setObjectName(QStringLiteral("minute_clock"));
        minute_clock->setGeometry(QRect(200, 80, 151, 91));
        second_clock = new QLCDNumber(Clock);
        second_clock->setObjectName(QStringLiteral("second_clock"));
        second_clock->setGeometry(QRect(410, 80, 181, 91));
        clock_tasksname = new QLineEdit(Clock);
        clock_tasksname->setObjectName(QStringLiteral("clock_tasksname"));
        clock_tasksname->setGeometry(QRect(370, 250, 241, 21));
        label_5 = new QLabel(Clock);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 250, 101, 20));
        clock_tasksid = new QLineEdit(Clock);
        clock_tasksid->setObjectName(QStringLiteral("clock_tasksid"));
        clock_tasksid->setGeometry(QRect(302, 250, 51, 21));
        tabWidget->addTab(Clock, QString());
        Settings = new QWidget();
        Settings->setObjectName(QStringLiteral("Settings"));
        label = new QLabel(Settings);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 111, 41));
        label->setFont(font);
        label_2 = new QLabel(Settings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 75, 111, 31));
        label_2->setFont(font);
        work_time = new QLineEdit(Settings);
        work_time->setObjectName(QStringLiteral("work_time"));
        work_time->setEnabled(true);
        work_time->setGeometry(QRect(170, 40, 113, 21));
        work_time->setEchoMode(QLineEdit::Normal);
        relax_time = new QLineEdit(Settings);
        relax_time->setObjectName(QStringLiteral("relax_time"));
        relax_time->setGeometry(QRect(170, 80, 113, 21));
        label_3 = new QLabel(Settings);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(300, 40, 72, 15));
        label_4 = new QLabel(Settings);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(300, 80, 72, 15));
        Done = new QPushButton(Settings);
        Done->setObjectName(QStringLiteral("Done"));
        Done->setGeometry(QRect(730, 360, 71, 71));
        tabWidget->addTab(Settings, QString());
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(930, 0, 45, 22));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(880, 0, 45, 22));
        TomatoClock->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(TomatoClock);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TomatoClock->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TomatoClock);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TomatoClock->setStatusBar(statusBar);

        retranslateUi(TomatoClock);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TomatoClock);
    } // setupUi

    void retranslateUi(QMainWindow *TomatoClock)
    {
        TomatoClock->setWindowTitle(QApplication::translate("TomatoClock", "TomatoClock", nullptr));
        Add->setText(QString());
        Manage->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Todolist), QApplication::translate("TomatoClock", "Todolist", nullptr));
        completed_Delete->setText(QString());
        completed_Clear->setText(QString());
        label_6->setText(QApplication::translate("TomatoClock", "details:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Completed), QApplication::translate("TomatoClock", "Completed", nullptr));
        Start->setText(QString());
        Stop->setText(QString());
        Finish->setText(QString());
        label_5->setText(QApplication::translate("TomatoClock", "current task:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Clock), QApplication::translate("TomatoClock", "Clock", nullptr));
        label->setText(QApplication::translate("TomatoClock", "work time", nullptr));
        label_2->setText(QApplication::translate("TomatoClock", "relax time", nullptr));
        work_time->setText(QApplication::translate("TomatoClock", "3", nullptr));
        relax_time->setText(QApplication::translate("TomatoClock", "3", nullptr));
        label_3->setText(QApplication::translate("TomatoClock", "min", nullptr));
        label_4->setText(QApplication::translate("TomatoClock", "min", nullptr));
        Done->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Settings), QApplication::translate("TomatoClock", "Settings", nullptr));
        pushButton_2->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TomatoClock: public Ui_TomatoClock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOMATOCLOCK_H
