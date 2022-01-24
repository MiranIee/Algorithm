import sys
input = sys.stdin.readline

n, m = map(int, input().split())
graph = [[0]*(n+1) for _ in range(n+1)]
visited = [0] * (n+1)

for _ in range(m):
    n1, n2 = map(int, input().split())
    graph[n2][n1] = graph[n1][n2] = 1


def dfs(v, cnt):
    queue = deque([v])
    visited[v] = True
    while queue:
        v = queue.popleft()
        for i in graph[v]:
            if not visited[i]:
                queue.append(i)
                visited[i] = True
