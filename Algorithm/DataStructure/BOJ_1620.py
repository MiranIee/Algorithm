import sys

input = sys.stdin.readline
n,m = map(int, input().split())

dict = {}
for i in range(1,n+1):
    a = input().rstrip()
    dict[i] = a

dict_rev = {v:k for k,v in dict.items()}
result = []
for i in range(m):
    quest = input().rstrip()
    if quest.isalpha():
        print(dict_rev.get(quest))
    else:
        print(dict.get(int(quest)))
