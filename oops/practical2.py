class Concatenator:
    def __init__(self, string):
        self.string = string

    def __add__(self, other):
        if isinstance(other, Concatenator):
            return Concatenator(self.string + other.string)
        return NotImplemented

    def __str__(self):
        return self.string


# Example usage
string1 = Concatenator("Hello, ")
string2 = Concatenator("World!")

result = string1 + string2
print(result)  # Output: Hello, World!
