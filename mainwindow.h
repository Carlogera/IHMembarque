#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "control.h"

class Control;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

private :
    Control *control;

private slots:
    //void changementcouleur();
    //void changementepaisseur();
};


#endif // MAINWINDOW_H
