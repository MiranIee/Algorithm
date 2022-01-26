#
# @lc app=leetcode id=1 lang=python
#
# [1] Two Sum
#

# @lc code=start


class Solution(object):
    def twoSum(self, nums, target):
        for i in range(0, len(nums) - 1):
            for j in range(i + 1, len(nums)):
                result = nums[i] + nums[j]
                if result == target:
                    return [i, j]


# class Solution(object):
#     def twoSum(self, nums, target):
#         hashmap = {}
#         for i in range(len(nums)):
#             complement = target - nums[i]
#             if complement in hashmap:
#                 return [i, hashmap[complement]]
#             hashmap[nums[i]] = i


# @lc code=end
