#ifndef EVENTLABEL_H
#define EVENTLABEL_H

#include <QLabel>
#include <QWidget>
#include <QMouseEvent>

class EventLabel:public QLabel
{
public:
    EventLabel(QLabel *parent1);

protected:
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
};

#endif // EVENTLABEL_H
