import sys

input = sys.stdin.readline
n = int(input())

fac = 1
for i in range(1,n+1):
    fac *= i

fac_str = str(fac)
res = 0
for i in range(len(fac_str)-1,0,-1):
    if fac_str[i]=='0':
        res += 1
    else:
        break

# for x in str(fac)[::-1]:

print(res)
