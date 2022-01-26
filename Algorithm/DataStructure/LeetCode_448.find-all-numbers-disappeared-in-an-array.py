#
# @lc app=leetcode id=448 lang=python
#
# [448] Find All Numbers Disappeared in an Array
#

# @lc code=start
class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        # SOL1)
        num_ = set(sorted(nums))
        res = []
        for i in range(1, len(nums)+1):
            if not i in num_:
                res.append(i)
        return res

        # SOL2) 차집합 이용
        return set(range(1, len(nums)+1)) - set(nums)


# @lc code=end
