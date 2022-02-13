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
    small, plus = 0, 0
    for i in range(N):
        for j in range(M):
            if graph[i][j] < h:  # 작으면 블록 쌓기
                minus += h - graph[i][j]
            elif graph[i][j] > h:  # 크면 블록 빼기
                plus += graph[i][j] - h

    leftBlock = B + plus  # 뺀 블록이 추가됨
    if leftBlock < minus:
        continue
    time = 2 * plus + minus

    if time <= resultSec:
        resultH = h
        resultSec = time

print(resultSec, end=" ")
print(resultH)
