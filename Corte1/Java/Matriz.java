public class MatrizMini {
    private int[][] info = new int[2][2];

    // cargar datos
    public void cargarDatos() {
        info[0][0] = 10; info[0][1] = 20;
        info[1][0] = 5;  info[1][1] = 15;
    }

    // imprimir matriz
    public void mostrar() {
        for (int f = 0; f < 2; f++) {
            for (int c = 0; c < 2; c++) {
                System.out.print(info[f][c] + " ");
            }
            System.out.println();
        }
    }

    // sumar elementos
    public int sumarTodo() {
        int suma = 0;
        for (int f = 0; f < 2; f++) {
            for (int c = 0; c < 2; c++) {
                suma += info[f][c];
            }
        }
        return suma;
    }

    public static void main(String[] args) {

        MatrizMini obj = new MatrizMini();

        obj.cargarDatos();
        obj.mostrar();

        int suma = obj.sumarTodo();

        if (suma > 0) {
            System.out.println("Suma total = " + suma);
        } else {
            System.out.println("La suma no es valida");
        }
    }
}