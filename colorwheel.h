#ifndef COLORWHEEL_H
#define COLORWHEEL_H

#include <QWidget>

class colorwheel : public QWidget
{
    Q_OBJECT
public:
    explicit colorwheel(QWidget *parent = 0);

signals:

public slots:
protected:
    void paintEvent(QPaintEvent *);

};

#endif // COLORWHEEL_H
