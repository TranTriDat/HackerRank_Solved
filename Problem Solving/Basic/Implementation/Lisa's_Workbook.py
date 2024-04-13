import math
import os
import random
import re
import sys

# Complete the workbook function below.
def workbook(n, k, a):
    count = 0
    p = 1
    for i in a:
        for j in range(1,i+1):
            if p==j :
                count+=1
            if j%k==0:
                p+=1
        if i %k != 0:
            p += 1
    print(count)

if __name__ == '__main__':

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    arr = list(map(int, input().rstrip().split()))
    workbook(n,k,arr)