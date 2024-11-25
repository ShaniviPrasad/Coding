class Animal:
    def __init__(self, name):
        self.name = name

    def sound(self):
        raise NotImplementedError("Subclass must implement abstract method")


class Dog(Animal):
    def __init__(self, name, breed):
        super().__init__(name)
        self.breed = breed

    def sound(self):
        return f"{self.name} says Woof!"

    def fetch(self):
        return f"{self.name} is playing with the ball!"


class Cat(Animal):
    def __init__(self, name, color):
        super().__init__(name)
        self.color = color

    def sound(self):
        return f"{self.name} says Meow!"

    def scratch(self):
        return f"{self.name} is scratching the pillow!"


def animal_sound(animal):
    if isinstance(animal, Animal):
        print(animal.sound())
    else:
        print("This is not an animal!")


# Test the function with both Dog and Cat objects
dog = Dog(name="jagu", breed="Golden Retriever")
cat = Cat(name="shivi", color="Black")

animal_sound(dog)  # Output: Buddy says Woof!
animal_sound(cat)  # Output: Whiskers says Meow!

# Testing specific methods
print(dog.fetch())  # Output: jag is playing the ball!
print(cat.scratch())  # Output: shivi is scratching the pillow!
