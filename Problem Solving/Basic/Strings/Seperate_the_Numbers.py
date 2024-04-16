#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the separateNumbers function below.
def separateNumbers(s):

    for _ in range(len(s)//2):

        firstx = int(s[0:_+1])
        # print(firstx)
        string = str(firstx)
        # print(string)
        while len(string) < len(s):

            firstx +=1
            # print(firstx)
            string += str(firstx)
            # print(string)
        if string == s:

            return "YES " + s[0:_+1]

    return "NO"

if __name__ == '__main__':
    q = int(input())

    for q_itr in range(q):
        s = input()

        rs = separateNumbers(s)
        print(rs)