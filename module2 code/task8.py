#8. Functions
def print_string(s):
    print(s)

print_string("HELLO THIS IS STRING!!")

#Calculator using functions
def add(a, b):
    return a + b

def subtract(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a, b):
    return a / b if b != 0 else "Cannot divide by zero"

print(add(5, 3))
print(subtract(10, 4))
print(multiply(6, 2))
print(divide(8, 2))


# Lambda function with one expression
square = lambda x: x * x
print(square(5))

# Lambda function with two expressions (not directly supported, but you can combine them)
operate = lambda x, y: (x + y, x * y)  # Return a tuple of sum and product
result = operate(3,4)
print(result)