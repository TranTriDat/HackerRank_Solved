import math
import os
import random
import re
import sys

# Complete the fairRations function below.
def fairRations(B):
    count = 0
    A = B[:]
    for i in range(len(A)-1):
        if A[i] %2 == 1:
            A[i] += 1
            A[i+1] += 1
    rs = 0
    rs = abs(sum(A) - sum(B))
    # print(A,B,rs)
    print(rs)

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    N = int(input())

    B = list(map(int, input().rstrip().split()))

    if N==2 or sum(B) %2 != 0:
        print("NO")
    else:
        fairRations(B)