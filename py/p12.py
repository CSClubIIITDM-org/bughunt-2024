# Program to multiply two matrices using nested loops

import sys

A = [[1,2,3],[4,5,6],[7,8,9]]
B = [[10,11,12],[13,14,15],[16,17,18]]

p = len(A)
q = len(A[0])
t = len(B)
r = len(B[0])

if q != t:
   print("Error! Matrix sizes are not compatible")
   sys.exit()

C = [[sum(A[i][k] * B[k][j] for k in range(q)) for j in range(r)] for i in range(p)]

print(C)
