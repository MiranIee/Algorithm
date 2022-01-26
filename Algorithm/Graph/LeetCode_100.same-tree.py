#
# @lc app=leetcode id=100 lang=python
#
# [100] Same Tree
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right


class Solution(object):
    Flag = True

    def traversal(self, node1, node2):
        if (node1 and node2 == None) or (node1 == None and node2):
            self.Flag = False
        if node1 and node2:
            if node1.val != node2.val:
                self.Flag = False
            self.traversal(node1.left, node2.left)
            self.traversal(node1.right, node2.right)

    def isSameTree(self, p, q):
        """
        :type p: TreeNode
        :type q: TreeNode
        :rtype: bool
        """
        self.Flag = True
        self.traversal(p, q)
        return self.Flag
    # Your runtime beats 99.53 % of python submissions
    # Your memory usage beats 14.6 % of python submissions (13.7 MB)

    # SOL2)
    # def isSameTree(self, p, q):
    #     if not p and not q:
    #         return True
    #     if not p or not q:
    #         return False
    #     return p.val == q.val and self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)


# @lc code=end
