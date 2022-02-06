# NTECH

N = int(input().strip())

DAYS = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
# [MON, TUE, WED, THU, FRI, SAT, SUN] 나머지가 4인 경우 금요일
i = 2019  # 2019년
day = 0
result = 0

for i in range(2019, N+1):
    for j in range(12):
        # 그 달의 13일만 확인하면됨
        if (day+13) % 7 == 4:
            result += 1

        if j == 1:  # 2월 윤달 체크
            if ((i % 4 == 0) and (i % 100 != 0)) or (i % 400 == 0):
                day += 29
                continue
        day += DAYS[j]

print(result)
