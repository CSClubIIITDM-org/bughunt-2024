#program to remove all even numbers from the beginning of a list
#eg: [2, 4, 6, 17, 10] -> [17, 10] 

def delete_starting_evens(lst):
    i = 0
    while i < len(lst) and lst[i] % 2 == 0:
        lst.pop(i)
    return lst

lst = [2, 8, 10, 11]
print(delete_starting_evens(lst))

