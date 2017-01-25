#ifndef MODEL_H
#define MODEL_H

#include <QImage>

class Model
{
public:
    Model();
    QImage *image(){return mainimage;}
    QImage *hold(){return mainhold;}
private:

    QImage *mainimage;
    QImage *mainhold;
};
#endif // MODEL_H
