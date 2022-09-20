#include "Guest.h"

#include <iostream>

Guest::Guest(){
    infoHospital = "";
    city = "";
}

void Guest::printDataGuest() {
    cout << "Info Hospital: " << infoHospital << "\n";
    cout << "City: " << city << "\n";
}

string Guest::getInfoHospital() {
    return infoHospital;
}

void Guest::setInfoHospital() {
    Guest::infoHospital = infoHospital;
}

string Guest::getCity() {
    return city;
}

void Guest::setCity() {
    Guest::city = city;
}

