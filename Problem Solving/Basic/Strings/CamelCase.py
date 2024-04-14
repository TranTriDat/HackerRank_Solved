s = input()

count = 1

for i in range(len(s)):
    if ord(s[i]) -97 <0:
        count += 1

print(count)