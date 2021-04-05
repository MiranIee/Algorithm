# 1. 모든 음식을 시간 기준으로 정렬
# 2. 시간이 적게 걸리는 음식부터 제거
# [우선순위 큐]: 큐의 기본개념에서 각 원소마다 우선순위가 추가되어, 우선순위가 높은 것부터 dequeue
# 마지막에 K초 후에 먹어야 할 음식 번호 출력 위해 (음식 시간, 음식 번호)튜플로 삽입

import heapq


def solution(food_times, k):

    # 전체 음식을 먹는 시간보다 k가 크거나 같다면 -1
    if sum(food_times) <= k:
        return -1

    # 시간이 작은 음식부터 뺴야 하므로 우선순위 큐를 이용
    q = []
    for i in range(len(food_times)):
        # (음식 시간, 음식 번호) 형태로 우선순위 큐에 삽입
        heapq.heappush(q, (food_times[i], i + 1))

    sum_value = 0  # 먹기 위해 사용한 시간
    previous = 0  # 직전에 다 먹은 음식 시간
    length = len(food_times)  # 남은 음식의 갯수

    # sum_value + (현재의 음식 시간 - 이전의 음식 시간 )* 현재 음식 개수와 k 비교
    while sum_value + ((q[0][0] - previous) * length) <= k:
        now = heapq.heappop(q)[0]
        sum_value += (now - previous) * length
        length -= 1  # 다 먹은 음식 제외
        previous = now  # 이전 음식 시간 재설정

    # While문을 탈출했다면, 남은 음식 중에서 몇 번째 음식인지 확인하여 출력
    result = sorted(q, key=lambda x: x[1])  # 음식의 번호 기준으로 정렬
    return result[(k - sum_value) % length][1]
