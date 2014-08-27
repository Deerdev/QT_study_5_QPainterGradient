#ifndef COODINATETRANSLATE_H
#define COODINATETRANSLATE_H

#include <QWidget>
#include <QLabel>
#include"eventlabel.h"

class coodinatetranslate : public QWidget
{
    Q_OBJECT
public:
    explicit coodinatetranslate(QWidget *parent = 0);

signals:

public slots:
protected:
    void paintEvent(QPaintEvent *);


private:
    EventLabel *tlabel;


};

#endif // COODINATETRANSLATE_H
