#ifndef BOCA1_H
#define BOCA1_H
#include <QPainter>
#include "boca.h"
class boca1: public boca
{
public:
    boca1(double x,double y):boca(x,y){}
    void drawMe(QPainter *DrawHere){
      QImage boca1 (".png");
      DrawHere->drawImage(0,0,boca1);
    }
};

#endif // BOCA1_H
