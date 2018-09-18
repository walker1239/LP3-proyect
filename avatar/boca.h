#ifndef BOCA_H
#define BOCA_H
#include <QPainter>

class Boca
{
    protected:

        QString Nombre;
        QString Ruta;
        double xcord;
        double ycord;


public:
    Boca(double x, double y);
    virtual ~Boca(){}
    double getx();
    void setx(double _xcord);
    double gety();
    void sety(double _ycord);
    virtual void drawMe(QPainter *DrawHere)=0;
    static Boca* crearBoca(int i);

};
#endif // CARA_H
