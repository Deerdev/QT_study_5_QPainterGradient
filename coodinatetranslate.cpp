#include "coodinatetranslate.h"
#include <QPainter>
#include"eventlabel.h"
#include <QVBoxLayout>

coodinatetranslate::coodinatetranslate(QWidget *parent) :
    QWidget(parent)
{
    setMinimumSize(400,400);
    setMaximumSize(400,400);
   // resize(400,400);
    setWindowTitle(tr("Paint Gredient"));
    QLabel *aa = new QLabel(this);
    //aa->setText("test");
    aa->resize(100,100);
    //aa->setStyleSheet("border: 1px groove gray; border-radius: 5px; background-color: rgba(255, 193, 245, 0%); ");

    tlabel = new EventLabel(aa);
    tlabel->QLabel::setStyleSheet("border: 1px groove gray; border-radius: 5px; background-color: rgba(255, 193, 245, 0%); ");
    tlabel->QLabel::resize(300,300);
    tlabel->QLabel::setMouseTracking(true);
//    QVBoxLayout *bvv = new QVBoxLayout;
//    bvv->addWidget(tlabel);
//    setLayout(bvv);


}

void coodinatetranslate::paintEvent(QPaintEvent *)
{

        QPainter painter(this);
        painter.setViewport(0, 0, 200, 200);
        painter.fillRect(0, 0, 200, 200, Qt::red);


}


