#
# @lc app=leetcode id=121 lang=python
#
# [121] Best Time to Buy and Sell Stock
#

# @lc code=start
class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        minPrice, maxProfit = float('inf'), 0
        for price in prices:
            minPrice = min(price, minPrice)
            maxProfit = max(price-minPrice, maxProfit)

        return maxProfit

# @lc code=end
