class Animal:
    def __init__(self, name ='', age = '', species = ''):
        self.name = name
        self.age = age
        self.species = species
        
    def speak(self):
        print("Something!")
        
    def read(self):
        self.name = input("Nhập tên: ")
        self.age = input("Nhập tuổi: ")
        self.species = input("Nhập loài: ")

class Dog(Animal):
    def speak(self):
        print("Gâu gâu!")
        

class Cat(Animal):
    def speak(self):
        print("Mewu mewu!")
    
class Bird(Animal):
    def speak(self):
        print("Chip chip!")
        
# dog = Dog("A", "1", "Dog")
# cat = Cat("B", "2", "Cat")
# bird = Bird("C", "3", "Bird")

dog = Dog()
dog.read()
cat = Cat()
cat.read()
bird = Bird()
bird.read()

dog.speak()
cat.speak()
bird.speak()