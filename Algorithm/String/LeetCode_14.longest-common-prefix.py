#
# @lc app=leetcode id=14 lang=python3
#
# [14] Longest Common Prefix
#

# 그냥 안맞는 거 있으면 빠르게 리턴


# @lc code=start
class Solution:
    def longestCommonPrefix(self, strs):

        shortest = (min(strs, key=len))

        for i in range(1, len(shortest)+1):
            for word in strs:
                if(word[:i] != shortest[:i]):
                    return shortest[:i-1]
        return shortest


# @lc code=end

# Your runtime beats 95.32 % of python3 submissions
# Your memory usage beats 81.53 % of python3 submissions (14.2 MB)
