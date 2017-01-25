#ifndef CONTROL_H
#define CONTROL_H

#include "model.h"
#include "mainwindow.h"

class Model;
class MainWindow;

class Control : public QWidget
{
    Q_OBJECT
public:
    Control(MainWindow *view, QWidget *parent=0);

private:
    Model* model;
    MainWindow *view;
};

#endif // CONTROL_H
