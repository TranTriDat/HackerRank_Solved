#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the theLoveLetterMystery function below.
def theLoveLetterMystery(s):
        rs = 0
        index = 0
        if s == s[::-1]:
            print(0)

        else:
            i=0
            count = 0
            lens = len(s)
            hal = int(lens/2)
            for i in range(hal):
                if s[i] == s[lens-i-1]:
                    continue

                elif s[i] != s[lens-i-1]:
                    count += abs(ord(s[i]) - ord(s[lens-i-1]))
            print(count)
if __name__ == '__main__':
    q = int(input())

    for q_itr in range(q):
        s = input()
        theLoveLetterMystery(s)