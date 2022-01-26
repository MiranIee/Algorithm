import sys
input = sys.stdin.readline

# i-1 까지 채워져 있는 경우 2*1 하나만 가능
# i-2 까지 채워져 있는 경우 2*2, 1*2 두개 총 2가지
# ㄴ 2*1 두개는 이미 i-1에서 고려

n = int(input)
dp = [0] * 1001

d[1] = 1  # 2 * 1
d[2] = 3
for i in range(3, n+1):
    d[i] = d[i - 1] + 2 * d[i - 2]

print(d(n))
