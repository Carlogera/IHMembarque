#ifndef CLOCK_H
#define CLOCK_H

#include <QLCDNumber>
#include <QTime>
#include <QTimer>

class Clock : public QLCDNumber
{
    Q_OBJECT
public:
    explicit Clock(QWidget *parent = 0);

    QTime getTime(void) {return time;}
    void setTime(QTime t);

private slots:
    void ticTac();

private :
    QLCDNumber *lcd;
    QTime time;
};

#endif // CLOCK_H
