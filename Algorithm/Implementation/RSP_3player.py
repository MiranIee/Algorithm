# 3명이 가위 바위보
# 같으면 점수 X
# 한 명이 이기면 2점
# 두 명이 이기면 누적 합이 작은 사람이 +1
def solution(rsp3):
    answer = [0]*3
    WINS = {
        "R": 'S',
        "S": 'P',
        "P": 'R',
    }
    for rsp in rsp3:
        # 무승부 -> 아무 액션 취하지 않음
        if rsp[0] == rsp[1] == rsp[2] or (rsp[0] != rsp[1] and rsp[1] != rsp[2] and rsp[0] != rsp[2]):
            continue

        # 다른 거 낸 사람을 찾기
        if rsp[0] == rsp[1]:
            unique, same1, same2 = 2, 0, 1
        elif rsp[0] == rsp[2]:
            unique, same1, same2 = 1, 0, 2
        else:
            unique, same1, same2 = 0, 1, 2

        if WINS[rsp[unique]] == rsp[same1]:  # 1명이 이긴 경우
            answer[unique] += 2
        else:  # 2명이 이긴 경우
            if answer[same1] == answer[same2]:
                answer[same1] += 1
                answer[same2] += 1
            else:
                if answer[same1] > answer[same2]:
                    answer[same2] += 2
                else:
                    answer[same1] += 2

    return answer


print(solution(["SPR", "PPR", "PSS", "RSS", "RRR"]))
