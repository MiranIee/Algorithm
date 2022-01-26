#
# @lc app=leetcode id=28 lang=python
#
# [28] Implement strStr()
#

# @lc code=start
class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        if needle == "":
            return 0

        return haystack.find(needle)

        # 내장함수 사용하지 않은 sol)
        # for i in range(len(haystack)-len(needle)+1):
        #     if haystack[i:i+len(needle)] == needle:
        #         return i
        # return -1

# @lc code=end
