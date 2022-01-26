#
# @lc app=leetcode id=27 lang=python
#
# [27] Remove Element
#

# @lc code=start
class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        while(1):
            if val in nums:
                nums.remove(val)
            else:
                return len(nums)

        # sol 2)
        # while(nums.count(val)):
        #     nums.remove(val)
        # return len(nums)

# Your runtime beats 76.63 % of python submissions
# Your memory usage beats 12.59 % of python submissions (13.5 MB)
# @lc code=end
