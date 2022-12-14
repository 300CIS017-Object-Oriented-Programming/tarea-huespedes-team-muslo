#ifndef TAREA_HUESPEDES_TEAM_MUSLO_EVALUATION_H
#define TAREA_HUESPEDES_TEAM_MUSLO_EVALUATION_H

#include <iostream>
#include "Owner.h"
#include "Guest.h"

using std::cout;
using std::cin;
using std::string;

class Evaluation{

private:

    double id;
    string date;
    double score;
    string comment;
    Guest *guest;
    Owner *owner;

public:
    Evaluation();

    void printData();

    void setDate(string date);
    string getDate();

    void setScore(double score);
    double getScore();

    void setComment(string comment);
    string getComment();

    void setGuest(Guest* guest);
    Guest* getGuest();

    void setOwner(Owner* owner);
    Owner* getOwner();

    void setId(double id);
    double getId();

};


#endif //TAREA_HUESPEDES_TEAM_MUSLO_EVALUATION_H
