#program to print an input as the only member of an array everytime the function is called
# input- 1 -> output- [1], input- 2 -> output- [2]
items = []
def add_item(item):
   items.append(item)
   return items

print(add_item(1))
items.clear()
print(add_item(2))
