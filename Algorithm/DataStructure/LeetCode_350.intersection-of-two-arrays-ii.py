#
# @lc app=leetcode id=350 lang=python
#
# [350] Intersection of Two Arrays II
#

# @lc code=start
class Solution(object):
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        # SOL1)
        # remove의 return 값은 None이므로 remove를 실행해 not의 조건식을 만족하는 경우만 i append

        return [i for i in nums1 if i in nums2 and not nums2.remove(i)]

        # SOL2) Dictonary 이용
        counts = {}
        res = []
        for num in nums1:
            counts[num] = counts.get(num, 0)+1
        for num in nums2:
            if num in counts and counts[num] > 0:
                res.append(num)
                counts[num] -= 1

        return res

# @lc code=end
