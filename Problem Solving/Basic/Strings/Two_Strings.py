import math
import os
import random
import re
import sys

# Complete the twoStrings function below.
def twoStrings(s1, s2):
    l1 = len(s1)
    rs = 0
    for i in s1:
        if i in s2:
            print('YES')
            rs = 1
            break

    if rs == 0:
        print('NO')

if __name__ == '__main__':
    q = int(input())
    for q_itr in range(q):
        s1 = input()
        s2 = input()

        result = twoStrings(s1, s2)