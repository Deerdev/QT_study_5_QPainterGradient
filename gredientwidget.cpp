#include "gredientwidget.h"
#include <QPainter>

GredientWidget::GredientWidget(QWidget *parent)
    : QWidget(parent)
{
    resize(400,300);
    setWindowTitle(tr("Paint Gredient"));
}

//线性渐变
/* void QGradient::setColorAt(qreal position,const QColor & color)
 * 把position位置的颜色设置成color。其中，position是一个0 - 1区间的数字。
 * 也就是说，position是相对于我们建立渐变对象时做的那个起始点和终止点区间
 * 的。比如这个线性渐变，就是说，在从(60, 50)到(200, 200)的线段上，在
 * 0.2，也就五分之一处设置成白色，在0.6也就是五分之三处设置成绿色，在1.0
 * 也就是终点处设置成黑色。
 * 再创建QBrush时，把这个渐变对象传递进去
 */
void GredientWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing,true);
    QLinearGradient lineargradient(60,50,200,200);      //线性渐变从(60,50)到(200,200)
    lineargradient.setColorAt(0.2,Qt::white);
    lineargradient.setColorAt(0.6,Qt::green);
    lineargradient.setColorAt(1.0,Qt::black);
    painter.setBrush(QBrush(lineargradient));           //填充线性渐变
    painter.drawEllipse(50,50,200,150);                 //画椭圆
}

GredientWidget::~GredientWidget()
{

}
