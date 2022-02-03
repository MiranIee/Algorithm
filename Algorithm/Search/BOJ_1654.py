# Binary Search
import sys
input = sys.stdin.readline
K, N = map(int, input().split())
arr = []
for _ in range(K):
    arr.append(int(input().strip()))

start = 1
end = max(arr)
maxLen = 0

while(start <= end):
    mid = (start+end)//2
    result = 0
    for x in arr:
        if mid != 0:
            result += (x//mid)
    if N > result:
        end = mid - 1
    else:
        maxLen = mid
        start = mid + 1

print(maxLen)
