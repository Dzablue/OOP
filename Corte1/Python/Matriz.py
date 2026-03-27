class Cuadro2x2:
    def __init__(self):
        self.valores = [[0, 0], [0, 0]]

    def cargar(self):
        self.valores[0][0] = 4
        self.valores[0][1] = 6
        self.valores[1][0] = 2
        self.valores[1][1] = 8

    def mostrar(self):
        for fila in self.valores:
            print(fila[0], fila[1])

    def sumar(self):
        suma = 0
        for i in range(2):
            for j in range(2):
                suma += self.valores[i][j]
        return suma


# programa principal
tabla = Cuadro2x2()

tabla.cargar()
tabla.mostrar()

resultado = tabla.sumar()

if resultado > 0:
    print("Suma total =", resultado)
else:
    print("Suma no valida")