#!/bin/python3

import math
import os
import random
import re
import sys

numbers = ['0','1','2','3','4','5','6','7','8','9']
lower_case = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
upper_case = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
special_characters = ['!','@','#','$','%','^','&','*','(',')','-','+']

# Complete the minimumNumber function below.
def minimumNumber(n, password):
    # Return the minimum number of characters to make the password strong
    count = 0
    for i in password:
        if i in numbers :
            count+= 1
            break

    for i in password:
        if i in lower_case :
            count+=1
            break

    for i in password:
        if i in upper_case :
            count+=1
            break

    for i in password:
        if i in special_characters :
            count+=1
            break
    l = 6-n
    c = 4-count
    if n < 6:
        max = l if l>c else c
        return max
    else:
        if count < 4:
            return 4-count
        return 0

if __name__ == '__main__':
    n = int(input())

    password = input()

    answer = minimumNumber(n, password)
    print(answer)