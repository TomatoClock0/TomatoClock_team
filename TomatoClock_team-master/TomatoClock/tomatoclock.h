#ifndef TOMATOCLOCK_H
#define TOMATOCLOCK_H

#include <QMainWindow>
#include <QTimer>
#include <QStandardItemModel>
#include "addtasks.h"
#include "managetasks.h"

namespace Ui {
class TomatoClock;
}

class TomatoClock : public QMainWindow
{
    Q_OBJECT

public:
    void new_Table();
    void tasks_Show();
    void search();


    explicit TomatoClock(QWidget *parent = 0);
    ~TomatoClock();

    int workTime = 3;
    int relaxTime = 3;
    int restofTime=0;

    int clock_status = 0;//0--not working
    //1--working
    //2--relaxing
    //3--stopping
    //4--prepared

private slots:

    void on_Add_clicked();
    void on_Manage_clicked();
    void on_Done_clicked();
    void lcdnumberDisplay();

    void myslot1();
    void myslot2();
    void showslot();

    void on_Start_clicked();
    void on_Stop_clicked();
    void on_Finish_clicked();


    void on_addlabel_clicked(const QModelIndex &);


    void on_completed_Clear_clicked();
    void on_completed_Delete_clicked();

    void on_completedlabel_clicked(const QModelIndex &index);

private:
    Ui::TomatoClock *ui;

    QTimer *timer1;
    QTimer *timer2;
    QTimer *timer3;

    QStandardItemModel *model1;
    QStandardItemModel *model2;

    AddTasks *add_tasks;
    managetasks *manage_tasks;

    QString completed_tasks_name;

};

#endif // TOMATOCLOCK_H
