
#7. Working with Dictionaries
my_dict = {"a": 1, "b": 2, "c": 3, "d": 4, "e": 5, "f": 6}
print(my_dict)
# Updating dictionary values
my_dict["c"] = 10
print(my_dict)

# Separating keys and values
keys = my_dict.keys()
values = my_dict.values()
print(keys)
print(values)

# Merging lists into a dictionary
list1 = ["a", "b", "c"]
list2 = [1, 2, 3]
new_dict = {}
for i in range(len(list1)):
    new_dict[list1[i]] = list2[i]
print(new_dict)

# Character count in a string
my_string = "hello world"
char_count = {char: my_string.count(char) for char in set(my_string)}
print(char_count)
