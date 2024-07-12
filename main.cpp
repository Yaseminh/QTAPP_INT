#include "QtWidgetsApplication_.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtWidgetsApplication_ w;
    w.show();
    return a.exec();
}
