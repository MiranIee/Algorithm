import sys
sys.setrecursionlimit(10000)
input = sys.stdin.readline
t = int(input())


def dfs(x, y):
    dx = [1, -1, 0, 0]
    dy = [0, 0, 1, -1]

    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]

        if (0 <= nx < n) and (0 <= ny < m):
            if graph[nx][ny] == 1:
                graph[nx][ny] = 0
                dfs(nx, ny)


for _ in range(t):
    m, n, k = map(int, input().split())
    graph = [[0]*m for _ in range(n)]
    for _ in range(k):
        n1, n2 = map(int, input().split())
        graph[n2][n1] = 1

    result = 0
    for i in range(n):
        for j in range(m):
            if graph[i][j] == 1:
                dfs(i, j)
                result += 1
    print(result)
