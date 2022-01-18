import sys
input = sys.stdin.readline
n = int(input())


def solution(n):
    # n의 제곱근이 정수인 경우
    if int(n**0.5) == n**0.5:
        return 1
    # n-i^2 제곱근이 정수인 경우
    for i in range(1, int(n**0.5)+1):
        if int((n-i**2)**0.5) == (n-i**2)**0.5:
            return 2
    # n-i^2-j^2 제곱근이 정수인 경우
    for i in range(1, int(n**0.5+1)):
        for j in range(1, int((n-i**2)**0.5)+1):
            if int((n-i**2-j**2)**0.5) == (n-i**2-j**2)**0.5:
                return 3
    return 4


print(solution(n))
