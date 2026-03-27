
#include <iostream>
#include <string>
using namespace std;

class CuentaBancaria {
private:
	string titular;
	double saldo;

public:
	// datos iniciales (constructor)
	CuentaBancaria(string titular, double saldoInicial) {
		this->titular = titular;
		this->saldo = saldoInicial;
	}

	// obtener titular
	string getTitular() {
		return titular;
	}

	// obtener saldo
	double getSaldo() {
		return saldo;
	}

	// metodo para depositar dinero
	void depositar(double monto) {
		if (monto > 0) {
			saldo += monto;
		} else {
			cout << "Monto invalido para deposito\n";
		}
	}

	// metodo para retirar dinero
	void retirar(double monto) {
		if (monto > 0 && monto <= saldo) {
			saldo -= monto;
		} else {
			cout << "No se puede retirar ese monto\n";
		}
	}

	// mostrar datos
	void mostrar() {
		cout << "Titular = " << titular << "\n";
		cout << "Saldo = " << saldo << "\n";
	}
};

int main() {

	// creacion del objeto
	CuentaBancaria objCuenta1("Sergio", 80000.0);

	// mostrar estado inicial
	objCuenta1.mostrar();

	// operaciones
	objCuenta1.depositar(15000.0);
	objCuenta1.retirar(5000.0);

	cout << "\nDespues de operaciones:\n";

	// validacion simple
	if (objCuenta1.getSaldo() >= 0) {
		objCuenta1.mostrar();
	} else {
		cout << "Error en saldo\n";
	}

	return 0;
}