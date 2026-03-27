#include <iostream>
#include <string>
using namespace std;

class Usuario {
public:
    string nombreCompleto;
    int años;

    // metodo para mostrar datos
    void imprimir() {
        cout << "Nombre = " << nombreCompleto << "\n";
        cout << "Edad = " << años << "\n";
    }
};

int main() {

    // creacion de objetos
    Usuario personaA;
    Usuario personaB;

    // asignacion de valores
    personaA.nombreCompleto = "Sebastian";
    personaA.años = 20;

    personaB.nombreCompleto = "Laura";
    personaB.años = 16;

    // validacion de edad
    if (personaA.años >= 18) {
        cout << "Persona A es mayor de edad\n";
    } else {
        cout << "Persona A es menor de edad\n";
    }

    cout << "\n";

    if (personaB.años >= 18) {
        cout << "Persona B es mayor de edad\n";
    } else {
        cout << "Persona B es menor de edad\n";
    }

    cout << "\nDatos persona A:\n";
    personaA.imprimir();

    cout << "\nDatos persona B:\n";
    personaB.imprimir();

    return 0;
}