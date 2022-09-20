#include "Application.h"
#include <iostream>

Application :: Application(){
    cout << "       Construyendo APP\n";
    idReserva=1;
    idEvaluation=1;

    inicializarDatos();
} //Constructor

void Application::inicializarDatos() {
    auto *owner1 = new Owner();
    auto *owner2 = new Owner();
    auto *guest1 = new Guest();


    owner1->setId(1005);
    owner1->setName("Johnier");
    owner1->setSex(true);
    owner1->setBirthDate("Marzo 3 2005");
    owner1->setIsFree(true);
    owner1->setPoints(0);
    owner1->setHome(nullptr);

    owner2->setId(1006);
    owner2->setName("Blazon");
    owner2->setSex(false);
    owner2->setBirthDate("Marzo 4 2205");
    owner2->setIsFree(true);
    owner2->setPoints(0);
    owner2->setHome(nullptr);

    guest1->setId(1007);
    guest1->setName("calvin");
    guest1->setSex(false);
    guest1->setBirthDate("uno 3 2005");
    guest1->setInfoHospital("valle de lili");
    guest1->setCity("ypal");

    owners[1005] = owner1;
    owners[1006] = owner2;

    guests[1007] = guest1;


}

void Application::addHome(){
    double idIndex;
    cout <<"Introduzca el ID del Dueño\n";
    cin >> idIndex;

    if(owners.find(idIndex) == owners.end()){
        cout << "Ese propietario no se encuentra en la lista de propietarios, Porfavor revise que sus datos esten correctos antes de ingresarlos al sistema porfavor\n";
    }
    else{
        Home* newHome = new Home();

        createHome(newHome);

        owners[idIndex]->setHome(newHome);
    }
}

void Application::printAllPeople() {
    for(auto itr:owners){
        itr.second->printData();
    }
    for(auto itr:guests){
        itr.second->printDataGuest();
    }
}

void Application::printReservations(){
    for(auto itr:reservations){
        itr.second->printData();
    }
}


void Application::createHome(Home *newHome){
    string address;
    bool babies;
    int beds;
    string description;

    cout << "Introduzca la direccion\n";
    cin.ignore();
    getline(cin, address);
    cout << "Introduzca si la casa no discrimina contra bebes:\n  1 si bebes \n  0 no bebes\n";
    cin >> babies;

    cout << "Introduzca cuantas camas\n";
    cin >> beds;

    cout << "Introduzca la descripcion de la casa\n";
    cin.ignore();
    getline(cin, description);

    newHome ->setAddress(address);
    newHome ->setBabies(babies);
    newHome ->setBeds(beds);
    newHome ->setDescription(description);
}

void Application::addReservation(){
    double idOwnerIndex;
    double idGuestIndex;

    string startDate;
    string endDate;

    bool isValid = true;

    cout << "Introduzca el ID de el que esta haciendo la reserva: ";
    cin >> idGuestIndex;

    cout << "Introduzca el ID del Dueño de la propiedad: ";
    cin >> idOwnerIndex;

    if(owners.find(idOwnerIndex) == owners.end()){
        cout << "Ese propietario no se encuentra en la lista de propietarios, Porfavor revise que sus datos esten correctos antes de ingresarlos al sistema porfavor\n";
        isValid=false;
    }
    else{
        if(owners[idOwnerIndex] -> getIsFree() == false){
            cout << "Ya tiene una reserva\n";
            isValid = false;
        }

    }
    if(guests.find(idGuestIndex) == guests.end()){
        cout << "Ese huesped no se encuentra en la lista de huespedes, Porfavor revise que sus datos esten correctos antes de ingresarlos al sistema porfavor\n";
        isValid=false;
    }

    if(isValid){
        owners[idOwnerIndex] ->setIsFree(false);

        auto reservation = new Reservation();

        cout <<"Start Date:\n" ;
        cin.ignore();
        getline(cin, startDate);



        cout <<"End Date:\n" ;
        getline(cin, endDate);

        reservation ->setStartDate(startDate);
        reservation ->setEndDate(endDate);
        reservation ->setOwner(owners[idOwnerIndex]);
        reservation ->setGuest(guests[idGuestIndex]);
        reservation ->setId(idReserva);

        reservations[idReserva] = reservation;

        idReserva++;
    }
}

void Application::deleteReservation(){
    double idIndex;

    cout << "Introduce el ID de la reserva que quieras eliminar: \n";
    cin >> idIndex;

    if(reservations.find(idIndex) == reservations.end()){
        cout << "Esta reservacion no se encuentra en la lista de reservaciones, Porfavor revise que sus datos esten correctos antes de ingresarlos al sistema porfavor\n";
    }
    else
    {
        reservations[idIndex] -> getOwner() -> setIsFree(true);

       auto *deletedReservation = new Reservation();
       deletedReservation = reservations[idIndex];

       deletedReservation ->setOwner(nullptr);
       deletedReservation ->setGuest(nullptr);

       reservations.erase(idIndex);

       delete deletedReservation;
    }
}


Application :: ~Application() {

    for(auto itr: owners ){
        if (itr.second -> getHome() != nullptr){
            delete itr.second -> getHome();
        }
        delete itr.second;
    }

    for(auto itr:  guests){
        delete itr.second;
    }

    for(auto itr:  reservations){
        delete itr.second;
    }

    for(auto itr:  evaluations){
        delete itr.second;
    }
}

