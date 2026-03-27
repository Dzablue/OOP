class ArregloEnteros:
    TAM = 5

    def __init__(self):
        self.numeros = [0] * self.TAM

    # cargar datos
    def cargarDatos(self):
        self.numeros[0] = 7
        self.numeros[1] = 14
        self.numeros[2] = 21
        self.numeros[3] = 28
        self.numeros[4] = 35

    # suma
    def calcularSuma(self):
        return sum(self.numeros)

    # promedio
    def calcularPromedio(self):
        if self.TAM > 0:
            return self.calcularSuma() / self.TAM
        return 0.0

    # mostrar
    def mostrar(self):
        print(*self.numeros)

# programa principal
vec1 = ArregloEnteros()

vec1.cargarDatos()

vec1.mostrar()

suma = vec1.calcularSuma()

if suma > 0:
    print("Suma total =", suma)
    print("Promedio =", vec1.calcularPromedio())
else:
    print("No hay datos validos")