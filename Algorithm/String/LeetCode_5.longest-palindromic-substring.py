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

        if len(s) < 2 or s == s[::-1]:
            return s

        for i in range(len(s)):
            for j in range(i+1, len(s)):
                if s[i] == s[j] and longest < j-i+1 and s[i:j+1] == s[i:j+1][::-1]:
                    longest, idx = j-i+1, (i, j)

        return s[idx[0]:idx[1]+1]


# @lc code=end
