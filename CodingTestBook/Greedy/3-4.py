N, K = map(int, input().split())

count = 0

while True:
    if N == 1:
        break

    left = N % K

    if left == 0:
        N /= K
        count += 1
    else:
        N -= left
        count += left

print(count)
