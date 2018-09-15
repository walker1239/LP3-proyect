#ifndef BOCA_H
#define BOCA_H
#include <QPainter>
#include<iostream>
using namespace std;
class boca
{
protected:

        QString Nombre;
        QString Ruta;
        double xcord;
        double ycord;
public:
    boca(double x, double y);
    double getx();
    double setx(double _xcord);
    double gety();
    double sety(double _ycord);
    virtual void drawMe(QPainter *DrawHere)=0;
};

#endif // BOCA_H
