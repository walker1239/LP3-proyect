#ifndef OJOS_H
#define OJOS_H
#include <QPainter>
class Ojos
{
    protected:

        QString Nombre;
        QString Ruta;
        double xcord;
        double ycord;
public:
    Ojos(double x, double y);
    virtual ~Ojos(){}
    double getx();
    void setx(double _xcord);
    double gety();
    void sety(double _ycord);
    virtual void drawMe(QPainter *DrawHere)=0;
    static Ojos* crearOjos(int i);

};
#endif // OJOS_H