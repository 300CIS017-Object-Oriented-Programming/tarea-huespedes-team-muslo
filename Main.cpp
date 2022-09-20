#include <iostream>
#include "Application.h"

using std::cout;
using std::cin;
using std::string;

void menu(Application & application) {
    int opc = 0;
    do {
        cout << "\n" << "BIENVENIDOS Al proyecto que hicimos\n";
        cout << "1. Agregar Casa a propietario \n";
        cout << "2. Imprimir todas las personas \n";
        cout << "3. Add reservation\n";
        cout << "4. Print reservations \n";
        cout << "5. Eliminar reserva\n";
        cout << "6. Añadir evaluacion\n";
        cout << "7. Mostrar Evaluaciones\n";



        cout << "0. Salir\n";
        cout << "opc: ";
        cin >> opc;
        cout << "\n";
        switch (opc) {
            case 1:
                application.addHome();
                break;

            case 2:
                application.printAllPeople();
                break;

            case 3:
                application.addReservation();
                break;

            case 4:
                application.printReservations();
                break;

            case 5:
                application.deleteReservation();
                break;

            case 6:
                application.addEvaluation();
                break;

            case 7:
                application.printEvaluations();
                break;

            default:
                break;
        }
    } while (opc != 0);
    cout << "Muchas Gracias Por Usar Nuestro programa, Vuelva Pronto!!!\n";
}

int main() {
    Application application;
    menu(application);
    return 0;
}
