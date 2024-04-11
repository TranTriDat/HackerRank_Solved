import math
import os
import random
import re
import sys

# Complete the beautifulTriplets function below.
def beautifulTriplets(d, arr):
    l = len(arr)
    count = 0
    for i in range(l):
        if arr[i] + d in arr and arr[i]+d*2 in arr:
            count += 1

    print(count)
if __name__ == '__main__':
    nd = input().split()

    n = int(nd[0])

    d = int(nd[1])

    arr = list(map(int, input().rstrip().split()))

    result = beautifulTriplets(d, arr)