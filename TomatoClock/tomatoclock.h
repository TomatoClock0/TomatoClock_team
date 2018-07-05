#ifndef TOMATOCLOCK_H
#define TOMATOCLOCK_H

#include <QMainWindow>

namespace Ui {
class TomatoClock;
}

class TomatoClock : public QMainWindow
{
    Q_OBJECT

public:
    explicit TomatoClock(QWidget *parent = 0);
    ~TomatoClock();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::TomatoClock *ui;
};

#endif // TOMATOCLOCK_H
