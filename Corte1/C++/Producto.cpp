// clase para representar un articulo
#include <iostream>
#include <string>
using namespace std;

class Articulo {
public:
    string nombre;
    double costo;

    // constructor por defecto
    Articulo() {
        nombre = "Articulo generico";
        costo = 1000.0;
    }

    // constructor con solo nombre
    Articulo(string nombre) {
        this->nombre = nombre;
        this->costo = 1500.0;
    }

    // constructor completo
    Articulo(string nombre, double costo) {
        this->nombre = nombre;
        this->costo = costo;
    }

    // metodo para mostrar datos
    void mostrar() {
        cout << "Nombre = " << nombre << "\n";
        cout << "Costo = " << costo << "\n";
    }
};

int main() {

    Articulo a1;
    Articulo a2("Cuaderno");
    Articulo a3("Lapiz", 800.0);

    if (a1.costo >= 0) a1.mostrar();
    else cout << "Error en articulo 1\n";

    cout << "\n";

    if (a2.costo >= 0) a2.mostrar();
    else cout << "Error en articulo 2\n";

    cout << "\n";

    if (a3.costo >= 0) a3.mostrar();
    else cout << "Error en articulo 3\n";

    return 0;
}