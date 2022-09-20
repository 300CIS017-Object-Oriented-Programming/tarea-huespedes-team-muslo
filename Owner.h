#ifndef TAREA_HUESPEDES_TEAM_MUSLO_PROPIETARY_H
#define TAREA_HUESPEDES_TEAM_MUSLO_PROPIETARY_H

#include <iostream>
#include "Person.h"
#include "Home.h"

using std::cout;
using std::cin;
using std::string;

class Owner: public Person{
private:
    bool isFree;
    double points;
    Home *home;

public:

    bool getIsFree();
    void setIsFree(bool isFree);

    double getPoints();
    void setPoints(double points);

    Home* getHome();
    void setHome(Home* home);

};

#endif //TAREA_HUESPEDES_TEAM_MUSLO_PROPIETARY_H
