#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication_.h"

class QtWidgetsApplication_ : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplication_(QWidget *parent = nullptr);
    ~QtWidgetsApplication_();

private:
    Ui::QtWidgetsApplication_Class ui;
};
