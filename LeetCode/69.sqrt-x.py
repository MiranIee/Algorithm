#
# @lc app=leetcode id=69 lang=python
#
# [69] Sqrt(x)
#

# @lc code=start
class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        # sol2) binary Search
        l, r = 0, x
        while l <= r:
            mid = (l + r) // 2
            if x < mid * mid:
                r = mid - 1
            elif mid * mid < x:
                l = mid + 1
            else:
                return mid

        return l-1

        # Your runtime beats 72.22 % of python submissions
        # Your memory usage beats 13.65 % of python submissions (13.5 MB)

        # sol1)
        # i = 1
        # while(i*i <= x):
        #     if(i*i == x):
        #         return i
        #     i += 1
        # return i - 1
        # Your runtime beats 8.34 % of python submissions
        # Your memory usage beats 66.31 % of python submissions (13.4 MB)


# a = Solution
# a.mySqrt(a, 8)
# @lc code=end
