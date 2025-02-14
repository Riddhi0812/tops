
# 5. Exception Handling
# Handling division errors and invalid inputs
try:
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))
    print("Result:", num1 / num2)
except ZeroDivisionError:
    print("Error: Cannot divide by zero!")
except ValueError:
    print("Error: Enter numbers only!")

# File handling with exception handling
try:
    with open("nonexistent_file.txt", "r") as f:
        print(f.read())
except FileNotFoundError:
    print("Error: File not found.")

# Custom exception
class CustomError(Exception):
    pass

try:
    raise CustomError("Something went wrong!")
except CustomError as e:
    print("Custom Error:", e)
