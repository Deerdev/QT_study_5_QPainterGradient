#include "linegredient.h"
#include <QPainter>

linegredient::linegredient(QWidget *parent) :
    QWidget(parent)
{
    resize(400,300);
    setWindowTitle(tr("Paint Gredient"));
}

void linegredient::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing,true);
    QLinearGradient lineargradient(60,50,200,200);      //线性渐变从(60,50)到(200,200)
    lineargradient.setColorAt(0.2,Qt::white);
    lineargradient.setColorAt(0.6,Qt::green);
    lineargradient.setColorAt(1.0,Qt::black);

    painter.setPen(QPen(QBrush(lineargradient),5));  //笔也可以填充
    painter.drawLine(50,50,200,150);                 //画椭圆
}

linegredient::~linegredient()
{

}
