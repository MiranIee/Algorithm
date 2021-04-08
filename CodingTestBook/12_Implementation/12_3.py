def solution(s):
    answer = 0
    minLen = len(s)  # 압축 아예 안한 경우: 최솟값
    for sliceLen in range(1, (len(s) // 2) + 1):  # 최대 나눌 수 있는 길이는 len(s)/2
        tempStr = ""
        cnt = 1
        totalCnt = 0
        previous = s[0:sliceLen]
        i = sliceLen
        while totalCnt < len(s) // sliceLen:
            while previous == s[i : i + sliceLen]:
                cnt += 1
                i += sliceLen
                totalCnt += 1
            if cnt == 1:
                tempStr += previous
            else:
                tempStr = tempStr + str(cnt) + previous
            cnt = 1
            previous = s[i : i + sliceLen]
            i += sliceLen
            totalCnt += 1

        if len(s) % sliceLen != 0:  # 나머지가 있다면
            tempStr += s[len(s) - len(s) % sliceLen :]
        if len(tempStr) < minLen:
            minLen = len(tempStr)

    answer = minLen
    return answer


s = input()
print(solution(s))