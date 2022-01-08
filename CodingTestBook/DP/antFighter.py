import sys
input = sys.stdin.readline

# 1) i-1을 점령하면 i는 점령 불가
# 2) i-2를 점령하면 i는 점령 가능

n = int(input())
array = list(map(int, input()))

d = [0]*100
d[0] = array[0]
d[1] = max(array[0], array[1])

for i in range(2, n):
    d[i] = max(d[i-2]+array[i], d[i-1])

print(n-1)
