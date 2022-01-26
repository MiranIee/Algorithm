str = input()
sum_ = 0
lst = [i for i in str]  # 리스트로 만듦
lst.sort()

for i in lst:
    if i.isdigit():
        sum_ += int(i)
    else:
        print(i, end="")

print(sum_)
