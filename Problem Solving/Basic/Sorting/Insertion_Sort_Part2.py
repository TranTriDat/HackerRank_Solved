#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the insertionSort2 function below.
def insertionSort2(n, a):
    for i in range(1,len(a)):
        key = a[i] 
        j = i-1
        while j >=0 and key < a[j] : 
                arr[j+1] = a[j] 
                j -= 1
        a[j+1] = key 
        print(*a,sep = ' ')

if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    insertionSort2(n, arr)