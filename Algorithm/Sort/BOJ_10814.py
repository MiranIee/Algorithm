import sys
from functools import cmp_to_key

input = sys.stdin.readline
n = int(input())

def compare(a,b):
    if a[0]>b[0]:
        return 1
    elif a[0]==b[0]:
        return 0
    else:
        return -1

dict = []
for i in range (n):
    a,b = input().split()
    dict.append((int(a),b))

dict = sorted(dict, key = cmp_to_key(compare))
for a,b in dict:
    print('{} {}'.format(a, b))


# SOL2 ================
for i in range(n):
    dict.append(list(input().split()))

dict.sort(key=lambda x:int(x[0]))

for i in dict:
    print(i[0],i[1])
