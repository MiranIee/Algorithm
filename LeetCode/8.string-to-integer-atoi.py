#
# @lc app=leetcode id=8 lang=python3
#
# [8] String to Integer (atoi)
#

# @lc code=start
class Solution:
    def myAtoi(self, s: str) -> int:

        s = s.split()
        if not len(s):
            return 0

        isMinus = 1
        if s[0][0] == "-":
            s[0] = s[0][1:]
            isMinus = -1
        elif s[0][0] == "+":
            s[0] = s[0][1:]

        for i in s[0]:
            if i == "." or not i.isdigit():
                s[0] = s[0][:s[0].index(i)]
                break

        if not len(s[0]):
            return 0
        else:
            num = isMinus*int(s[0])
        return max(-2**31, min(num, 2**31-1))


#a = Solution
#a.myAtoi(a, "  -0012a42")


# @lc code=end
