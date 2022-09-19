#include "Owner.h"
#include <iostream>

bool Owner::getIsFree(){
    return isFree;
}
void Owner::setIsFree(bool isFree){
    Owner::isFree = isFree;
}

bool Owner::getPoints(){
    return points;
}
void Owner::setPoints(double points){
    Owner::points = points;
}

bool Owner::getHome(){
    return home;
}
void Owner::setHome(Home* home){
    Owner::home = home;
}

