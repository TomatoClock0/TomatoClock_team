#include "susp_frame.h"
#include "ui_susp_frame.h"
#include "tomatoclock.h"
#include <QPixmap>
#include <QMouseEvent>
#include <QPoint>
#include <QDebug>
#include <QRect>
#include <QPropertyAnimation>
#include <QDesktopWidget>
#include <QBitmap>

susp_frame::susp_frame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::susp_frame)
{
    ui->setupUi(this);

    QPixmap pix("7.png");
    ui->label->setPixmap(pix);

    QPalette palette;
    palette.setBrush(this->backgroundRole(),QBrush(pix));
    this->setPalette(palette);
    this->setMask(pix.mask());
    this->setAutoFillBackground(true);

    this->setAttribute(Qt::WA_TranslucentBackground, true);

    QDesktopWidget *deskWgt = QApplication::desktop();
    deskWidth = deskWgt->width();

    timer_f = new QTimer(this);
    connect(timer_f, SIGNAL(timeout()), this, SLOT(mouseClick()));

    setWindowFlag(Qt::WindowStaysOnTopHint);
    setWindowFlag(Qt::FramelessWindowHint);
}

susp_frame::~susp_frame()
{
    delete ui;
}

void susp_frame::mouseClick()
{


    timer_f->stop();

}

void susp_frame::mousePressEvent(QMouseEvent *event)
{


    if(event->button()==Qt::LeftButton)
    {
        relativePos = this->pos() - event->globalPos();
        timer_f->start(800);
    }
    if (event->button()==Qt::RightButton)
    {
        this->hide();
        this->close();
    }
}

void susp_frame::mouseMoveEvent(QMouseEvent *event)
{

    timer_f->stop();
    this->move(event->globalPos()+relativePos);

}

void susp_frame::mouseDoubleClickEvent(QMouseEvent *event)
{
    timer_f->stop();
    this->close();
    TomatoClock *window = new TomatoClock;
    window->show();
}

int susp_frame::isAutoHide()
{
    if(this->pos().y() <= 5){
        return 1;
    }
    if(this->pos().x() <= 5){
        return 2;
    }
    if (this->pos().x()+this->size().width() >= deskWidth-5){
        return 3;
    }

    return 0;
}

int susp_frame::isHide()
{
    if(this->pos().y() <= -15){
        return 1;
    }
    if(this->pos().x() <= -15){
        return 2;
    }
    if (this->pos().x()+this->size().width() >= deskWidth+15){
        return 3;
    }

    return 0;
}

void susp_frame::hideWidge(int direction)
{
    QPropertyAnimation *animation = new QPropertyAnimation(this, "geometry");
    animation->setDuration(100);
    animation->setStartValue(QRect(this->pos(), this->size()));
    QRect rcEnd;
    if (direction == 1){
        rcEnd = QRect(this->x(), -this->height()/2, this->rect().width(), this->rect().height());
    }
    if (direction == 2){
        rcEnd = QRect(-this->width()/2, this->y(), this->size().width(), this->rect().height());
    }
    if(direction == 3){
        rcEnd = QRect(deskWidth - 40, this->y(), this->size().width(), this->rect().height());
    }
    animation->setEndValue(rcEnd);
    animation->start();

}

void susp_frame::showWidge(int direction)
{
    QPoint pos = this->pos();
    QPropertyAnimation *animation = new QPropertyAnimation(this, "geometry");
    animation->setDuration(100);
    animation->setStartValue(QRect(pos, this->size()));
    QRect rcEnd;
    if (direction == 1){
        rcEnd = QRect(this->x(), 0, this->size().width(), this->rect().height());
    }
    if (direction == 2){
        rcEnd = QRect(0, this->y(), this->size().width(), this->rect().height());
    }
    if (direction == 3){
        rcEnd = QRect(deskWidth - this->width(), this->y(), this->size().width(), this->rect().height());
    }
    animation->setEndValue(rcEnd);
    animation->start();
}

void susp_frame::leaveEvent(QEvent *event)
{

    int direction = isAutoHide();
    if(direction != 0){
        hideWidge(direction);
    }



}

void susp_frame::enterEvent(QEvent *event)
{
    int direction = isHide();
    if (direction != 0){
        showWidge(direction);
    }

}
