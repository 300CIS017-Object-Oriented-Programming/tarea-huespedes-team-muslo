#include "Owner.h"
#include <iostream>

Owner::Owner(){
    isFree = false;
    points = 0;
    home = nullptr;
}


bool Owner::getIsFree(){
    return isFree;
}
void Owner::setIsFree(bool isFree){
    Owner::isFree = isFree;
}

double Owner::getPoints(){
    return points;
}
void Owner::setPoints(double points){
    Owner::points = points;
}

Home* Owner::getHome(){
    return home;
}
void Owner::setHome(Home* home){
    Owner::home = home;
}

