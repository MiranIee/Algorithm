import sys
from collections import deque

input = sys.stdin.readline
t = int(input())

for _ in range(t):
    func = input().strip()
    n = int(input())
    if n != 0:
        nums = list(map(int, input()[1: -2].split(',')))
        nums = deque(nums)
    else:
        n = input()
        nums = deque()

    errFlg, rvsFlg = False, False

    for cmd in func:
        if cmd == "R":
            rvsFlg = (False if rvsFlg else True)
        elif cmd == "D":
            if len(nums) != 0:
                if rvsFlg:
                    nums.pop()
                else:
                    nums.popleft()
            else:
                errFlg = True
                break

    if not errFlg:
        print("["+','.join(map(str, reversed(nums))) +
              "]") if rvsFlg else print("["+','.join(map(str, nums))+"]")
    else:
        print("error")
