#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the insertionSort1 function below.
def insertionSort1(n, arr):
    l = len(arr)
    x = arr[l-1]

    for i in range(l-1,0,-1):
        if arr[i-1] < x:
            arr[i] = x
            print(*arr,sep = ' ')
            break
        else:
            arr[i] = arr[i-1]
            print(*arr,sep = ' ')

    if x < min(arr):
        arr[0] = x
        print(*arr,sep = ' ')

if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    insertionSort1(n, arr)