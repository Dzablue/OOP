public class PersonaSimple {

    public String nombre;
    public int edad;

    public void mostrar() {
        System.out.println("Nombre = " + nombre);
        System.out.println("Edad = " + edad);
    }

    public static void main(String[] args) {

        PersonaSimple p1 = new PersonaSimple();
        PersonaSimple p2 = new PersonaSimple();

        p1.nombre = "Andres";
        p1.edad = 30;

        p2.nombre = "Daniela";
        p2.edad = 15;

        if (p1.edad >= 18) {
            System.out.println("Persona 1 es mayor de edad");
        } else {
            System.out.println("Persona 1 es menor de edad");
        }

        System.out.println();

        if (p2.edad >= 18) {
            System.out.println("Persona 2 es mayor de edad");
        } else {
            System.out.println("Persona 2 es menor de edad");
        }

        System.out.println("\nDatos persona 1:");
        p1.mostrar();

        System.out.println("\nDatos persona 2:");
        p2.mostrar();
    }
}