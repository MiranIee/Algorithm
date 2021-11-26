#
# @lc app=leetcode id=168 lang=python
#
# [168] Excel Sheet Column Title
#

# @lc code=start
class Solution(object):
    def convertToTitle(self, columnNumber):
        """
        :type columnNumber: int
        :rtype: str
        """

        res = ""
        cal = (columnNumber, 0)
        while cal[0] > 0:
            cal = divmod(cal[0]-1, 26)
            res += chr(65+cal[1])

        return res[::-1]

# 하지만 27 / 26 이든 26 / 26 이든 결과값은 항상 1일 것이다.
# 따라서 (n - 1) / 26으로 계산식을 만들면 결과 값이 0이기 때문에 이런식을 사용한다.
# EX) AZ(52) -> 2, 0 이지만 이에 해당하는 문자가 없기 때문에 -1을 해줘야 함
# @lc code=end
