#
# @lc app=leetcode id=206 lang=python
#
# [206] Reverse Linked List
#

# @lc code=start
# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head == None:
            return head

        stored = []
        while head != None:
            stored.append(head.val)
            head = head.next

        newHead = ListNode(0)
        cur = newHead
        for i in range(len(stored)):
            cur.next = ListNode(stored[len(stored)-i-1])
            cur = cur.next

        return newHead.next

# Your runtime beats 78.09 % of python submissions
# Your memory usage beats 19.29 % of python submissions (17.2 MB)


# NEWH = ListNode(2, ListNode(3, ListNode(4, ListNode(5))))
# a = Solution
# a.reverseList(a, NEWH)


# @lc code=end
