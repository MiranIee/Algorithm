# SOL1) 이진탐색 이용
def binary_search(arr, target, start, end):
    while start <= end:
        mid = (start+end)//2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            start = mid+1
        elif arr[mid] > target:
            end = mid - 1
    return None


n = int(input())
array = list(map(int, input().split()))
array.sort()  # 이진탐색 수행을 위한 정렬

m = int(input())
x = list(map(int, input().split()))

# 손님이 확인 요청한 부품 번호를 하나씩 확인
for i in x:
    # 해당 부품이 존재하는지 확인
    result = binary_search(array, i, 0, n-1)
    if result != None:
        print('yes', end=' ')
    else:
        print('no', end=' ')

# SOL2) SET 자료형 이용
# 특정한 수가 한 번이라도 등장했는지 검사

n = int(input())
# 가게에 있는 전체 부품 번호를 입력받아서 집합에 기록
array = set(map(int, input().split()))

m = int(input())
x = list(map(int, input().split()))

for i in x:
    if i in array:
        print('yes', end=' ')
    else:
        print('no', end=' ')
