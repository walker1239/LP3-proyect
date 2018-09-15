#ifndef OJOSENOJADOS_H
#define OJOSENOJADOS_H
#include <QPainter>
#include "ojos.h"
class ojosenojados: public Ojos
{
public:
    ojosenojados(int x,int y):Ojos(x,y){}
    void drawMe(QPainter *DrawHere){
      QImage image1 (".png");
      DrawHere->drawImage(0,0,image1);
    }
};
#endif // OJOSENOJADOS_H
