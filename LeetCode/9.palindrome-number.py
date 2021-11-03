#
# @lc app=leetcode id=9 lang=python
#
# [9] Palindrome Number
#

# @lc code=start
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0:  # 음수인 경우
            return False
        x = str(x)

        for i in range(0, len(x) / 2):
            if x[i] != x[len(x) - 1 - i]:
                return False
        return True


# String 함수 이용
# def isPalindrome(self, x):
#     return str(x) == str(x)[::-1]

# 문자열 리버스, 뒤집기:
#   문자열을 str[::-1]로 호출하면 문자열을 뒤집은 값 반환
#   str[3:0:-1] -> 3번 인덱스부터 1번 인덱스까지(0번 아님) 역순으로 출력
#   str[3::-1] -> 3번 인덱스부터 0번 인덱스까지 역순으로 출력
#   str[::-1] -> 인덱스 처음부터 끝까지 역순으로 출력
#   문자열 뿐만 아니라 리스트, 튜플에도 적용 가능


# @lc code=end
