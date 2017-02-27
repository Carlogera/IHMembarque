#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "window.h"
#include "clock.h"

#include <QMainWindow>
#include <QPushButton>
#include <QWidget>
#include <QColor>
#include <QString>
#include <QGraphicsView>
#include <QImage>
#include <QGridLayout>
#include <QTime>
#include <QDate>

/*
#include <qwt_plot.h>
#include <qwt_plot_curve.h>
#include <qwt_series_data.h>
#include <qwt_plot_grid.h>
*/

#include <qwidget.h>

class Plot;

namespace Ui {
class MainWindow;
}

class Window;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QColor getColorAxe(){return colorAxe;}
    QColor getColorCurve(){return colorCurve;}
    void setColorAxe(QColor a);
    void setColorCurve(QColor c);

    /*
    QImage *getMainImage(){ return mainImage; }
    QImage *getCurrentImage(){ return currentImage; }
    */

    //void paintEvent (QPaintEvent *event);

    //----------NEW-CODE--------//
    void start();


protected:

    //void paintEvent(QPaintEvent *event);

private slots:
    void on_Colors_clicked();

private:
    Ui::MainWindow *ui;
    Window *colorsWindow;
    Clock *clk;

    /*
    QImage *mainImage;
    QImage *currentImage;
    */

    QColor colorAxe;
    QColor colorCurve;

    /*
    QwtPlot *plot;
    QwtPlotCurve *curve;
    QwtPlotGrid *grid;
    QwtPointSeriesData *data;
    QVector<QPointF> *points;
    */

    //----------NEW-CODE--------//
    Plot *plot;




};

#endif // MAINWINDOW_H
