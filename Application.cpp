#include "Application.h"
#include <iostream>

Application :: Application(){
    cout << "Construyendo APP";
    idReserva=1;
    idEvaluation=1;

    inicializarDatos();
} //Constructor

void Application::inicializarDatos() {
    auto *owner1 = new Owner();
    auto *owner2 = new Owner();

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

    owners[1005] = owner1;
    owners[1006] = owner2;
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



Application :: ~Application() {

    for(auto itr: owners ){
        delete itr.second;
        //FIXME: ADD DELETION FOR HOME WHEN IMPLEMENTED
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

