import string

def ispangram(str1, alphabet=string.ascii_lowercase):
    alphaset = set(alphabet)
    
    str1 = str1.lower()
    
    # Count the occurrences of each letter in the input string
    str1_set = set(str1)
    
    # Remove non-alphabetic characters
    str1_set.discard(' ')
    
    # Check if the set of lowercase letters in the input string equals the alphabet set
    return alphaset == str1_set

print(ispangram('The quick brown fox jumps over the lazy dog'))
