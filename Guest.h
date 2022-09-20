#ifndef TAREA_HUESPEDES_TEAM_MUSLO_GUEST_H
#define TAREA_HUESPEDES_TEAM_MUSLO_GUEST_H

#include <iostream>
#include "Person.h"

using std::cout;
using std::cin;
using std::string;

class Guest: public Person{
private:
    string infoHospital;
    string city;
public:
    Guest();

    void printDataGuest();

    string getInfoHospital();
    void setInfoHospital(string infoHospital);

    string getCity();
    void setCity(string city);
};

#endif //TAREA_HUESPEDES_TEAM_MUSLO_GUEST_H
