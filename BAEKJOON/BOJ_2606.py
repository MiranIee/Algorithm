import sys
from collections import deque
input = sys.stdin.readline

com = int(input())
t = int(input())

visited = [False] * (com+1)
graph = [[] for _ in range(com+1)]

for _ in range(t):
    n1, n2 = map(int, input().split())
    graph[n1].append(n2)
    graph[n2].append(n1)


def bfs(v):
    queue = deque([v])
    visited[v] = True
    cnt = 0
    while queue:
        popped = queue.popleft()
        for i in graph[popped]:
            if not visited[i]:
                queue.append(i)
                cnt += 1
                visited[i] = True
    print(cnt)


bfs(1)
