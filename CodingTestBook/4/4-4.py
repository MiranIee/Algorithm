n, m = map(int, input().split())

# 방문 위치 정보 저장 맵, 0으로 초기화
check = [[0] * m for _ in range(n)]

x, y, direction = map(int, input().split())
check[x][y] = 1

# 전체 맵 정보 입력 받기
array = []
for i in range(n):
    array.append(list(map(int, input().split())))

dx = [-1, 0, 1, 0]  # 북, 동, 남, 서
dy = [0, 1, 0, -1]

# 움직일 수 없을 때까지 반복
count = 0
move_flag = False


def turn_left():
    global direction
    direction -= 1
    if direction == -1:
        direction = 3


count = 1
turn_time = 0

while True:

    # 회전
    turn_left()
    nx = x + dx[direction]
    ny = y + dy[direction]

    # 처음 가본 곳이고, 육지면
    if check[nx][ny] == 0 and array[nx][ny] == 0:
        count += 1
        turn_time = 0
        check[nx][ny] = 1
        x = nx
        y = ny
        continue
    # 아니라면 회전
    else:
        turn_time += 1

    # 회전을 다 해봤다면
    if turn_time == 4:
        nx = x - dx[direction]
        ny = y - dy[direction]

        if array[nx][ny] == 0:
            x = nx
            y = ny
            turn_time = 0
        else:
            break


print(count)