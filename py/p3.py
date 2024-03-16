def delete_starting_evens(lst):
    while lst and lst[0] % 2 == 0:
        lst = lst[1:]
    return lst

lst = [2, 8, 10, 11]
print(delete_starting_evens(lst))
