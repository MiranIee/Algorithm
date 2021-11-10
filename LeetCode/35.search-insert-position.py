#
# @lc app=leetcode id=35 lang=python
#
# [35] Search Insert Position
#

# @lc code=start
class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        # Binary Search sol)

        l, r = 0, len(nums)-1
        while l <= r:
            mid = (l+r)/2
            if nums[mid] == target:
                return mid
            if nums[mid] < target:
                l = mid+1
            else:
                r = mid-1
        return l

        # Your runtime beats 85.4 % of python submissions
        # Your memory usage beats 28.29 % of python submissions(14.3 MB)

        # Linear Search sol)
        #
        # for i in range(len(nums)):
        #     if target <= nums[i]:
        #         return i
        # return len(nums)

        # Your runtime beats 64.6 % of python submissions
        # Your memory usage beats 83.19 % of python submissions (14.1 MB)


# @lc code=end
