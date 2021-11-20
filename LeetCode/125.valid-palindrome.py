#
# @lc app=leetcode id=125 lang=python
#
# [125] Valid Palindrome
#

# @lc code=start
class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        s = [i.lower() for i in s if i.isalnum()]
        return s == s[::-1]

        # 파이썬 내포(comprehension)가 더 빠르다 -> Function call이 현저히 작음
        newStr = ""
        for word in s:
            if word.isalnum():
                newStr += word.lower()

        return newStr == newStr[::-1]
        # Your runtime beats 17.71 % of python submissions
        # Your memory usage beats 46.23 % of python submissions (14.9 MB)


a = Solution()
a.isPalindrome('Marge, let"s \\"[went].\\" I await {news} telegram."')
# @lc code=end
