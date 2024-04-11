#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'taumBday' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts following parameters:
#  1. INTEGER b
#  2. INTEGER w
#  3. INTEGER bc
#  4. INTEGER wc
#  5. INTEGER z
#

def taumBday(b, w, bc, wc, z):
    # Write your code here
    rs = 0
    if bc == wc:
        rs = b*bc + w*wc
        return rs

    # elif (z < bc + wc and bc < wc + z)  or (z < bc+wc and wc < bc + z):
    #     rs = b*bc + w*wc
    #     return rs
    elif bc > wc + z :
        rs = z*b + wc*w + wc*b
        return rs
    elif wc > bc + z:
        rs = z*w + bc*w + bc*b
        return rs
    else :
        rs = b*bc + w*wc
        return rs
    # print(rs)
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        first_multiple_input = input().rstrip().split()

        b = int(first_multiple_input[0])

        w = int(first_multiple_input[1])

        second_multiple_input = input().rstrip().split()

        bc = int(second_multiple_input[0])

        wc = int(second_multiple_input[1])

        z = int(second_multiple_input[2])

        result = taumBday(b, w, bc, wc, z)
        print(result)