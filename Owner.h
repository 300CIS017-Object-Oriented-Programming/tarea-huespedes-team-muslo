#ifndef TAREA_HUESPEDES_TEAM_MUSLO_PROPIETARY_H
#define TAREA_HUESPEDES_TEAM_MUSLO_PROPIETARY_H

#include <iostream>
#include "Person.h"

using std::cout;
using std::cin;
using std::string;

class Owner: private Person{
private:
    bool guests;

};

#endif //TAREA_HUESPEDES_TEAM_MUSLO_PROPIETARY_H
