#program to perform binary addition

def addBinary(a: str, b: str) -> str:
    s = []
    carry = 0
    i = len(a) - 1
    j = len(b) - 1

    while i >= 0 or j >= 0:
        if i >= 0:
            carry += ord(a[i]) - ord('0')
            i -= 1
        if j >= 0:
            carry += ord(b[j]) - ord('0')
            j -= 1
        s.append(str(carry % 2))
        carry //= 2

    return ''.join(reversed(s))

print(addBinary("11", "0"))
