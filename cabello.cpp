#include "cabello.h"
cabello::cabello(double x,double y)
{
    xcord=x;
    ycord=y;

}
double cabello::setx(double _xcord){
    xcord=_xcord;
}
double cabello::getx(){
    return xcord;
}

double cabello::sety(double _ycord){
    ycord=_ycord;
}
double cabello::gety(){
    return ycord;
}

