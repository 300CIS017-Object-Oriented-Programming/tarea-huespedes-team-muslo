#ifndef TAREA_HUESPEDES_TEAM_MUSLO_PERSON_H
#define TAREA_HUESPEDES_TEAM_MUSLO_PERSON_H

#include <iostream>

using std::cout;
using std::cin;
using std::string;

class Person{
private:
    double id;
    string name;
    bool sex;
    string birthDate;

public:
    void printPersonData();

    double getId();
    void setId(double id);

    string getName();
    void setName(string name);

    bool getSex();
    void setSex(bool sex);

    string getBirthDate();
    void setBirthDate(string birthDate);

};

#endif //TAREA_HUESPEDES_TEAM_MUSLO_PERSON_H
