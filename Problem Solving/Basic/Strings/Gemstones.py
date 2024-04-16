#!/bin/python3

import math
import os
import random
import re
import sys
from collections import defaultdict as dd
# Complete the gemstones function below.
def gemstones(arr):
    d = dd(int)
    rs = []
    for i in range(len(arr)):
        arr[i] = list(set(arr[i]))
        for _ in range(len(arr[i])):
            if arr[i][_] in arr[i]:
                rs.append(arr[i][_])
    for i in rs:
        d[i] += 1
    count = 0
    for _ in d:
        if d[_] == len(arr):
            count += 1
    print(count)
if __name__ == '__main__':

    n = int(input())

    arr = []

    for _ in range(n):
        arr_item = input()
        arr.append(arr_item)

    result = gemstones(arr)