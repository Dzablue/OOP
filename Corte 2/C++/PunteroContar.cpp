#include <iostream>
using namespace std;

class Contador {
private:
	// Atributo normal pertenece a cada objeto 
	int contadorDelObjeto;
	//Atributo static, pertenece a la clase, no es un objeto particular
	static int contadordelaClase;
	
public:
	Contador() {
		contadorDelObjeto = 0;
	}
	
	void contar (){
		contadorDelObjeto++;
		contadordelaClase++;
		
		cout<<"Contador del Objeto = "<< contadorDelObjeto <<"\n";
		cout<<" Contador de la Clase = " << contadordelaClase<< "\n";
		cout<<"------------------------"<< endl;
	}
};

//Definicion del Atributo static fuera de la clase
int Contador::contadordelaClase = 0;

int main(){
	Contador a;
	Contador b;
	
	a.contar();
	a.contar();
	b.contar();
	
	return 0;
}
