#
# @lc app=leetcode id=155 lang=python
#
# [155] Min Stack
#

# @lc code=start
class MinStack(object):

    # def __init__(self):
    #     self.stack = []
    #     self.topIdx = -1
    #     self.minValue = float('-inf')

    # def push(self, val):
    #     """
    #     :type val: int
    #     :rtype: None
    #     """
    #     self.topIdx += 1
    #     self.stack.append(val)

    # def pop(self):
    #     """
    #     :rtype: None
    #     """
    #     if self.topIdx >= 0:
    #         del self.stack[self.topIdx]
    #         self.topIdx -= 1

    # def top(self):
    #     """
    #     :rtype: int
    #     """
    #     if self.topIdx >= 0:
    #         return self.stack[self.topIdx]

    # def getMin(self):
    #     """
    #     :rtype: int
    #     """
    #     return min(self.stack)
    def __init__(self):
        """
        initialize your data structure here.
        """
        self.stack = []

    def push(self, x):
        """
        :type x: int
        :rtype: nothing
        """
        if not self.stack:
            self.stack.append((x, x))
        else:
            # -1: 마지막 요소, 계속 최솟값을 저장함
            self.stack.append((x, min(x, self.stack[-1][1])))

    def pop(self):
        """
        :rtype: nothing
        """
        if self.stack:
            self.stack.pop()

    def top(self):
        """
        :rtype: int
        """
        if self.stack:
            return self.stack[-1][0]
        else:
            return None

    def getMin(self):
        """
        :rtype: int
        """
        if self.stack:
            return self.stack[-1][1]
        else:
            return None


# @lc code=end
