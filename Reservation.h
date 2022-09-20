#ifndef TAREA_HUESPEDES_TEAM_MUSLO_RESERVATION_H
#define TAREA_HUESPEDES_TEAM_MUSLO_RESERVATION_H

#include <iostream>
#include "Owner.h"
#include "Guest.h"


using std::cout;
using std::cin;
using std::string;

class Reservation{
private:
    double id;
    string startDate;
    string endDate;
    Owner *owner;
    Guest *guest;

public:
    Reservation();

    void printData();

    void setStartDate(string startDate);

    string getStartDate();

    void setEndDate(string endDate);
    string getEndDate();

    void setOwner(Owner *owner);
    Owner* getOwner();

    void setGuest(Guest *guest);
    Guest* getGuest();

    void setId(double id);
    double getId();


};

#endif //TAREA_HUESPEDES_TEAM_MUSLO_RESERVATION_H
