input_data = input()

x = (
    int(ord(input_data[0])) - int(ord("a")) + 1
)  # ord: 문자를 아스키 코드로 변환해줌, chr: 아스카 코드를 문자로 변환
y = int(input_data[1])

# x = input_data[0]
# x_positions = ["a", "b", "c", "d", "e", "f", "g", "h"]
# x = int(x_positions.index(x)) + 1


steps = [
    (-2, 1),
    (-1, -2),
    (1, -2),
    (2, -1),
    (2, 1),
    (1, 2),
    (-1, 2),
    (-2, 1),
]  # 이중 리스트

result = 0
for step in steps:
    nx = x + step[0]
    ny = y + step[1]

    if nx >= 1 and ny >= 1 and nx <= 8 and ny <= 8:
        result += 1

print(result)
