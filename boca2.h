#ifndef BOCA2_H
#define BOCA2_H
#include <QPainter>
#include "boca.h"
class boca2: public boca
{
public:
    boca2(double x,double y):boca(x,y){}
    void drawMe(QPainter *DrawHere){
      QImage boca2 (".png");
      DrawHere->drawImage(0,0,boca2);
    }
};

#endif // BOCA2_H
