#
# @lc app=leetcode id=2 lang=python
#
# [2] Add Two Numbers
#

# @lc code=start
# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        l3 = ListNode()
        cur = l3
        carry = 0

        while l1 and l2:  # 둘 중에 하나 끝까지 갔으면
            carry, val = divmod(l1.val+l2.val+carry, 10)
            l1 = l1.next
            l2 = l2.next
            cur.next = ListNode(val)
            cur = cur.next

        l4 = l1 if l1 else l2  # 남아있는 노드 계속 더함

        while l4:
            carry, val = divmod(l4.val+carry, 10)
            l4 = l4.next
            cur.next = ListNode(val)
            cur = cur.next

        if carry == 1:
            cur.next = ListNode(1)

        return l3.next

        # @lc code=end
# a = Solution
# l1 = ListNode(2, ListNode(3, ListNode(4, ListNode(2))))
# l2 = ListNode(5, ListNode(6, ListNode(4)))
# a.addTwoNumbers(a, l1, l2)
