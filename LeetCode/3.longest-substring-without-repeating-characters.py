#
# @lc app=leetcode id=3 lang=python3
#
# [3] Longest Substring Without Repeating Characters
#

# @lc code=start
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:

        if len(s) == 1:
            return 1

        maxLen = 0
        set_ = set()

        for i in range(len(s)):  # start flag
            for j in range(i, len(s)):
                if s[j] in set_:
                    maxLen = max(maxLen, len(set_))
                    set_ = set()
                    break
                set_.add(s[j])

            if maxLen > len(s)-i:
                break

        return max(maxLen, len(set_))

# @lc code=end

# DP: https://libdwct.github.io/algorithm/leetcode3.html
# Slding Window: https://velog.io/@kgh732/Python-%EC%9C%BC%EB%A1%9C-%ED%91%B8%EB%8A%94-Leetcode3.-Longest-Substring-Without-Repeating-Characters
        #  https://inspirit941.tistory.com/304
# Two pointer: https://torbjorn.tistory.com/570
