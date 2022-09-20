#include "Reservation.h"
#include <iostream>
Reservation::Reservation(){
    startDate = "";
    endDate = "";
    guest = nullptr;
    owner = nullptr;
    id = 0;
}

void Reservation::printData(){
    cout <<"\n********************\n";

    cout << "ID: " << id << "\n";
    cout << "Fecha de Inicio: " << startDate << "\n";
    cout << "Fecha Final: " << endDate << "\n";

    cout << "Huesped: " ;
    guest -> printDataGuest();

    cout << "Dueno: " ;
    owner -> printData();
}

void Reservation::setStartDate(string startDate){
    Reservation:: startDate = startDate;
}

string Reservation::getStartDate(){
    return startDate;
}

void Reservation::setEndDate(string endDate){
    Reservation::endDate = endDate;
}
string Reservation::getEndDate(){
    return endDate;
}

void Reservation::setOwner(Owner *owner){
    Reservation::owner = owner;
}
Owner* Reservation::getOwner(){
    return owner;
}

void Reservation::setGuest(Guest *guest){
    Reservation::guest = guest;
}
Guest* Reservation::getGuest(){
    return guest;
}

void  Reservation ::setId(double id){
    Reservation::id = id;
}
double Reservation::getId(){
    return id;
}
