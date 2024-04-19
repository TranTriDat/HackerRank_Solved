#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the makingAnagrams function below.
def makingAnagrams(s1, s2):
    s3 = list(s1)
    for i in s2:
        if i in s3:
            s3.remove(i)
    rs = len(s1) - len(s3)
    
    print( len(s1)+len(s2) - 2*rs)

if __name__ == '__main__':
    s1 = input()
    s2 = input()
    makingAnagrams(s1, s2)