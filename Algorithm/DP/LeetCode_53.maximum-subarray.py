#
# @lc app=leetcode id=53 lang=python
#
# [53] Maximum Subarray
#

# @lc code=start
class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # DP O(N)
        curSum = maxSum = nums[0]
        for num in nums[1:]:
            curSum = max(num, curSum+num)
            maxSum = max(maxSum, curSum)

        return maxSum

        # sol2)
        # for i in range(1, len(nums)):
        #     nums[i] = max(nums[i-1]+nums[i], nums[i])
        # return max(nums)


# @lc code=end
