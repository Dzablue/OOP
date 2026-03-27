// clase para representar una persona
#include <iostream>
#include <string>
using namespace std;

class Persona {
public:
    string nombre;
    int edad;
    string ciudad;

    // metodo para saludar
    void saludar() {
        cout << "Hola, mi nombre es " << nombre 
             << ", tengo " << edad 
             << " años y soy de " << ciudad << ".\n";
    }
};

int main() {

    // creacion de objetos
    Persona p1, p2, p3;

    // asignacion de datos
    p1.nombre = "Laura";
    p1.edad = 20;
    p1.ciudad = "Bogota";

    p2.nombre = "Samuel";
    p2.edad = 28;
    p2.ciudad = "Cali";

    p3.nombre = "Mariana";
    p3.edad = 17;
    p3.ciudad = "Medellin";

    // validaciones
    if (p1.edad > 0) p1.saludar();
    else cout << "Error en p1\n";

    if (p2.edad > 0) p2.saludar();
    else cout << "Error en p2\n";

    if (p3.edad > 0) p3.saludar();
    else cout << "Error en p3\n";

    return 0;
}