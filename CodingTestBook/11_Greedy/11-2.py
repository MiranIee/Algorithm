# 0뿐만 아니라 1인 경우에도 더하는 게 최댓값 ex) 1*2=2, 1+2=3
numbers = input()
lst = [int(i) for i in numbers]  # 문자열을 숫자 리스트로


result = lst[0]
for i in range(len(lst) - 1):
    if lst[i] <= 1:
        result += lst[i + 1]
    else:
        result *= lst[i + 1]
print(result)
