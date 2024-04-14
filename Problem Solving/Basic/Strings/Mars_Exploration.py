#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the marsExploration function below.
def marsExploration(s):
    a = 'SOS'
    count = 0

    for i in range(0,len(s)-2,3):
        tmp = s[i:i+3]
        if tmp != 'SOS':
            for j in range(len(tmp)):
                count += 1  if tmp[j] != a[j] else 0
        # print(tmp)
    print(count)
if __name__ == '__main__':

    s = input()

    marsExploration(s)