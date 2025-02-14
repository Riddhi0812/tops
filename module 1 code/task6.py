
List1 = ['apple', 'banana', 'mango']

# 1. Print each fruit
for fruit in List1:
    print(fruit)

# 2. Length of each string
for fruit in List1:
    print(len(fruit))

# 3. Find a specific string
target_fruit = "banana"
for fruit in List1:
    if fruit == target_fruit:
        print(f"{target_fruit} found!")
        break

