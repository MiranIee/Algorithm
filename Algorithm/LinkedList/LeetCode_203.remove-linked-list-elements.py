#
# @lc app=leetcode id=203 lang=python
#
# [203] Remove Linked List Elements
#

# @lc code=start
# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def removeElements(self, head, val):
        """
        :type head: ListNode
        :type val: int
        :rtype: ListNode
        """
        cur = head
        flg = False
        if cur != None and cur.val == val:  # 첫번째 노드
            flg = True

        while cur != None:
            if cur.next != None and cur.next.val == val:
                if cur.next.next != None:
                    cur.next = cur.next.next
                else:
                    cur.next = None
            else:
                cur = cur.next

        return head.next if flg == True else head


# a = Solution
# a.removeElements(a, ListNode(7, ListNode(7, ListNode(7, ListNode(7)))), 7)

# @lc code=end
