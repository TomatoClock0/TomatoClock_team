#include "tomatoclock.h"
#include "ui_tomatoclock.h"
#include "addtasks.h"
#include "managetasks.h"
#include "qstring.h"
#include <QTimer>
#include <QMessageBox>
//#include <QtCore>
//#include <QDebug>

static int workTime = 5;
static int relaxTime = 5;
static int remainTime =0;

int clock_status = 0;//0--not working
                     //1--working
                     //2--relaxing
                     //3--stopping



TomatoClock::TomatoClock(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TomatoClock)
{
    ui->setupUi(this);
    timer1 = new QTimer(this);
    connect(timer1, SIGNAL(timeout()), this, SLOT(myslot1()));
    timer2 = new QTimer(this);
    connect(timer2, SIGNAL(timeout()), this, SLOT(myslot2()));
    timer3 = new QTimer(this);
    connect(timer3, SIGNAL(timeout()), this, SLOT(myslot3()));
}

TomatoClock::~TomatoClock()
{
    delete ui;
}

//add tasks
void TomatoClock::on_Add_clicked()
{
    AddTasks *addtasks=new AddTasks;
    addtasks->show();
}

//manage tasks
void TomatoClock::on_Manage_clicked()
{

}


//the work/relax time has been setted already
void TomatoClock::on_Done_clicked()
{
    const int w = ui->work_time->text().toInt();
    const int r=ui->relax_time->text().toInt();
    workTime = w ;
    relaxTime = r ;
    ui->clock->setText(QString::number(w));
    ui->clock1->setText(QString::number(r));
}


//start timing
void TomatoClock::on_Start_clicked()
{
    clock_status = 1;

    timer1->start(workTime*1000);
    //timer2->start(workTime*1000+relaxTime*1000);
}

//to show the warning
void TomatoClock::myslot1()
{
    QMessageBox::warning(this, "timer1", QObject::trUtf8("时间到!休息啦"));
    timer1->stop();
    timer2->start(relaxTime*1000);
}
void TomatoClock::myslot2()
{
    QMessageBox::warning(this, "timer2", QObject::trUtf8("时间到!工作啦"));
    timer2->stop();
    timer1->start(workTime*1000);
}
void TomatoClock::myslot3()
{
    QMessageBox::warning(this, "timer2", QObject::trUtf8("时间到!工作啦"));
    timer3->stop();
}


//stop timing
void TomatoClock::on_Stop_clicked()
{
    if(clock_status==3){
        timer3->start(remainTime);
    }
    if(clock_status == 1&&clock_status != 3){
        remainTime=timer1->remainingTime();
        timer1->stop();
        clock_status=3;
    }

}

//the job is finished
void TomatoClock::on_Finish_clicked()
{
    clock_status = 0;
    timer1->stop();
    timer2->stop();
}
