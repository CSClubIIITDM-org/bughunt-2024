import string

def ispangram(str1, alphabet=string.ascii_lowercase):
    str_set = set(str1.lower())
    for char in alphabet:
        if char not in str_set:
            return False
    return True

print(ispangram('The quick brown fox jumps over the lazy dog'))
