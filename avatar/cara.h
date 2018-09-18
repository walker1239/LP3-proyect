#ifndef CARA_H
#define CARA_H
#include <QPainter>



class Cara
{
    protected:

        QString Nombre;
        QString Ruta;
        int xcord;
        int ycord;


public:

    Cara(int x, int y);
    virtual ~Cara(){}
    int getx();
    void setx(int _xcord);
    int gety();
    void sety(int _ycord);
    virtual void drawMe(QPainter *DrawHere)=0;
    static Cara* crearCara(int i);



};
#endif // CARA_H
