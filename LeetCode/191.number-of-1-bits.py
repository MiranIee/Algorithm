#
# @lc app=leetcode id=191 lang=python
#
# [191] Number of 1 Bits
#

# @lc code=start
class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        # SOL1)
        return bin(n).count('1')
        # Your runtime beats 87.15 % of python submissions
        # Your memory usage beats 5.11 % of python submissions (13.6 MB)

        # SOL2)
        # count_dic = {'0': 0, '1': 0}
        # for element in bin(n)[2:]:
        #     count_dic[element] += 1
        # return count_dic['1']

    # Your runtime beats 63.93 % of python submissions
    # Your memory usage beats 37.95 % of python submissions (13.5 MB)
# @lc code=end
