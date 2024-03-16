#program to print a tree pattern with asterisks
# eg :- height = 3
#output :-   *
#           ***
#          *****

def asterisk_tree(height):
    for level in range(1, height + 1):
        spaces = " " * (height - level)
        stars = "*" * (2 * level - 1)
        print(spaces + stars)

n = int(input("Enter height of tree: "))
asterisk_tree(n)
