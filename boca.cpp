#include "boca.h"
user* user::instance=0;
boca::boca(double x, double y)
{
    xcord=x;
    ycord=y;

}
boca* boca::get_instance(){
    if(!instance)
        instance=new boca ();
    return instance;
}
double boca::setx(double _xcord){
    xcord=_xcord;
}
double boca::getx(){
    return xcord;
}

double boca::sety(double _ycord){
    ycord=_ycord;
}
double boca::gety(){
    return ycord;
}
