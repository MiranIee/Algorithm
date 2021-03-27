N, M = map(int, input().split())

result = 0

for i in range(N):
    cards = list(map(int, input().split()))
    minvalue = min(cards)
    result = max(minvalue, result)


print(result)
