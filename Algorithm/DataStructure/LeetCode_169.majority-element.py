#
# @lc app=leetcode id=169 lang=python
#
# [169] Majority Element
#

# @lc code=start
import collections


class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # SOL1)
        count_dic = {e: 0 for e in set(nums)}
        maxValue = 0

        for num in nums:
            count_dic[num] += 1
            if count_dic[num] > len(nums) / 2:
                maxValue = num

        return maxValue

    # Your runtime beats 57.74 % of python submissions
    # Your memory usage beats 90.06 % of python submissions (14.6 MB)

    # Dictonary를 이용하여 Counter 구현
    # count_dic = {e: 0 for e in set(li)}
    # for element in list:
    #     count_dic[element] += 1
    # return count_dic

    # or
    # for element in list:
    #   count_dic[element] = counts_dic.get(element,0)+1

    # SOL2)
    # SET을 이용해서 중복 제거 후 반복문에서 nums.count로 길이 / 2와 비교
        # keys = set(nums)
        # ans = 0
        # for key in keys:
        #     if nums.count(key) > len(nums) / 2:
        #         ans = key
        #         break
        # return key
# Your runtime beats 98.48 % of python submissions
# Your memory usage beats 29.87 % of python submissions (15 MB)

# @lc code=end
