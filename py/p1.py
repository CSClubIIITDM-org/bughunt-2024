#program to print a tree pattern with asterisks
# eg :- height = 3
#output :-   *
#           ***
#          *****

def asterisk_tree(height,level):
  if level > height:
    return
  s="*"*(2*level-1)
  print(s.center(2*height-1))
  '''now pattern will be center aligned'''
  print()
  asterisk_tree(height, level + 1)

n=int(input("Enter height of tree : "))
asterisk_tree(n, 1)
