#include "control.h"

Control::Control(MainWindow *view, QWidget *parent) : QWidget(parent)
{
    model = new Model();
    this->view = view;

}
