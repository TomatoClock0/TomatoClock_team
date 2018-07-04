#include "addtasks.h"
#include "ui_addtasks.h"
#include "mainwindow.h"
#include "completed.h"
#include "clock.h"
#include "settings.h"

AddTasks::AddTasks(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddTasks)
{
    ui->setupUi(this);
}

AddTasks::~AddTasks()
{
    delete ui;
}

void AddTasks::on_pushButton_clicked()
{
    MainWindow*todolist=new MainWindow;
    todolist->show();
    this->hide();
}

void AddTasks::on_pushButton_2_clicked()
{
    Completed*completed=new Completed;
    completed->show();
    this->hide();
}

void AddTasks::on_pushButton_3_clicked()
{
    Clock*clock=new Clock;
    clock->show();
    this->hide();
}

void AddTasks::on_pushButton_4_clicked()
{
    Settings*settings=new Settings;
    settings->show();
    this->hide();
}
