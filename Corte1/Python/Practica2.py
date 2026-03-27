class Persona:
    def __init__(self, nombre, edad, ciudad):
        self.nombre = nombre
        self.edad = edad
        self.ciudad = ciudad

    def saludar(self):
        print(f"Hola, mi nombre es {self.nombre}, tengo {self.edad} años y soy de {self.ciudad}.")


# creacion de objetos
p1 = Persona("Laura", 20, "Bogota")
p2 = Persona("Samuel", 28, "Cali")
p3 = Persona("Mariana", 17, "Medellin")

# validacion simple
for p in [p1, p2, p3]:
    if p.edad > 0:
        p.saludar()
    else:
        print(f"Error en los datos de {p.nombre}")