"""Write a Python program to skip 'banana' in a list using the continue statement. List1 = ['apple', 'banana', 'mango'] 
Practical Example: 2) Write a Python program to stop the loop once 'banana' is found using the break statement. 
Write a Python program to demonstrate string slicing.  
Write a Python program that manipulates and prints strings using various string methods. 
Write a Python program to apply the map() function to square a list of numbers.  
Write a Python program that uses reduce() to find the product of a list of numbers. 
Write a Python program that filters out even numbers using the filter() function. 
"""
List1 = ['apple', 'banana', 'mango']

# 1. Skip 'banana'
for fruit in List1:
    if fruit == 'banana':
        continue
    print(fruit)

# 2. Stop at 'banana'
for fruit in List1:
    if fruit == 'banana':
        break
    print(fruit)

# String Slicing (Demonstrated above)

# String Methods
text = "This is a string."
print(text.upper())
print(text.replace("string", "sentence"))

# Map, Reduce, Filter

numbers = [1, 2, 3, 4, 5]

# Map (squaring)
squared_numbers = list(map(lambda x: x**2, numbers))
print(squared_numbers)

# Reduce (product)
from functools import reduce
product = reduce(lambda x, y: x * y, numbers)
print(product)

# Filter (even numbers)
even_numbers = list(filter(lambda x: x % 2 == 0, numbers))
print(even_numbers)