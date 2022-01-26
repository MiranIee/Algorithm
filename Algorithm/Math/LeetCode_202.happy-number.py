#
# @lc app=leetcode id=202 lang=python
#
# [202] Happy Number
#

# @lc code=start
class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        # 2
        # 4
        # 16
        # 1 + 36 = 37
        # 9 + 49 = 56
        # 25 + 36 = 61
        # 36 + 1 = 37
        # ... 계속 반복
        set_ = set()

        while n != 1:
            list = map(int, str(n))
            n = 0
            for i in list:
                n += pow(i, 2)
# => n = sum([int(i)**2 for i in str(n)])
            if n in set_:
                return False
            else:
                set_.add(n)

        return True

# Your runtime beats 57.39 % of python submissions
# Your memory usage beats 91.62 % of python submissions (13.3 MB)

# 정수 자리수 분리
# : map(int, str(n))

# @lc code=end
