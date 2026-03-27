class Producto:
    # constructor con valores por defecto
    def __init__(self, nombre="Articulo estandar", precio=500.0):
        self.nombre = nombre
        self.precio = precio

    # metodo para mostrar informacion
    def mostrar(self):
        print(f"Nombre = {self.nombre}")
        print(f"Precio = {self.precio}")

# creacion de objetos (equivalentes a C++)
prod1 = Producto()
prod2 = Producto("Resaltador amarillo")
prod3 = Producto("Regla 30cm", 2500.0)

# validaciones
for p in [prod1, prod2, prod3]:
    if p.precio >= 0:
        p.mostrar()
        print()
    else:
        print("Error en el producto\n")