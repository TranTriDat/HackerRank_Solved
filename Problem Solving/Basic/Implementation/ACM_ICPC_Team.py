import math
import os
import random
import re
import sys
from itertools import combinations

# Complete the acmTeam function below.
def acmTeam(topic):
    a = combinations(topic,2)
    m = 0
    c = 0
    for i in a:
        tmp = str(bin ( ( ( int(i[0],2) | int(i[1],2) ) ) ) )[2:].count('1')
        if tmp > m:
            m = tmp
            c = 1
        elif tmp == m:
            c += 1
    print(m)
    print(c)

if __name__ == '__main__':
    nm = input().split()

    n = int(nm[0])

    m = int(nm[1])

    topic = []

    for _ in range(n):
        topic_item = input()
        topic.append(topic_item)

    result = acmTeam(topic)