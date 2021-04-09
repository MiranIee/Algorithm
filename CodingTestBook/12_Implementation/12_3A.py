def solution(s):
    answer = len(s)

    # 단위(sliceLen)을 늘려가며 확인
    for sliceLen in range(1, len(s) // 2 + 1):
        tempStr = ""
        previous = s[0:sliceLen]
        cnt = 1

        # sliceLen만큼 증가시키며 이전 문자열과 비교
        for j in range(sliceLen, len(s), sliceLen):
            if previous == s[j : j + step]:
                cnt += 1
            # 압축이 안된다면
            else:
                tempStr += str(cnt) + previous if cnt >= 2 else previous
                previous = s[j : j + sliceLen]
                cnt = 1

        tempStr += str(cnt) + previous if cnt >= 2 else previous

        answer = min(answer, len(tempStr))

    return asnwer
