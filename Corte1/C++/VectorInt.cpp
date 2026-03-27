// clase para manejar un vector de enteros fijo
#include <iostream>
using namespace std;

class ArregloEnteros {
public:
    static const int TAM = 5;
    int numeros[TAM];

    // cargar valores de ejemplo
    void cargarDatos() {
        numeros[0] = 7;
        numeros[1] = 14;
        numeros[2] = 21;
        numeros[3] = 28;
        numeros[4] = 35;
    }

    // suma de los elementos
    int calcularSuma() {
        int suma = 0;
        for (int i = 0; i < TAM; i++) {
            suma += numeros[i];
        }
        return suma;
    }

    // calcula el promedio
    double calcularPromedio() {
        if (TAM > 0) {
            return (double)calcularSuma() / TAM;
        }
        return 0.0;
    }

    // muestra el vector
    void mostrar() {
        for (int i = 0; i < TAM; i++) {
            cout << numeros[i] << " ";
        }
        cout << "\n";
    }
};

int main() {

    ArregloEnteros vec1;

    vec1.cargarDatos();

    vec1.mostrar();

    int suma = vec1.calcularSuma();

    if (suma > 0) {
        cout << "Suma total = " << suma << "\n";
        cout << "Promedio = " << vec1.calcularPromedio() << "\n";
    } else {
        cout << "No hay datos validos\n";
    }

    return 0;
}