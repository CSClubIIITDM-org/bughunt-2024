# Function to convert decimal to binary number

def binaryconversion(n):
   s=[]
    while(n>0):
    
        s=[str(n%2)]+s
        n=n//2
    print(''.join(s))
   
number=int(input("Enter Number: "))
binaryconversion(number)
print()
