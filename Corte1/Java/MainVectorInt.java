class ArregloEnteros {
    public static final int TAM = 5;
    int numeros[] = new int[TAM];

    // carga de datos
    void cargarDatos() {
        numeros[0] = 7;
        numeros[1] = 14;
        numeros[2] = 21;
        numeros[3] = 28;
        numeros[4] = 35;
    }

    // suma
    int calcularSuma() {
        int suma = 0;
        for (int i = 0; i < TAM; i++) {
            suma += numeros[i];
        }
        return suma;
    }

    // promedio
    double calcularPromedio() {
        if (TAM > 0) {
            return (double) calcularSuma() / TAM;
        }
        return 0.0;
    }

    // mostrar
    void mostrar() {
        for (int i = 0; i < TAM; i++) {
            System.out.print(numeros[i] + " ");
        }
        System.out.println();
    }
}

public class Main {
    public static void main(String[] args) {

        ArregloEnteros vec1 = new ArregloEnteros();

        vec1.cargarDatos();

        vec1.mostrar();

        int suma = vec1.calcularSuma();

        if (suma > 0) {
            System.out.println("Suma total = " + suma);
            System.out.println("Promedio = " + vec1.calcularPromedio());
        } else {
            System.out.println("No hay datos válidos");
        }
    }
}