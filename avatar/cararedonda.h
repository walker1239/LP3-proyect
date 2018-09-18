#ifndef CARAREDONDA_H
#define CARAREDONDA_H
#include <QPainter>
#include "cara.h"
class cararedonda: public Cara
{
public:
    int _x;
    int _y;
    cararedonda(int x,int y):Cara(x,y){
        _x=x;
        _y=y;
    }
    void drawMe(QPainter *DrawHere){
      QImage image1 ("C:/Users/Zaynifer Manrique/Documents/build-avatar-Desktop_Qt_5_6_2_MSVC2015_32bit-Debug/cara1.png");
      DrawHere->drawImage(_x,_y,image1);
    }

};
#endif // CARAREDONDA_H
