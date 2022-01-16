from __future__ import print_function
from collections import deque
import sys

input = sys.stdin.readline

n,m,v = map(int,input().split()) 

graph = [[] for _ in range(n+1)] 
visited = [False] * (n+1)

for _ in range (m):
    n1, n2 = map(int, input().split())
    graph[n1].append(n2)
    graph[n2].append(n1)

for g in graph:
    g.sort()

# dfs: Stack, REC
# bfs: queue
def dfs(graph, v, visited):
    
    visited[v] = True
    print(v,end=' ')

    for i in graph[v]:
        if not visited[i]:
            dfs(graph,i,visited)

def bfs(graph, start, visited):
    queue = deque([start])
    visited[start] = True
    
    while queue:
        v = queue.popleft()
        print(v, end = " ")

        for i in graph[v]:
            if not visited[i]:
                queue.append(i)
                visited[i] = True


dfs(graph, v, visited)
print()
visited = [False for _ in range(n+1)]
bfs(graph, v, visited)
