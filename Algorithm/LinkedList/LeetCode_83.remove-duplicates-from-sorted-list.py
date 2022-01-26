#
# @lc app=leetcode id=83 lang=python
#
# [83] Remove Duplicates from Sorted List
#

# @lc code=start
# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head == None:
            return head

        newHead = ListNode(head.val)
        cursor = newHead
        while head != None:
            curVal = head.val
            head = head.next
            while head != None and curVal == head.val:
                head = head.next
            cursor.next = head
            cursor = cursor.next

        return newHead
    # Your runtime beats 96.27 % of python submissions
    # Your memory usage beats 39.89 % of python submissions (13.6 MB)

# a = Solution
# listNode = ListNode(1)
# head = listNode
# listNode.next = ListNode(1)
# listNode = listNode.next
# listNode.next = ListNode(2)
# a.deleteDuplicates(a, head)

# @lc code=end
