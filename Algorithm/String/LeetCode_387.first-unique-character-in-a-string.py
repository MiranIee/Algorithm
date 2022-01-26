#
# @lc app=leetcode id=387 lang=python3
#
# [387] First Unique Character in a String
#

# @lc code=start
class Solution:
    def firstUniqChar(self, s: str) -> int:
        counts = {}
        for i in s:
            counts[i] = counts.get(i, 0)+1

        for k, v in counts.items():
            if v == 1:
                return s.index(k)

        return -1

# Python 3.6부턴 Dictonary에 집어넣은 순서 유지

# @lc code=end
