import sys
input = sys.stdin.readline

# 1. 블록 제거 -> 2초
# 2. 블록 쌓기 -> 1초

N, M, B = map(int, input().split())  # B: 인벤토리에 있는 블록 갯수
graph = []
for _ in range(N):
    graph.append(list(map(int, input().split())))

resultSec = float('inf')
resultH = 0

for h in range(257):
    small, large = 0, 0
    for i in range(N):
        for j in range(M):
            if graph[i][j] < h:  # 작으면 블록 쌓기
                small += h - graph[i][j]
            elif graph[i][j] > h:  # 크면 블록 빼기
                large += graph[i][j] - h

    left = B + large  # 뺀 블록이 추가됨
    if left < small:
        continue
    time = 2 * large + small

    if time <= resultSec:
        resultH = h
        resultSec = time

print(resultSec, end=" ")
print(resultH)
