n, m, k = map(int, input().split())
data = list(map(int, input().split()))

data.sort()
first = data[n - 1]
second = data[n - 2]

count = m / (k + 1)  # 반복되는 횟수
result = count * ((first * k) + second)

count = m % (k + 1)  # 나머지 큰 수 반복
result += count * first

print(int(result))