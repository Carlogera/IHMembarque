#include "clock.h"

Clock::Clock(QWidget *parent) :
    QLCDNumber(parent)
{
    this->setSegmentStyle(QLCDNumber::Filled);
    this->setFixedSize(80, 25);
    this->time = QTime::currentTime();
    this->display(this->time.toString("hh:mm"));

    QTimer *timerC = new QTimer(this);
    timerC->start(1000);
    connect(timerC, SIGNAL(timeout()), this, SLOT(ticTac()));

}

void Clock::setTime(QTime t)
{
    this->time = t;
    this->display(this->time.toString("hh:mm"));
}

void Clock::ticTac()
{
    //QTime tictac = this->time.addSecs(60);
    QTime tictac = this->time.addSecs(1);
    setTime(tictac);
}
