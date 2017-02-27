#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "plot.h"
#include <qwt_scale_engine.h>
#include <qlabel.h>
#include <qlayout.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    clk = new Clock(this);
    clk->move(235, 15);
    ui->labelDate->setText(QDate::currentDate().toString("ddd d MMMM yyyy"));

    colorAxe = Qt::white;
    colorCurve = Qt::blue;

    /*
    QwtPlot *plot = new QwtPlot(this);
    //plot->setAxisScale(2, 0, 30, 1);
    plot->move(100, 50);

    curve = new QwtPlotCurve("Curve");
    curve->setPen(* new QPen(colorCurve, 3, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

    grid = new QwtPlotGrid;
    grid->setPen(* new QPen(Qt::gray));
    grid->attach(plot);

    points = new QVector<QPointF>;
    points->push_back(QPointF(0.0,0.0));
    points->push_back(QPointF(0.3,0.0));
    points->push_back(QPointF(0.3,200.0));
    points->push_back(QPointF(0.5,200.0));
    points->push_back(QPointF(0.5,-200.0));
    points->push_back(QPointF(0.7,-200.0));
    points->push_back(QPointF(0.7,0.0));
    points->push_back(QPointF(0.9,0.0));
    points->push_back(QPointF(0.9,200.0));
    points->push_back(QPointF(1.1,200.0));
    points->push_back(QPointF(1.1,-200.0));
    points->push_back(QPointF(1.3,-200.0));
    points->push_back(QPointF(1.3,0.0));
    points->push_back(QPointF(1.5,0.0));
    points->push_back(QPointF(1.5,200.0));
    points->push_back(QPointF(1.7,200.0));
    points->push_back(QPointF(1.7,-200.0));
    points->push_back(QPointF(1.9,-200.0));
    points->push_back(QPointF(1.9,0.0));
    points->push_back(QPointF(2.1,0.0));
    points->push_back(QPointF(2.1,200.0));

    data = new QwtPointSeriesData;
    data->setSamples(*points);

    curve->setData(data);
    curve->attach(plot);
    plot->replot();
    */

    /*
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(myPlot, 0, 1);
    ui->simulation->setLayout(layout);
    */

    //----------NEW-CODE--------//
    const double intervalLength = 50.0; // seconds
    plot = new Plot(this);
    plot->setIntervalLength (intervalLength);
    plot->move(50,45);

    /*
    QHBoxLayout* layout1 = new QHBoxLayout();
    layout1->addWidget(ui->Colors);
    layout1->addWidget(ui->labelDate);
    layout1->addWidget(clk);
    layout1->addWidget(ui->progressBar);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addLayout(layout1);
    layout->addWidget(plot);
    */

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Colors_clicked()
{
    //colorsWindow = new Window(this);
    //colorsWindow->show();

}

void MainWindow::setColorAxe(QColor a)
{
    colorAxe = a;
}

void MainWindow::setColorCurve(QColor c)
{
    colorCurve = c;  
}

//----------NEW-CODE--------//
void MainWindow::start()
{
    plot->start();
}



