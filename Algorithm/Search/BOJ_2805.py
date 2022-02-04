import sys
input = sys.stdin.readline

N, M = map(int, input().split())
arr = list(map(int, input().split()))
start = 0
end = 1000000000  # max(arr) -> 시간 초과
maxLen = 0

while start <= end:
    mid = (start+end)//2
    result = 0
    for x in arr:
        if x > mid:
            result += (x-mid)
    if M > result:  # 부족한 경우, 길이를 줄임
        end = mid - 1
    else:
        maxLen = mid
        start = mid + 1

print(maxLen)
