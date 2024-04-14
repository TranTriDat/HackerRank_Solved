#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the hackerrankInString function below.
def hackerrankInString(s):
    goal = ['h','a','c','k','e','r','r','a','n','k']
    count = 0
    a = s[:]
    i1=0
    j1=0
    for i in range(i1,len(goal)):
        for j in range(j1,len(a)):
            j1 = j+1
            if goal[i]==a[j]:
                count+=1
                i1 = i+1
                break
            
    print('YES' if count==10 else "NO")

if __name__ == '__main__':
    q = int(input())

    for q_itr in range(q):
        s = input()
        hackerrankInString(s)