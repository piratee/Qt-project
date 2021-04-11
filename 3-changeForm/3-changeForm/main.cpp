#include "changeform.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    changeForm w;
    w.show();
    return a.exec();
}
