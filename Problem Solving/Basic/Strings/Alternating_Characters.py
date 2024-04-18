#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the alternatingCharacters function below.
def alternatingCharacters(s):
    if all([i == s[0] for i in s]) == True:
        print(len(s)-1)
    else:
        count = 0
        for i in range(len(s)-1):
            tmp = s[i]
            if s[i+1] == s[i] :
                count+=1
            else:
                tmp = s[i+1]
        print(count)
if __name__ == '__main__':
    q = int(input())

    for q_itr in range(q):
        s = input()
        alternatingCharacters(s)