#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the caesarCipher function below.
def caesarCipher(s, k):
    rs = []
    for i in s:
        if i.isalpha() == False:
            rs.append(i)
        else:
            k = k-(k //26)*26 if k > 26 else k
            if ord(i) < 97:
                t = (ord(i)+k) if (ord(i)+k) <= ord('Z') else ( ((ord(i)+k)%90 ) + 64 )
                rs.append(chr(t))
            else:
                t = (ord(i)+k) if (ord(i)+k) <= ord('z') else ( ((ord(i)+k)%122 ) + 96 )
                rs.append(chr(t))
    print(*rs,sep ='')
if __name__ == '__main__':
    n = int(input())

    s = input()

    k = int(input())

    caesarCipher(s, k)