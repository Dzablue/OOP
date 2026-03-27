class Producto {
    String nombre;
    double precio;

    // constructor vacio
    Producto() {
        nombre = "Articulo estandar";
        precio = 500.0;
    }

    // constructor con nombre
    Producto(String nombre) {
        this.nombre = nombre;
        this.precio = 0.0;
    }

    // constructor completo
    Producto(String nombre, double precio) {
        this.nombre = nombre;
        this.precio = precio;
    }

    // metodo para mostrar datos
    void mostrar() {
        System.out.println("Nombre = " + nombre);
        System.out.println("Precio = " + precio);
    }
}

public class Main {
    public static void main(String[] args) {

        Producto prod1 = new Producto();
        Producto prod2 = new Producto("Resaltador amarillo");
        Producto prod3 = new Producto("Regla 30cm", 2500.0);

        if (prod1.precio >= 0) {
            prod1.mostrar();
        } else {
            System.out.println("Error producto 1");
        }

        System.out.println();

        if (prod2.precio >= 0) {
            prod2.mostrar();
        } else {
            System.out.println("Error producto 2");
        }

        System.out.println();

        if (prod3.precio >= 0) {
            prod3.mostrar();
        } else {
            System.out.println("Error producto 3");
        }
    }
}