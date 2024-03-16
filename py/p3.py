#program to remove all even numbers from the beginning of a list
#eg: [2, 4, 6, 17, 10] -> [17, 10] 

def delete_starting_evens(list):
  lst = []
  for i in lst:
    if i%2!=0:
      lst.append(i)
  return lst

list = [2, 8, 10, 11]
print(delete_starting_evens(list))
