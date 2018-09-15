#ifndef CABELLO_H
#define CABELLO_H
#include <iostream>
#include <QPainter>
using namespace std;
class cabello
{
private:
    QString Nombre;
    QString Ruta;
    double xcord;
    double ycord;
public:
    cabello(double x, double y);
    double getx();
    double setx(double _xcord);
    double gety();
    double sety(double _ycord);
    virtual void drawMe(QPainter *DrawHere)=0;
};

#endif // CABELLO_H

