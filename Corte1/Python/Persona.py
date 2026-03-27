class Individuo:
    def __init__(self):
        self.nombre = ""
        self.edad = 0

    def mostrar(self):
        print("Nombre =", self.nombre)
        print("Edad =", self.edad)


# creacion de objetos
ind1 = Individuo()
ind2 = Individuo()

# asignacion de datos
ind1.nombre = "Mateo"
ind1.edad = 25

ind2.nombre = "Sara"
ind2.edad = 17

# validacion de edad
if ind1.edad >= 18:
    print("Individuo 1 es mayor de edad")
else:
    print("Individuo 1 es menor de edad")

print()

if ind2.edad >= 18:
    print("Individuo 2 es mayor de edad")
else:
    print("Individuo 2 es menor de edad")

print("\nDatos individuo 1:")
ind1.mostrar()

print("\nDatos individuo 2:")
ind2.mostrar()