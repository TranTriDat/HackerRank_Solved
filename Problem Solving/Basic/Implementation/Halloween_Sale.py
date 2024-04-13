#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the howManyGames function below.
def howManyGames(p, d, m, s):
    su = p
    count = 0
    while(su <= s):
        # print(su,p)
        tmp = p-d
        p = tmp if tmp >m else m
        su += p
        count +=1

    print(count)
    # print(su)

if __name__ == '__main__':
    pdms = input().split()
    p = int(pdms[0])
    d = int(pdms[1])
    m = int(pdms[2])
    s = int(pdms[3])
    answer = howManyGames(p, d, m, s)