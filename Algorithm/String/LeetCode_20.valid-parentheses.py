#
# @lc app=leetcode id=20 lang=python
#
# [20] Valid Parentheses
#

# @lc code=start
class Solution(object):
    def isValid(self, s):
        brackets = {"}": "{", "]": "[", ")": "("}
        openStack = []
        for bracket in s:
            if bracket in brackets.values():  # 여는 괄호인 경우
                openStack.append(bracket)
            else:  # 닫는 괄호인 경우
                if len(openStack) == 0:
                    return False
                elif(openStack[-1] == brackets[bracket]):
                    openStack.pop()
                else:
                    return False

        return openStack == []

# 파이썬에서 STACK 구현하기
# push = list.append()
# pop = list.pop()
# top = list[-1]

# Your runtime beats 89.77 % of python submissions
# Your memory usage beats 85.3 % of python submissions (13.4 MB)
# @lc code=end
