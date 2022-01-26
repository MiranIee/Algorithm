#
# @lc app=leetcode id=70 lang=python
#
# [70] Climbing Stairs
#

# @lc code=start
class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        # DP Bottom up SOL)
        if n <= 2:
            return n

        dp = [0 for i in range(n)]
        dp[0], dp[1] = 1, 2

        for i in range(2, n):
            dp[i] = dp[i-1]+dp[i-2]

        return dp[n-1]

    # Your runtime beats 51.53 % of python submissions
    # Your memory usage beats 65.74 % of python submissions (13.4 MB)

    #  DP Top Down SOL)
    # if n <= 2:
    #     return n
    # return self.climbStairs(n-1) + self.climbStairs(n-2)

    # DP Top Down + memorization (dictionary)
    # def __init__(self):
    #     self.dic = {1: 1, 2: 2}

    # def climStairs(self, n):
    #     if n not in self.dic:
    #         self.dic[n] = self.climbStairs(n-1)+self.climStairs(n-2)
    #     return self.dic[n]
# @lc code=end
