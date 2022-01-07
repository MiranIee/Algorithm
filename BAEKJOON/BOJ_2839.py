import sys
input = sys.stdin.readline

# 15 = 3*5, 5*3
# 12(15-3)에서 3키로 하나 추가
# 10(15-5)에서 5키로 하나 추가
# 점화식) dp[n]=1+min(dp[i-3], dp[i-5])

n = int(input())

dp = [float("inf")] * 5001
dp[3], dp[5] = 1, 1


for i in range(6, n + 1):
    dp[i] = min(dp[i - 3], dp[i - 5]) + 1

if dp[n] != float("inf"):
    print(dp[n])
else:
    print(-1)
