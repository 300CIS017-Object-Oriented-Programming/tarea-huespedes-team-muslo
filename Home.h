#ifndef TAREA_HUESPEDES_TEAM_MUSLO_HOME_H
#define TAREA_HUESPEDES_TEAM_MUSLO_HOME_H

#include <iostream>
using std::string;

class Home{
private:
    string address;
    int beds;
    bool babies;
    string description;
public:
    void setAddress(string newAddress);
    string getAddress();

    void setBeds(int beds);
    int getBeds();

    void setBabies(bool babies);
    bool getBabies();


    void setDescription(string description);
    string getDescription();
};

#endif //TAREA_HUESPEDES_TEAM_MUSLO_HOME_H
