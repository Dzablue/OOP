public class Numero {//La clase es para crear un objeto


    private int numero; //Campos o Atributos 
    
//Constructores

    public Numero() {
    }
   
    //Parametro   cuando se tienes muchos constructortes se llama sobrecarga de constructores
   

    public Numero(int numero) {
        this.numero = numero;
    }
   
    //Metodos

    public int getNumero() {
        return numero;
    }



    public void setNumero(int numero) {
        this.numero = numero;
    } 

}
