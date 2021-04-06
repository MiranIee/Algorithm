# 내 풀이: 가장 큰 사람부터 묶어서 해치우는 것
#     => 간과한 점: 꼭 모험가를 포함시키지 않아도 됐기 때문에, 제일 큰 사람부터 처리할 필요가 없어도 됨
#                 즉, 가장 큰 공포도를 가진 모험가를 굳이 먼저 처리할 이유가 없음
# 모범 답안: 가장 작은 공포도인 사람 (ex.1)부터 묶어버리기

N = int(input())
data = list(map(int, input().split()))
data.sort()  # 오름차순 정렬

result = 0  # 총 그룹의 수
count = 0  # 현재 그룹에 포함될 사람의 수

for i in data:
    count += 1
    if i <= count:  # 포함된 사람의 수가 현재 공포도가 크면 그룹 결성
        result += 1
        count = 0

print(result)
