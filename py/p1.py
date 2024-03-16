#program to print a tree pattern with asterisks
# eg :- height = 3
#output :-   *
#           ***
#          *****

def asterisk_tree(height):
    for level in range(1, height + 1):
        print(" " * (height - level) + "*" * (2 * level - 1))

n = int(input("Enter height of tree: "))
asterisk_tree(n)
