#include "eventlabel.h"


EventLabel::EventLabel(QLabel *parent1=0):QLabel(parent1)
{

}

void EventLabel::mouseMoveEvent(QMouseEvent *event)
{
    this->setText(QString("<center><h1>Move: (%1,%2)</h1></center>").arg(QString::number(event->x()),QString::number(event->y())));
}

void EventLabel::mousePressEvent(QMouseEvent *event)
{
    this->setText(QString("<center><h1>Press: (%1, %2)</h1></center>").arg(QString::number(event->x()), QString::number(event->y())));

}

void EventLabel::mouseReleaseEvent(QMouseEvent *event)
{
    QString msg;
    msg.sprintf("<center><h1>Release:(%d,%d)</h1></center>",event->x(),event->y());
    this->setText(msg);
}
