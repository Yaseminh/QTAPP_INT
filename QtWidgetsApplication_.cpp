#include "QtWidgetsApplication_.h"

QtWidgetsApplication_::QtWidgetsApplication_(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    // random number for label_3
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    // QLabel
    ui.label_3->setText(QString::number(std::rand() % 100)); // 0-99 
    ui.label_4->setText(QString::number(std::rand() % 100)); // 0-99 
}

QtWidgetsApplication_::~QtWidgetsApplication_()
{}
