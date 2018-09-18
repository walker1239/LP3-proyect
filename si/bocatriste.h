#ifndef BOCATRISTE_H
#define BOCATRISTE_H
#include <QPainter>
#include "boca.h"
class bocatriste: public Boca
{
public:
    int _x;
    int _y;

    bocatriste(int x,int y):Boca(x,y){
        _x=x;
        _y=y;
    }
    void drawMe(QPainter *DrawHere){
      QImage image1 ("C:/Users/Walker Manrique/Documents/lenguaje de programacion/build-si-Desktop_Qt_5_2_0_MinGW_32bit-Debug/boca_triste.png");
      DrawHere->drawImage(_x,_y,image1);
    }
};
#endif // BOCATRISTE_H
