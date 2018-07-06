#include "tomatoclock.h"
#include "ui_tomatoclock.h"
#include "addtasks.h"
#include "managetasks.h"
#include "qstring.h"
#include <QTimer>
#include <QMessageBox>
//#include <QtCore>
//#include <QDebug>

static int workTime = 30;
//int relaxTime=5;

TomatoClock::TomatoClock(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TomatoClock)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(myslot()));

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
    //const int r=ui->relax_time->text().toInt();
    workTime = w ;
    ui->clock->setText(QString::number(w));
}

//start to time
void TomatoClock::on_Start_clicked()
{


    int num;

    num = workTime*1000;

    timer->start(num);


}

void TomatoClock::myslot()
{
    QMessageBox::warning(this, "timer", QObject::trUtf8("时间到!"));
    timer->stop();

}

