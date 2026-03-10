print("Hola Mundo")

class Person:
    def __init__ (self):
        self.name =""
        self.age = 0
    
    #metodo (action)

    def say_hello(self):
        print(f"Hi, I´m {self.name} and I´m {self.age} years old.")

def main():
    #create an object
    p1=Person()

    #Assing attributes
    p1.name = "Ana"
    p1.age = 20

    #call method
    p1.say_hello()

if __name__ == "__main__":
    main()