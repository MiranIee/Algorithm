from collections import deque

# 큐 이용
# DFS는 최대한 멀리 있는 노드를 우선으로 탐색하는 방식
# BFS는 가까운 노드부터 탐색하는 알고리즘
# 1) 탐색 시작 노드를 큐에 삽입하고 방문 처리
# 2) 큐에서 노드를 꺼내 해당 노드의 인접 노드 중에서 방문하지 않는 노드를 모두 큐에 삽입하고 방문처리
# 3) 2의 과정을 더 이상 수행할 수 없을 때까지 반복
# 일반적으로 수행 시간은 DFS보다 좋은 편

# list의 pop(0)은 O(n), pop()은 O(1)
# deque를 사용하면 popleft는 pop(0)과 똑같지만 O(1)


def bfs(graph, start, visited):
    # 큐 구현을 위해 Deque 라이브러리 사용
    queue = deque([start])
    # 현재 노드를 방문 처리
    visited[start] = True
    # 큐가 빌 때까지 반복
    while queue:
        # 큐에서 하나의 원소를 뽑아 출력
        v = queue.popleft()
        print(v, end=' ')
        # 해당 원소와 연결된, 방문하지 않은 원소들 큐에 삽입
        for i in graph[v]:
            if not visited(i)
            visited[i] = True


# 각 노드가 연결된 정보를 리스트 자료형으로 표현(2차원 리스트)
graph = [
    [],
    [2, 3, 8],
    [1, 7],
    [1, 4, 5],
    [3, 5],
    [3, 4],
    [7],
    [2, 6, 8],
    [1, 7],
]
# 각 노드가 방문된 정보를 리스트 자료형으로 표현(1차원 리스트)
visited = [False] * 9

# 정의된 DFS 함수 호출
bfs(graph, 1, visited)
