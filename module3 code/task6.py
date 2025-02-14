# 6. Class and Object


class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

p1 = Person("Alice", 30)
print(f"Name: {p1.name}, Age: {p1.age}")



class MyClass:
    global_var = 10  # Global variable within the class

    def __init__(self):
        self.local_var = 5  # Local variable within the method

    def print_variables(self):
        print(f"Global variable: {MyClass.global_var}")
        print(f"Local variable: {self.local_var}")

obj = MyClass()
obj.print_variables()
