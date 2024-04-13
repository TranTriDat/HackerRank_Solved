import math
import os
import random
import re
import sys
from collections import defaultdict as dd

# Complete the happyLadybugs function below.
def isEmpty(b):
    for i in b:
        if i != '_':
            return False
    return True

def isFull(b):
    if '_' not in b:
        return True
    return False

def isOdd(b):
    a = dd(int)
    for i in b:
        a[i] += 1
    
    for i in a:
        if a[i]==1 and i != '_':       
            return True
    return False

def isAlternative(b):
    for i in range(1,len(b)-1):
        if b[i] != b[i-1] and b[i] != b[i+1]:
            return False
    return True

def happyLadybugs(b):
    if isEmpty(b):
        print("YES")
    
    else:
        if isFull(b):
            if isOdd(b):
                print("NO")
            
            else:
                if isAlternative(b) == True:
                    print("YES")
                
                else:
                    print("NO")
    
        else:
            if isOdd(b) == False:
                print("YES")
            else:
                print("NO")

if __name__ == '__main__':
    g = int(input())

    for g_itr in range(g):
        n = int(input())
        b = input()
        happyLadybugs(b)