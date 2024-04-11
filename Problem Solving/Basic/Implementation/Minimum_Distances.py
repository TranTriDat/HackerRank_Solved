import math
import os
import random
import re
import sys

# Complete the minimumDistances function below.
def minimumDistances(a):
    pos = []
    b = list(set(a))
    for i in range(len(a)):
        for j in range(i+1,len(a)):
            if a[i] == a[j]:
                s = abs(i-j)
                pos.append(s)
                break
    print(min(pos) if len(pos) != 0 else -1)
if __name__ == '__main__':
    n = int(input())

    a = list(map(int, input().rstrip().split()))

    result = minimumDistances(a)