# 자물쇠를 9*9로 확대 후 중앙에 배치한 후,
# 열쇠 배열을 왼쪽 위부터 시작해 한칸 씩 이동해 모든 홈 채울 수 있는지 확인
def rotate_a_matrix_by_90_degree(a):
    n = len(a)
    m = len(a[0])

    result = [[0] * n for _ in range(m)]

    for i in range(n):
        for j in range(m):
            result[j][n - i - 1] = a[i][j]

    return result


# 자물쇠의 중간 부분이 모두 1인지 확인
def check(new_lock):
    lock_length = len(new_lock) // 3
    for i in range(lock_length, lock_length * 2):
        for j in range(lock_length, lock_length * 2):
            if new_lock[i][j] != 1:
                return False
    return True


def solution(key, lock):
    n = len(lock)
    m = len(key)

    # 자물쇠의 크기를 기존의 3배로 변환,0으로 초기화
    new_lock = [[0] * (n * 3) for _ in range(n * 3)]

    # 새로운 자물쇠의 중앙 부분에 기존의 자물쇠 넣기
    for i in range(n):
        for j in range(n):
            new_lock[i + n][j + n] = lock[i][j]

    # 4가지 방향에 대해서 확인
    for rotation in range(4):
        key = rotate_a_matrix_by_90_degree(key)  # 열쇠 회전

        for x in range(n * 2):
            for y in range(n * 2):

                # 자물쇠에 열쇠를 끼워 넣기

                for i in range(m):
                    for j in range(m):
                        new_lock[x + i][y + j] += key[i][j]

                if check(new_lock) == True:
                    return True

                for i in range(m):
                    for j in range(m):
                        new_lock[x + i][y + j] -= key[i][j]

    return False


solution([[0, 0, 0], [1, 0, 0], [0, 1, 1]], [[1, 1, 1], [1, 1, 0], [1, 0, 1]])
