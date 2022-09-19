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

    owner1 -> s;
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

