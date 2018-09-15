#ifndef CABELLO1_H
#define CABELLO1_H
#include <QPainter>
#include "cabello.h"
class cabello1: public cabello
{
public:
    cabello1(double x,double y):cabello(x,y){}
    void drawMe(QPainter *DrawHere){
      QImage cabello1 (".png");
      DrawHere->drawImage(0,0,cabello1);
    }
};

#endif // CABELLO1_H
