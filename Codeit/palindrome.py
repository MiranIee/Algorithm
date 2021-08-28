def is_palindrome(word):
    length = len(word)
    if length / 2 == 0:
        return False

    for i in range(0, int(length / 2)):
        if word[i] == word[length - i - 1]:
            continue
        else:
            return False
    return True


# 테스트
print(is_palindrome("racecar"))
print(is_palindrome("stars"))
print(is_palindrome("토마토"))
print(is_palindrome("kayak"))
print(is_palindrome("hello"))