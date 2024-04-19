import math
import os
import random
import re
import sys

# Complete the stringConstruction function below.
def stringConstruction(s):
    b= set(s)
    print(len(b))

if __name__ == '__main__':
    q = int(input())

    for q_itr in range(q):
        s = input()
        stringConstruction(s)