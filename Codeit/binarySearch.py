def binary_search(element, some_list):
    first_idx = 0
    last_idx = len(some_list) - 1

    while first_idx <= last_idx:
        middle_idx = (first_idx + last_idx) // 2
        if some_list[middle_idx] == element:
            return middle_idx
        elif some_list[middle_idx] > element:
            last_idx = middle_idx - 1
        else:
            first_idx = middle_idx + 1
    return None


print(binary_search(2, [2, 3, 5, 7, 11]))
print(binary_search(0, [2, 3, 5, 7, 11]))
print(binary_search(5, [2, 3, 5, 7, 11]))
print(binary_search(3, [2, 3, 5, 7, 11]))
print(binary_search(11, [2, 3, 5, 7, 11]))