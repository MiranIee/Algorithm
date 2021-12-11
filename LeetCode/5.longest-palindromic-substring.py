#
# @lc app=leetcode id=5 lang=python3
#
# [5] Longest Palindromic Substring
#

# @lc code=start
class Solution:
    def longestPalindrome(self, s: str) -> str:

        longest = 0
        idx = (0, 0)
        dic = {}
        for i in range(len(s)):
            for j in range(i+1, len(s)):
                if s[i] == s[j]:
                    new_s = s[i:j+1]
                    if new_s == new_s[::-1] and longest < len(new_s):
                        longest = len(new_s)
                        idx = (i, j)
        return s[idx[0]:idx[1]+1]


# a = Solution
# a.longestPalindrome(a, "babad")
# @lc code=end
