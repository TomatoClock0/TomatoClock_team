#ifndef ADDTASKS_H
#define ADDTASKS_H

#include <QDialog>

namespace Ui {
class AddTasks;
}

class AddTasks : public QDialog
{
    Q_OBJECT

public:
    explicit AddTasks(QWidget *parent = 0);
    ~AddTasks();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::AddTasks *ui;
};

#endif // ADDTASKS_H
