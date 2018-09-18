#ifndef OJOSFELISES_H
#define OJOSFELISES_H
#include <QPainter>
#include "ojos.h"
class ojosfelises: public Ojos
{
public:
    int _x;
    int _y;
    ojosfelises(int x,int y):Ojos(x,y){
        _x=x;
        _y=y;
    }
    void drawMe(QPainter *DrawHere){
      QImage image1 ("C:/Users/Zaynifer Manrique/Documents/build-avatar-Desktop_Qt_5_6_2_MSVC2015_32bit-Debug/ojos_sexys.png");
      DrawHere->drawImage(_x,_y,image1);
    }
};
#endif // OJOSFELISES_H
