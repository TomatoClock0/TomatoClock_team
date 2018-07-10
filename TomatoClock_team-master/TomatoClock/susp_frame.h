#ifndef SUSP_FRAME_H
#define SUSP_FRAME_H

#include <QDialog>
#include <QWidget>
#include <QPoint>
#include <QTimer>
#include <QMouseEvent>

namespace Ui {
class susp_frame;
}

class susp_frame : public QDialog
{
    Q_OBJECT

public:
    explicit susp_frame(QWidget *parent = 0);
    ~susp_frame();


    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);

    void mouseDoubleClickEvent(QMouseEvent *);
    void leaveEvent(QEvent *);
    void enterEvent(QEvent *);

    QPoint relativePos;

public slots:
    void mouseClick();
    void leaveFunc();
    void enterFunc();

private:
    Ui::susp_frame *ui;

    QTimer *timer_f;
    QTimer *leaveTimer;
    QTimer *enterTimer;
    int isAutoHide();
    int isHide();
    void hideWidge(int);
    void showWidge(int);
    int deskWidth;
};

#endif // SUSP_FRAME_H
