#
# @lc app=leetcode id=26 lang=python3
#
# [26] Remove Duplicates from Sorted Array
#

# @lc code=start
class Solution:
    def removeDuplicates(self, nums):
        temp = list(set(nums))
        temp.sort()
        for i, v in enumerate(temp):
            nums[i] = v
        return len(temp)


# Your runtime beats 85.36 % of python3 submissions
# Your memory usage beats 47.63 % of python3 submissions (15.7 MB)

# 파이썬 중복 제거
# SET 이용{} - set(list)로 중복 제거 가능

# @lc code=end
