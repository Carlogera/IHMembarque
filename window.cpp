#include "window.h"
#include "ui_window.h"

Window::Window(MainWindow *mwin, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window)
{
    ui->setupUi(this);
    this->mw = mwin;
    this->colorAxe = mwin->getColorAxe();
    this->colorCurve = mwin->getColorCurve();

    checkBoxColors();
}

Window::~Window()
{
    delete ui;
}

void Window::on_buttonBox_accepted()
{
    mw->setColorAxe(this->colorAxe);
    mw->setColorCurve(this->colorCurve);
    mw->update();

}

void Window::on_axeBlue_clicked()
{
    colorAxe = Qt::blue;
}

void Window::on_axeRed_clicked()
{
    colorAxe = Qt::red;
}

void Window::on_axeWhite_clicked()
{
    colorAxe = Qt::white;
}

void Window::on_curveGreen_clicked()
{
    colorCurve = Qt::green;
}

void Window::on_curveYellow_clicked()
{
    colorCurve = Qt::yellow;
}

void Window::on_curveBlue_clicked()
{
    colorCurve = Qt::blue;
}

 void Window::checkBoxColors()
 {
     if (this->mw->getColorAxe() == Qt::blue)
     {
         ui->axeBlue->setChecked(true);
     }
     else if (this->mw->getColorAxe() == Qt::red)
     {
         ui->axeRed->setChecked(true);
     }
     else if (this->mw->getColorAxe() == Qt::white)
     {
         ui->axeWhite->setChecked(true);
     }

     if (this->mw->getColorCurve() == Qt::green)
     {
         ui->curveGreen->setChecked(true);
     }
     else if (this->mw->getColorCurve() == Qt::yellow)
     {
         ui->curveYellow->setChecked(true);
     }
     else if (this->mw->getColorCurve() == Qt::blue)
     {
         ui->curveBlue->setChecked(true);
     }

 }
