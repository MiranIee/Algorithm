import sys

input = sys.stdin.readline

while True:
    n = input().strip()
    if n == "0":
        break

    print("yes") if n == n[::-1] else print("no")
