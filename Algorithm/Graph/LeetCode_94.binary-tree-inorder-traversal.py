#
# @lc app=leetcode id=94 lang=python
#
# [94] Binary Tree Inorder Traversal
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    myList = []
    # SOL1) 재귀

    def traversal(self, node):
        if node:
            self.traversal(node.left)
            self.myList.append(node.val)
            self.traversal(node.right)

        return self.myList

    def inorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        self.myList = []
        return self.traversal(root)

    # SOL2) 반복
    # def inorderTraversal (self,root):
    #     res = stack = []
    #     while True:
    #         while root:
    #             stack.append(root)
    #             root = root.left
    #         if not stack:
    #             return res
    #         node = stack.pop()
    #         res.append(node.val)
    #         root = node.right

    # 중위순회
    # 왼쪽 서브트리를 중위순회 -> 노드 방문 -> 오른쪽 서브트리를 중위순회
    # 왼쪽 끝까지 내려간 이후 노드를 방문하고 오른쪽 자식노드로 이동해 순회

# void traversal(node){
#   if(node){
#     //visit(node); preorder
#     traversal(node->left);
#     //visit(node); inorder
#     traversal(node->right);
#     //visit(node); postorder
#   }
# }

# @lc code=end
