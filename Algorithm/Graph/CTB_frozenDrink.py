n, m = map(int, input().split())
# DFS로 해결

# 맵 정보
graph = []
for i in range(n):
    graph.append(list(map(int, input())))

# 특정한 노드를 방문한 뒤에 연결된 모든 노드 방문


def dfs(x, y):
    # 주어진 부분을 벗어나면 즉시 종료
    if x <= -1 or x >= n or y <= -1 or y >= m:
        return False
    # 현재 노드를 아직 방문하지 않았다면
    if graph[x][y] == 0:
        # 해당 노드 방문 처리
        graph[x][y] = 1
        # 상, 하, 좌, 우의 위치도 모두 재귀적으로 호출
        dfs(x-1, y)
        dfs(x, y-1)
        dfs(x+1, y)
        dfs(x, y+1)
        return True
    return False


result = 0
for i in range(n):
    for j in range(m):
        # 0을 1로 만들며 연결된 부분을 더 이상 1로 만들 부분이 없을 때 종료
        if dfs(i, j) == True:
            result += 1

print(result)
