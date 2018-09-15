#ifndef OJOSFELISES_H
#define OJOSFELISES_H
#include <QPainter>
#include "ojos.h"
class ojosfelises: public Ojos
{
public:
    ojosfelises(int x,int y):Ojos(x,y){}
    void drawMe(QPainter *DrawHere){
      QImage image1 (".png");
      DrawHere->drawImage(0,0,image1);
    }
};
#endif // OJOSFELISES_H
