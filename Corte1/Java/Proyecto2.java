class Persona {
    String nombre;
    int edad;
    String ciudad;

    Persona(String n, int e, String c) {
        nombre = n;
        edad = e;
        ciudad = c;
    }

    void saludar() {
        System.out.println(
            "Hola, mi nombre es " + nombre +
            ", tengo " + edad +
            " años y soy de " + ciudad + "."
        );
    }
}

public class Main {
    public static void main(String[] args) {

        Persona p1 = new Persona("Laura", 20, "Bogotá");
        Persona p2 = new Persona("Samuel", 28, "Cali");
        Persona p3 = new Persona("Mariana", 17, "Medellín");

        Persona[] lista = {p1, p2, p3};

        for (Persona p : lista) {
            if (p.edad > 0) p.saludar();
            else System.out.println("Error en los datos de " + p.nombre);
        }
    }
}