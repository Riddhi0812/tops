#Method Overloading (Using default values)

class A:
    def fun(self, a=None, b=None):
        if a and b:
            print("Two arguments:", a, b)
        elif a:
            print("One argument:", a)
        else:
            print("No arguments")

obj = A()
obj.fun()
obj.fun(10)
obj.fun(10, 20)


#Method Overriding
class Parent:
    def show(self):
        print("Parent Class")

class Child(Parent):
    def show(self):  # Overriding method
        print("Child Class")

obj = Child()
obj.show()
