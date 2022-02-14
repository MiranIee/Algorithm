from collections import deque
# 배열에서 제일 큰 값, 그 다음으로 큰 값의 합 구하기
# sort 사용시 시간 초과
# O(N)으로 풀이 가능


def find_max_sum(numbers):
    maxValue = numbers[0]
    maxValue2 = numbers[0]
    for i in range(1, len(numbers)):
        if maxValue < numbers[i]:
            maxValue2 = maxValue
            maxValue = numbers[i]

    return maxValue + maxValue2


if __name__ == "__main__":
    print(find_max_sum([5, 9, 7, 11]))
