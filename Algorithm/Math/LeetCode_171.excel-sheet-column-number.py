#
# @lc app=leetcode id=171 lang=python
#
# [168] Excel Sheet Column Title
#

# @lc code=start
class Solution(object):
    def titleToNumber(self, columnTitle):
        """
        :type columnTitle: str
        :rtype: int
        """
        res = 0
        for i in range(len(columnTitle)):
            res += pow(26, len(columnTitle)-i-1) * (ord(columnTitle[i])-64)
        return res

# Your runtime beats 97.6 % of python submissions
# Your memory usage beats 25 % of python submissions (13.5 MB)
# @lc code=end
