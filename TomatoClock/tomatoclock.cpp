#include "tomatoclock.h"
#include "ui_tomatoclock.h"
#include "addtasks.h"
#include "managetasks.h"

TomatoClock::TomatoClock(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TomatoClock)
{
    ui->setupUi(this);
}

TomatoClock::~TomatoClock()
{
    delete ui;
}

void TomatoClock::on_pushButton_clicked()
{
    AddTasks *addtasks=new AddTasks;
    addtasks->show();
}

void TomatoClock::on_pushButton_2_clicked()
{

}
