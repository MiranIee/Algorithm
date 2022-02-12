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
    left = B  # 인벤토리에 남은 블록의 수
    totalSec = 0
    escapeFlg = False
    for i in range(N):
        for j in range(M):
            if graph[i][j] < h:  # 작으면 블록 쌓기
                if left > 0:
                    totalSec += h-graph[i][j]
                    left -= 1
                else:  # 블록 쌓지 못함
                    escapeFlg = True
                    break
            elif graph[i][j] > h:  # 크면 블록 빼기
                totalSec += (graph[i][j]-h) * 2
                left += 1

            if totalSec > resultSec:  # 커지는 순간 계산 필요 X
                escapeFlg = True
                break
        if escapeFlg:
            break
    if not escapeFlg:
        resultH = h
        resultSec = totalSec

print(resultSec, end=" ")
print(resultH)
