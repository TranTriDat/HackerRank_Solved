import math
import os
import random
import re
import sys
from collections import defaultdict as dd
# Complete the findDigits function below.
def findDigits(n):
    count = 0
    n1 = str(n)
    a = [i for i in n1]
    # for i in n1:
    #     a.append(i)
    b = dd(int)
    for i in a:
        b[i] += 1
    # print(b)
    for i in b:
        if int(i) != 0:
            if n%int(i) == 0:
                count += b[i]
                
    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = findDigits(n)

        fptr.write(str(result) + '\n')

    fptr.close()