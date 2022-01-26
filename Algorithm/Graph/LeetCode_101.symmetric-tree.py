#
# @lc app=leetcode id=101 lang=python
#
# [104] Maximum Depth of Binary Tree
#

# @lc code=start

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):

    def isSymmetric(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        # SOL2) 반복
        stack = [root.left, root.right]
        while stack:
            p, q = stack.pop(), stack.pop()

            if not p and not q:
                continue
            if not p or not q or p.val != q.val:
                return False

            stack.append(p.left)
            stack.append(q.right)
            stack.append(p.right)
            stack.append(q.left)

        return True
        # SOL1) 재귀
        # def isSym(L, R):
        #     if not L and not R:
        #         return True
        #     if not L or not R:
        #         return False
        #     return L.val == R.val and isSym(L.left, R.right) and isSym(L.right, R.left)

        # return isSym(root, root)

        # Your runtime beats 99.37 % of python submissions
        # Your memory usage beats 93.08 % of python submissions (13.6 MB)
# @lc code=end
