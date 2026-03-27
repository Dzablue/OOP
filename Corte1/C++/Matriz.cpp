// clase para manejar una matriz 2x2
#include <iostream>
using namespace std;

class Tabla2x2 {
public:
    int matriz[2][2];

    // cargar valores diferentes
    void llenar() {
        matriz[0][0] = 3;  matriz[0][1] = 7;
        matriz[1][0] = 1;  matriz[1][1] = 9;
    }

    // mostrar matriz
    void imprimir() {
        for (int f = 0; f < 2; f++) {
            for (int c = 0; c < 2; c++) {
                cout << matriz[f][c] << " ";
            }
            cout << "\n";
        }
    }

    // sumar elementos
    int sumarElementos() {
        int suma = 0;
        for (int f = 0; f < 2; f++) {
            for (int c = 0; c < 2; c++) {
                suma += matriz[f][c];
            }
        }
        return suma;
    }
};

int main() {

    Tabla2x2 tablaA;

    tablaA.llenar();

    tablaA.imprimir();

    int total = tablaA.sumarElementos();

    if (total > 0) {
        cout << "Suma total = " << total << "\n";
    } else {
        cout << "Resultado no válido\n";
    }

    return 0;
}