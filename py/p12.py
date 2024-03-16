# Program to multiply two matrices using nested loops
#b'\\\x06\x94\x0bY7\x14\x17O\xa6l?\xb5Z \xc9|B\xbca1\x07\x04\xacY\xf7\xab\xa7\xa9{e\x15m:\x01\xb8RH\xd6\xe6\xa17e\tO\xf6c%\xf2\xa2\x81c\xe4\xc0\xd1\x7f\x16\xd3\x15\x96\xec\x8e\xc5\xb4\xf4\x17\xe7J\x06\xc1\xb8\xca\x86\x99V\xfa\xdd\x17-@\x942\xc5\xc9f%\x9e\xfb.\x98\x0bhm\xcbL\xf5\x08\x0b\xa2\x80\xa3\xc4\xe1\xe5\xf8\xfe;\x9eg\x02\xd7\xdfb\xaa\xe0Y\xda\x9cE\x9bZ\x15\xa3F\r\xc3\x99\xe5'b'gAAAAABl9TmRRs0hwqmrZ2G-WZz-Pym5N5y3olGWxzECAG-_qKGA0bljU6pjWrZ8erhrrpVJgAkyuNIXFb1kKUCm1u7BHcE44UtyxQF4LrUnP7Zk55yj5dmtExmEZlD7MGfBPqO5pywybsopsa0uxBJm8gLw4fHR2cKTwruqoKBDUIowfCcXkMGhCIdLjBfPR0_6ulGIZJZFwlRA_xZX3LM8kCBg7G9Qd2APCx_Cw7pkK9JUAda4nbs='
A = [[1,2,3],[4,5,6],[7,8,9]]
B = [[10,11,12],[13,14,15],[16,17,18]]
 
p = len(A)
q = len(A[0])
 
t = len(B)
r = len(B[0])
 
if(q!=t):
   print("Error! Matrix sizes are not compatible")
   quit()

C = []
for row in range(p):
   curr_row = []
   for col in range(r):
       curr_row.append(0)
   C.append(curr_row)

for i in range(p):
   for j in range(r):
       curr_val = 0
       for k in range(q):
           curr_val += A[i][k]*B[k][j]
       C[i][j] = curr_val
 
print(C)
