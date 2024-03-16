#program to remove all even numbers from the beginning of a list
#eg: [2, 4, 6, 17, 10] -> [17, 10] 

def delete_starting_evens(list):
  while 1:
    if list[0] % 2 == 0:
      del(list[0])
    else:
      break
  return list

list = [2, 8, 10, 11]
print(delete_starting_evens(list))
