#ifndef TAREA_HUESPEDES_TEAM_MUSLO_APPLICATION_H
#define TAREA_HUESPEDES_TEAM_MUSLO_APPLICATION_H

#include <iostream>
#include <unordered_map>
#include "Evaluation.h"
#include "Person.h"
#include "Reservation.h"
#include "Owner.h"
#include "Guest.h"

using std::cout;
using std::cin;
using std::string;
using std::unordered_map;

class Application {
private:
    int idReserva;
    int idEvaluation;

    unordered_map<double, Owner*> owners;
    unordered_map<double, Guest*> guests;
    unordered_map<int , Reservation*> reservations;
    unordered_map<int , Evaluation*> evaluations;

public:
    Application(); //Constructor
    virtual ~Application(); //Destructor

    void inicializarDatos();

    void addOwner();
    void addGuest();
    void addEvaluation();
    void addReservation();
    void addHome();
    void createHome(Home *newHome);

    void printAllPeople();
    void printReservations();
    void printEvaluations();

    void deleteReservation();

};


#endif //TAREA_HUESPEDES_TEAM_MUSLO_APPLICATION_H
