import math
import os
import random
import re
import sys

# Complete the kaprekarNumbers function below.
def kaprekarNumbers(p, q):
    rs = []
    for i in range(p,q+1):
        a = ''
        b = ''
        if i == 1:
            rs.append(1)
        else:
            po =  i**2
            st = str(po)
            l = len(st)

            if po > 10:
                a = st[:int(l/2)]
                b = st[int(l/2):]
                c = int(a) + int(b)
                if c == i:
                    rs.append(i)
    if len(rs) > 0 :
        print(*rs , sep = ' ')
    else:
        print('INVALID RANGE')
if __name__ == '__main__':
    p = int(input())

    q = int(input())

    kaprekarNumbers(p, q)