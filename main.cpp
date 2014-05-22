#include "gredientwidget.h"
#include "linegredient.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GredientWidget w;
    w.show();
    linegredient w2;
    w2.show();
    return a.exec();
}
