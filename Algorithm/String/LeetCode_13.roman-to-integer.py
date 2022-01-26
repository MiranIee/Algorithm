#
# @lc app=leetcode id=13 lang=python3
#
# [13] Roman to Integer
#

# @lc code=start
class Solution:
    def romanToInt(self, s: str) -> int:
        romanDic = {'I': 1, 'V': 5, 'X': 10,
                    'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        sum = 0
        for i in range(len(s)-1):
            if(romanDic[s[i]] < romanDic[s[i+1]]):  # 4 또는 9
                sum += -romanDic[s[i]]
                continue
            sum += romanDic[s[i]]
        return sum + romanDic[s[-1]]
# @lc code=end
