from collections import deque
# A->B가 친구, B->C가 친구, A->C가 친구인가?


class Friend:
    def __init__(self, email):
        self.email = email
        self.friends = []

    def add_friendship(self, friend):
        self.friends.append(friend)
        friend.friends.append(self)

    def can_be_connected(self, friend):
        queue = deque([self])
        visited = dict()  # 방문 여부 체크
        visited[self.email] = 0  # 딕셔너리 값 업데이트
        while queue:
            v = queue.popleft()
            if v.email == friend.email:
                return True
            for i in v.friends:
                if not i.email in visited:
                    queue.append(i)
                    visited[i.email] = 0  # 방문 업데이트

        return False  # 큐를 다 돌았음에도 return되지 않았다면 연결이 안되있음


if __name__ == "__main__":
    a = Friend("A")
    b = Friend("B")
    c = Friend("C")

    a.add_friendship(b)
    b.add_friendship(c)

    print(a.can_be_connected(c))
