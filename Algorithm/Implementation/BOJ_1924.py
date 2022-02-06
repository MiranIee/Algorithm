import sys
input = sys.stdin.readline

x, y = map(int, input().split())

DAYS = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
WEEK = ['SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT']

i = 0  # 1월부터 시작
day = 0
while i < x-1:
    day += DAYS[i]
    i += 1
day += y
print(WEEK[day % 7])
