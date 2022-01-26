#
# @lc app=leetcode id=11 lang=python
#
# [11] Container With Most Water
#

# @lc code=start

class Solution(object):
    def maxArea(self, height):
        l, r, maxArea = 0, len(height)-1, 0
        while l < r:
            if height[l] < height[r]:
                maxArea = max(maxArea, height[l]*(r-l))
                l += 1
            else:
                maxArea = max(maxArea, height[r]*(r-l))
                r -= 1
        return maxArea

        # @lc code=end
