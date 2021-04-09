# s[i : i + sliceLen]: range over 나지 않음 ex)len=5, i+sliceLen=6 => Error x
#  알아서 처리되는 듯...?


def solution(s):
    answer = len(s)  # 압축 아예 안한 경우: 최솟값
    for sliceLen in range(1, (len(s) // 2) + 1):  # 최대 나눌 수 있는 길이는 len(s)/2
        tempStr = ""
        cnt = 1
        previous = s[0:sliceLen]
        for i in range(sliceLen, len(s), sliceLen):
            if previous == s[i : i + sliceLen]:
                cnt += 1
            else:
                tempStr += str(cnt) + previous if cnt >= 2 else previous
                cnt = 1
                previous = s[i : i + sliceLen]

        tempStr += str(cnt) + previous if cnt >= 2 else previous
        answer = min(answer, len(tempStr))

    return answer


s = input()
print(solution(s))