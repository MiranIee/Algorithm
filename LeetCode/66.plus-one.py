#
# @lc app=leetcode id=66 lang=python
#
# [66] Plus One
#

# @lc code=start
class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        if digits[-1] != 9:
            digits[-1] += 1
            return digits

        i = 1
        while i <= len(digits) and digits[-i] == 9:
            digits[-i] = 0
            i += 1
        if i+1 == len(digits):
            digits[-i+1] = 1
            digits.append(0)
        else:
            digits[-i] += 1
        return digits
    # Your runtime beats 46.69 % of python submissions
    # Your memory usage beats 70.99 % of python submissions (13.4 MB)

    sol2)
    # num=0
    # for i in range(len(digits)):
    #     num += digits[i]*pow(10, (len(digits)-1-i))
    # return [int(i) for i in str(num+1)]

# a = Solution
# a.plusOne(a, [9])
# @lc code=end
