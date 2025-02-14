"""a Python program to check if a number is prime using if_else. """
# If-Else Conditions

num = int(input("Enter a number: "))
if num > 10:
    print("Number is greater than 10")
elif num < 10:
    print("Number is less than 10")
else:
    print("Number is equal to 10")


#  Prime number check
num = int(input("Enter a number: "))
if num > 1:
    for i in range(2, num):
        if num % i == 0:
            print(num, "is not a prime number")
            break
    else:
        print(num, "is a prime number")
else:
    print(num, "is not a prime number")


# Grade Calculation
percentage = float(input("Enter your percentage: "))
if percentage >= 90:
    grade = "A"
elif percentage >= 75:
    grade = "B"
elif percentage >= 50:
    grade = "C"
else:
    grade = "F"
print("Grade:", grade)

# Blood Donation Eligibility using a nested if else
age = int(input("Enter your age: "))
weight = float(input("Enter your weight (kg): "))
if age >= 18:
    if weight >= 50:
        print("Eligible to donate blood")
    else:
        print("Not eligible due to weight")
else:
    print("Not eligible due to age")