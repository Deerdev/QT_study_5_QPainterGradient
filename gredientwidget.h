#ifndef GREDIENTWIDGET_H
#define GREDIENTWIDGET_H

#include <QWidget>

class GredientWidget : public QWidget
{
    Q_OBJECT

public:
    GredientWidget(QWidget *parent = 0);
    ~GredientWidget();
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // GREDIENTWIDGET_H
