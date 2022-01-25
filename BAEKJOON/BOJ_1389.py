import sys
from collections import deque

input = sys.stdin.readline

n, m = map(int, input().split())
graph = [[] for _ in range(n+1)]

for _ in range(m):
    n1, n2 = map(int, input().split())
    graph[n1].append(n2)
    graph[n2].append(n1)


def bfs(start):
    queue = deque([(start, 0)])
    visited = [0] * (n+1)
    visited[start] = True
    sum = 0
    while queue:
        (v, cnt) = queue.popleft()
        sum += cnt
        for i in graph[v]:
            if not visited[i]:
                queue.append((i, cnt + 1))
                visited[i] = True
    return sum


minKevin = float("inf")
res = []
for i in range(1, n+1):
    res.append(bfs[i])
print(res.index(min(res))+1)
