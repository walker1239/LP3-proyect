#ifndef OJOSENOJADOS_H
#define OJOSENOJADOS_H
#include <QPainter>
#include "ojos.h"
class ojosenojados: public Ojos
{
public:
    int _x;
    int _y;
    ojosenojados(int x,int y):Ojos(x,y){
        _x=x;
        _y=y;
    }
    void drawMe(QPainter *DrawHere){
      QImage image1 ("C:/Users/Walker Manrique/Documents/lenguaje de programacion/build-si-Desktop_Qt_5_2_0_MinGW_32bit-Debug/enojado.png");
      DrawHere->drawImage(_x,_y,image1);
    }
};
#endif // OJOSENOJADOS_H
