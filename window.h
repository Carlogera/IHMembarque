#ifndef WINDOW_H
#define WINDOW_H

#include "mainwindow.h"

#include <QDialog>
#include <QLabel>

class MainWindow;

namespace Ui {
class Window;
}

class Window : public QDialog
{
    Q_OBJECT

public:
    explicit Window(MainWindow *mw, QWidget *parent = 0);
    ~Window();

    QColor getColorAxeW(){return colorAxe;}
    QColor getColorCurveW(){return colorCurve;}

private slots:
    void on_buttonBox_accepted();
    void on_axeBlue_clicked();
    void on_axeRed_clicked();
    void on_axeWhite_clicked();
    void on_curveGreen_clicked();
    void on_curveYellow_clicked();
    void on_curveBlue_clicked();

    void checkBoxColors();

private:
    Ui::Window *ui;
    MainWindow *mw;

    QColor colorAxe;
    QColor colorCurve;
};

#endif // WINDOW_H
