import java.util.Scanner;

public class App {

//Logica del programa

    public static void main(String[] args)  {
        Numero numero1 = new Numero(6);
        Numero numero2 = new Numero(7);
        Numero suma = new Numero();
        Scanner teclado = new Scanner(System.in);

        int s = numero1.getNumero() + numero2.getNumero();
        suma.setNumero(s);


        System.out.println(suma.getNumero());
    }
}
