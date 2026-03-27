class Articulo {
    String nombre;
    double costo;

    // constructor por defecto
    Articulo() {
        nombre = "Articulo generico";
        costo = 1000.0;
    }

    // constructor con solo nombre
    Articulo(String nombre) {
        this.nombre = nombre;
        this.costo = 1500.0;
    }

    // constructor completo
    Articulo(String nombre, double costo) {
        this.nombre = nombre;
        this.costo = costo;
    }

    // metodo para mostrar datos
    void mostrar() {
        System.out.println("Nombre = " + nombre);
        System.out.println("Costo = " + costo);
    }
}

public class Main {
    public static void main(String[] args) {

        Articulo a1 = new Articulo();
        Articulo a2 = new Articulo("Cuaderno");
        Articulo a3 = new Articulo("Lapiz", 800.0);

        if (a1.costo >= 0) a1.mostrar();
        else System.out.println("Error en articulo 1\n");

        System.out.println();

        if (a2.costo >= 0) a2.mostrar();
        else System.out.println("Error en articulo 2\n");

        System.out.println();

        if (a3.costo >= 0) a3.mostrar();
        else System.out.println("Error en articulo 3\n");
    }
}