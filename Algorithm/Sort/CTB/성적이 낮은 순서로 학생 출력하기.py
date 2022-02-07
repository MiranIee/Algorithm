N = int(input())
arr = []  # TUPLE ARRAY
for _ in range(N):
    input_data = input().split()
    arr.append((input_data[0], int(input_data[1])))

arr = sorted(arr, key=lambda x: x[1])

for student in arr:
    print(student[0], end=' ')

# Python 튜플 lambda 정렬
# 1. 첫 번째 원소로 오름차순 정렬하기
# v.sort(key=lambda x: x[0])
# 2. 첫 번째 원소로 내림차순 정렬하기
# v.sort(key=lambda x: -x[0])
# v.sort(key=lambda x: x[0], reverse=True)
# 3. 두 번째 원소로 오름차순 정렬하기
# v.sort(key=lambda x: x[1])
# 4. 첫 번째 원소로 오름차순 정렬하고, 첫 번째 원소가 같은 경우 두 번째 원소로 오름차순 정렬하기
# v.sort(key=lambda x: (x[0], x[1]))
# 5. 첫 번째 원소로 내림차순 정렬하고, 첫 번째 원소가 같은 경우 두 번째 원소로 오름차순 정렬하기
# v.sort(key=lambda x: (-x[0], x[1]))
