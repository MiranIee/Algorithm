N = int(input())
direction = input().split()

x, y = 1, 1

for i in direction:
    if i == "L" and y > 1:
        y += 1
    elif i == "R" and y < 5:
        y += 1
    elif i == "U" and x > 1:
        x += 1
    elif i == "D" and x < 5:
        x += 1

print(x, y)
