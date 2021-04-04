# 전체 경우의 수 NC2-(같은 숫자의 갯수)

N, M = map(int, input().split())
datas = list(map(int, input().split()))

datas.sort()

total = (N * (N - 1)) / 2
minus = 0
for i in range(1, len(datas)):
    if datas[i] == datas[i - 1]:
        minus += 1

result = total - minus
print(result)
