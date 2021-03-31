N = int(input())
people = list(map(int, input().split()))

people.sort(reverse=True)

count = 0

while True:
    # 제일 높은 공포도보다 남은 사람의 수가 적으면
    if not people:
        break
    if people[0] > len(people):
        break

    # 제일 높은 공포도 수만큼 높은 공포도부터 추출
    for i in range(people[0] - 1):
        del people[1]  # 다음으로 높은 공포도

    count += 1
    del people[0]

print(count)