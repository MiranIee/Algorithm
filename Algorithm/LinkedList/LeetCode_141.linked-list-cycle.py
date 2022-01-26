#
# @lc app=leetcode id=141 lang=python
#
# [141] Linked List Cycle
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """

        visited = set()
        while head:
            if head in visited:
                return True
            visited.add(head)
            head = head.next

        return False
# Your runtime beats 30.92 % of python submissions
# Your memory usage beats 9.18 % of python submissions (21.1 MB)

# 자료구조 - SET
# dictionary와 동일하게 {}로 감싸지만 {key:value} 형식이 아닌 {elem1, elem2 ..} 형식
# 원소 검색 시간 복잡도 O(1)
# @lc code=end
