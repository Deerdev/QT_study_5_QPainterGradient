#include "gredientwidget.h"
#include "linegredient.h"
#include "colorwheel.h"
#include <QApplication>
#include "coodinatetranslate.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    GredientWidget w;
//    w.show();
//    linegredient w2;
//    w2.show();
//    colorwheel w3;
//    w3.show();
    coodinatetranslate w4;
    w4.setMouseTracking(true);
    w4.show();
    return a.exec();
}
