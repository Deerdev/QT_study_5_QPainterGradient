#ifndef LINEGREDIENT_H
#define LINEGREDIENT_H

#include <QWidget>



class linegredient : public QWidget
{
    Q_OBJECT

public:
    explicit linegredient(QWidget *parent = 0);
    ~linegredient();
protected:
    void paintEvent(QPaintEvent *event);


};

#endif // LINEGREDIENT_H
