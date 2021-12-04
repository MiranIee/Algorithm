#
# @lc app=leetcode id=283 lang=python
#
# [283] Move Zeroes
#

# @lc code=start
class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """

        # SOL 1) ---------------
        zeroIdx = []
        for i in range(len(nums)):
            if nums[i] == 0:
                zeroIdx.append(i)

        for i in range(len(zeroIdx)):
            del nums[zeroIdx[i]-i]
            nums.append(0)

        # SOL 2) ---------------
        zeroCnt = nums.count(0)
        for _ in range(zeroCnt):
            nums.remove(0)
            nums.append(0)

# @lc code=end
