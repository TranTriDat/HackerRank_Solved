#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the introTutorial function below.
def introTutorial(V, arr):
    print(arr.index(V))

if __name__ == '__main__':
    V = int(input())

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    introTutorial(V, arr)