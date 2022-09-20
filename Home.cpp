#include "Home.h"
#include <iostream>

void Home::setAddress(string newAddress){
    Home::address = newAddress;
}
string Home::getAddress(){
    return address;
}

void Home::setBeds(int beds){
    Home::beds = beds;
}
int Home::getBeds(){
    return beds;
}

void Home::setBabies(bool babies){
    Home::babies = babies;
}
bool Home::getBabies(){
    return babies;
}


void Home::setDescription(string descrpition){
    Home::description = descrpition;
}
string Home::getDescription(){
    return description;
}
