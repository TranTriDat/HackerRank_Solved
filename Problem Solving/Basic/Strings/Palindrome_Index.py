import math
import os
import random
import re
import sys

def pali(s):
    if s == s[::-1]:
        return -1
    return 1

# Complete the palindromeIndex function below.
def palindromeIndex(s):
    rs = 0
    index = 0
    if s == s[::-1]:
        return -1

    else:
        i=0
        lens = len(s)
        hal = int(lens/2)
        for i in range(hal):
            if s[i] == s[lens-i-1]:
                continue

            elif s[i] != s[lens-i-1]:

                if s[i+2] == s[lens-i-2]:
                    return i

                elif s[i+1] == s[lens-i - 3]:
                    return (lens - i -1)

if __name__ == '__main__':

    q = int(input())

    for q_itr in range(q):
        s = input()

        result = palindromeIndex(s)
        print(result)