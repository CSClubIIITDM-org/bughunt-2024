#program to remove all even numbers from the beginning of a list
#eg: [2, 4, 6, 17, 10] -> [17, 10] 

def delete_starting_evens(lst):
    while lst and isinstance(lst[0], int) and lst[0] % 2 == 0:
        lst.pop(0)
    return lst

lst = [2, 8, 10, 11]
print(delete_starting_evens(lst))
