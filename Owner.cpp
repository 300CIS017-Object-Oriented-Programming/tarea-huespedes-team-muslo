#include "Owner.h"
#include <iostream>

Owner::Owner(){
    isFree = false;
    points = 0;
    home = nullptr;
}

void Owner::printData(){

    if(isFree){
        cout << "\n********************\nAVAILABLE\n";
    }
    else{
        cout << "\n********************\nUNAVAILABLE\n";
    }

    printPersonData();

    cout << "Score: " << points << "\n";
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

