# Function to convert decimal to binary number

def binaryconversion(n,l=[]):
   l.append(n%2)
   if n > 1:
       binaryconversion(n//2)
   else:
      g = ''
      for i in l[::-1]:
         g +=str(i)
      print(g)
number=int(input("Enter Number: "))
binaryconversion(number)
print()
