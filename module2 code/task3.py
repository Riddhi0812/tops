
# 3.Working with Lists
my_list = [10, "Hello", 3.14, True, [1, 2, 3]]
#Iterate over a list using a for loop
for item in my_list:
    print(item)
#Sort a list using sort() and sorted()
numbers = [5, 2, 8, 1, 3]
numbers.sort()  # Sorts in place
print(numbers)

sorted_numbers = sorted(numbers, reverse=True)  # Returns sorted list in descending order
print(sorted_numbers)

# Inserting into an empty list
empty_list = []
for i in range(5):
    empty_list.append(i * 2)
print(empty_list)