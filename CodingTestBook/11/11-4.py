from itertools import combinations

N = int(input())
coins = list(map(int, input().split()))

check = [False for _ in range(sum(coins))]

for i in range(1, N):  # NCi
    for j in list(combinations(coins, i)):
        check[sum(j)] = True

result = 0
for i in range(1, len(check)):
    if check[i] == False:
        result = i
        break

print(result)
