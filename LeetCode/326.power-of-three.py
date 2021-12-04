#
# @lc app=leetcode id=326 lang=python
#
# [326] Power of Three
#

# @lc code=start
class Solution(object):
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        while n > 2:
            if n % 3 != 0:
                return False
            n = n / 3

        return n == 1

# @lc code=end
