#ifndef TAREA_HUESPEDES_TEAM_MUSLO_PROPIETARY_H
#define TAREA_HUESPEDES_TEAM_MUSLO_PROPIETARY_H

#include <iostream>
#include "Person.h"
#include "Home.h"

using std::cout;
using std::cin;
using std::string;

class Owner: private Person{
private:
    bool isFree;
    double points;
    Home *home;

public:

    bool getIsFree();
    void setIsFree(bool isFree);

    bool getPoints();
    void setPoints(double points);

    bool getHome();
    void setHome(Home* home);

};

#endif //TAREA_HUESPEDES_TEAM_MUSLO_PROPIETARY_H
