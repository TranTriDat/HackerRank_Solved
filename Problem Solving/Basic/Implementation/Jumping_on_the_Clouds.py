import array as arr

n = int(input())
a = []

a = [int(i) for i in input().split()]

count = -1
i=0
while i < n:
    if i<n-2 and a[i+2] == 0:
        i+=1
    count+=1
    i+=1

print(count)