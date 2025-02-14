"""Print this pattern using nested for loop: 
markdown 
Copy code 
* 
** 
*** 
**** 
***** 
""" 
for i in range(1, 6):
    print("*" * i)

# 1. Even numbers generator
def even_numbers(n):
    for i in range(n):
        yield i * 2

for num in even_numbers(10):
    print(num)


# 2. Custom iterator (example)
class MyIterator:
    def __init__(self, data):
        self.data = data
        self.index = 0

    def __iter__(self):
        return self

    def __next__(self):
        if self.index < len(self.data):
            value = self.data[self.index]
            self.index += 1
            return value
        else:
            raise StopIteration

my_list = [10, 20, 30]
my_iterator = MyIterator(my_list)
for item in my_iterator:
    print(item)