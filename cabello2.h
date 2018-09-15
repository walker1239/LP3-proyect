#ifndef CABELLO2_H
#define CABELLO2_H
#include <QPainter>
#include "cabello.h"
class cabello2: public cabello
{
public:
    cabello2(double x,double y):cabello(x,y){}
    void drawMe(QPainter *DrawHere){
      QImage cabello2 (".png");
      DrawHere->drawImage(0,0,cabello2);
    }
};

#endif // cCABELLO2_H
