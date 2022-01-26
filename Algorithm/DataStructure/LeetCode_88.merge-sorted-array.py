#
# @lc app=leetcode id=88 lang=python
#
# [88] Merge Sorted Array
#

# @lc code=start
class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        del nums1[m:]
        # 크기는 그대로 남아있기 때문에
        # nums1 = nums1[:m] XXX
        nums1 += nums2
        nums1.sort()

    # Your runtime beats 99.81 % of python submissions
    # Your memory usage beats 74.13 % of python submissions (13.4 MB)


# @lc code=end
