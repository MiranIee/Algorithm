# 무조건 맨 앞에 나오는 숫자로 통일시키면최소 횟수..

str = input()

if str[0] == "1":
    default = "0"
else:
    default = "1"

result = 0
count = 0

while True:
    i = str.find(default)  # 다른 값 시작

    if i == -1:
        break

    while str[i] == default and i != len(str):
        count += 1
        i += 1
        if i == len(str) - 1:
            count += 1
            break

    if str[0] == "1":
        str = str.replace("0", "1", count)
    else:
        str = str.replace("1", "0", count)

    count = 0
    result += 1


print(result)
