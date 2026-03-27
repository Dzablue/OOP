class Articulo:
    # constructor por defecto
    def __init__(self, nombre="Articulo generico", costo=1000.0):
        self.nombre = nombre
        self.costo = costo

    # metodo para mostrar datos
    def mostrar(self):
        print(f"Nombre = {self.nombre}")
        print(f"Costo = {self.costo}")


# creación de objetos equivalentes
a1 = Articulo()
a2 = Articulo("Cuaderno")
a3 = Articulo("Lápiz", 800.0)

# validaciones simples
for art in [a1, a2, a3]:
    if art.costo >= 0:
        art.mostrar()
        print()
    else:
        print("Error en los datos del artículo\n")