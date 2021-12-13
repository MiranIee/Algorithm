#
# @lc app=leetcode id=7 lang=python3
#
# [7] Reverse Integer
#

# @lc code=start
class Solution:
    def reverse(self, x: int) -> int:

        num = 0
        if x < 0:
            num = int("-" + str(x)[1:][::-1])
        else:
            num = int(str(x)[::-1])

        return num if num < 2**31-1 and num > -2**31 else 0

# @lc code=end
