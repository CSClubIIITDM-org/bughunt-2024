#Write a Python function to check whether a string is a pangram or not.
#Note : Pangrams are words or sentences containing every letter of the alphabet at least once.

import string
import sys

def ispangram(str1, alphabet=string.ascii_lowercase):
    alphaset = list(alphabet)
    
    str_list = list(str1.lower())
    
    return alphaset <= str_list

print(ispangram('The quick brown fox jumps over the lazy dog'))
