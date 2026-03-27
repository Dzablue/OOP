// clase sencilla para manejar productos
#include <iostream>
#include <string>
using namespace std;

class Producto {
public:
    string nombre;
    double precio;

    // constructor vacio
    Producto() {
        nombre = "Articulo estandar";
        precio = 500.0;
    }

    // constructor con solo nombre
    Producto(string nombre) {
        this->nombre = nombre;
        this->precio = 0.0;
    }

    // constructor completo
    Producto(string nombre, double precio) {
        this->nombre = nombre;
        this->precio = precio;
    }

    // imprime los datos del producto
    void mostrar() {
        cout << "Nombre = " << nombre << "\n";
        cout << "Precio = " << precio << "\n";
    }
};

int main() {

    // creo algunos productos de prueba
    Producto prod1;
    Producto prod2("Resaltador amarillo");
    Producto prod3("Regla 30cm", 2500.0);

    // muestro datos del primero
    if (prod1.precio >= 0) {
        prod1.mostrar();
    } else {
        cout << "Error producto 1\n";
    }

    cout << "\n";

    // muestro datos del segundo
    if (prod2.precio >= 0) {
        prod2.mostrar();
    } else {
        cout << "Error producto 2\n";
    }

    cout << "\n";

    // muestro datos del tercero
    if (prod3.precio >= 0) {
        prod3.mostrar();
    } else {
        cout << "Error producto 3\n";
    }

    return 0;
}