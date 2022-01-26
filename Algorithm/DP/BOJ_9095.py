import sys
input = sys.stdin.readline
n = int(input().strip())

for _ in range(n):
    num = int(input().strip())
    dp = [0] * 11
    dp[1], dp[2], dp[3] = 1, 2, 4
    for i in range(4, num+1):
        for j in range(1, 4):
            dp[i] += dp[i-j]

    print(dp[num])
