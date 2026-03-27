public class CuentaSimple {
    private String propietario;
    private double saldo;

    public CuentaSimple(String prop, double saldoInicial) {
        this.propietario = prop;
        this.saldo = saldoInicial;
    }

    public String getPropietario() {
        return propietario;
    }

    public double getSaldo() {
        return saldo;
    }

    public void depositar(double monto) {
        if (monto > 0) {
            saldo += monto;
        } else {
            System.out.println("Monto inválido para depósito");
        }
    }

    public void retirar(double monto) {
        if (monto > 0 && monto <= saldo) {
            saldo -= monto;
        } else {
            System.out.println("No se puede retirar ese monto");
        }
    }

    public void mostrar() {
        System.out.println("Propietario = " + propietario);
        System.out.println("Saldo = " + saldo);
    }

    public static void main(String[] args) {

        CuentaSimple cuenta1 = new CuentaSimple("Carlos", 80000.0);

        cuenta1.mostrar();
        cuenta1.depositar(15000.0);
        cuenta1.retirar(5000.0);

        System.out.println("\nDespués de operaciones:");

        if (cuenta1.getSaldo() >= 0) {
            cuenta1.mostrar();
        } else {
            System.out.println("Error en saldo");
        }
    }
}