#include <iostream>
#include "Application.h"

using std::cout;
using std::cin;
using std::string;

void menu(Application & application) {
    int opc = 0;
    do {
        cout << "\n" << "BIENVENIDOS Al proyecto que hicimos\n";
        cout << "1. Agregar propietario \n";
        cout << "2. Imprimir propietarios \n";
        cout << "3. Agregar mascota \n";
        cout << "4. Imprimir mascotas libres \n";
        cout << "5. Adoptar Mascota\n";
        cout << "6. Sacrificar Mascota\n";
        cout << "7. Mostrar Muertes\n";



        cout << "0. Salir\n";
        cout << "opc: ";
        cin >> opc;
        cout << "\n";
        switch (opc) {
            case 1:
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
