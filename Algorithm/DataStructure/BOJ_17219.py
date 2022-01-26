import sys
input = sys.stdin.readline
n,m = map(int,input().split())

dict = {}

for i in range(n):
    s1, s2 = map(str,input().split())
    dict[s1] = s2

for i in range(m):
    s = input().strip()
    print(dict.get(s))
