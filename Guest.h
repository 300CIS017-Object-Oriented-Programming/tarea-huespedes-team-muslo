#ifndef TAREA_HUESPEDES_TEAM_MUSLO_GUEST_H
#define TAREA_HUESPEDES_TEAM_MUSLO_GUEST_H

#include <iostream>

using std::cout;
using std::cin;
using std::string;

class Guest{
private:
    string infoHospital;
    string city;
public:
    Guest();

    void printDataGuest();

    string getInfoHospital();
    void setInfoHospital();

    string getCity();
    void setCity();
};

#endif //TAREA_HUESPEDES_TEAM_MUSLO_GUEST_H
