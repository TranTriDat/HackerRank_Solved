#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the funnyString function below.
def funnyString(s):
    aoi = []
    for i in range(len(s)):
        aoi.append(ord(s[i]))

    aos = []
    for i in range(len(aoi)):
        if i > 0:
            aos.append(abs(aoi[i] - aoi[i-1]))

    print('Funny'if aos == aos[::-1] else 'Not Funny')

if __name__ == '__main__':


    q = int(input())

    for q_itr in range(q):
        s = input()

        result = funnyString(s)