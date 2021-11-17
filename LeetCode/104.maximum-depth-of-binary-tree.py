#
# @lc app=leetcode id=104 lang=python
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
    # maxLen = 0

    def maxDepth(self, root):
        #     """
        #     :type root: TreeNode
        #     :rtype: int
        #     """
        #     # DFS, inorder
        #     def checkDepth(node, cnt):
        #         if node:
        #             checkDepth(node.left, cnt+1)
        #             checkDepth(node.right, cnt+1)
        #         else:
        #             self.maxLen = max(self.maxLen, cnt)
        #     self.maxLen = 0
        #     checkDepth(root, 0)
        #     return self.maxLen

        if not root:
            return 0
        return max(self.maxDepth(root.left), self.maxDepth(root.right))+1

# @lc code=end
