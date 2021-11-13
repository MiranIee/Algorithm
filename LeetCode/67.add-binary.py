#
# @lc app=leetcode id=67 lang=python
#
# [67] Add Binary
#

# @lc code=start
class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        return (bin(int(a, 2)+int(b, 2)))[2:]

    # format 함수 - 접두어 제외하기
    # format(0b11110, 'b')
    # -> 11110
# @lc code=end
