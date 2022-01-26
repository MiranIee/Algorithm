#
# @lc app=leetcode id=19 lang=python
#
# [19] Remove Nth Node From End of List
#

# @lc code=start
# Definition for singly-linked list.


class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        # SOL1) fast 포인터로 길이 구해서 노드 제거
        if not head.next:
            return None

        fast = head
        linkLen = 0

        while fast and fast.next:
            fast = fast.next.next
            linkLen += 2

        if fast:
            linkLen += 1

        cur = head
        for _ in range(linkLen-n-1):
            cur = cur.next
        # cur는 지워야할 노드 전에 있음

        # 마지막 노드인 경우
        if n == 1:
            cur.next = None
        elif linkLen-n == 0:  # 처음 노드인 경우
            head = head.next
        else:
            cur.next = cur.next.next

        return head

        # SOL2) Two pointer 이용 ==========================
        fast = slow = head
        for _ in range(n):  # fast포인터를 n만큼 먼저 보냄
            fast = fast.next
        if not fast:
            return head.next
        while fast.next:  # 마지막 노드에 도달할 때까지
            fast = fast.next
            slow = slow.next
        slow.next = slow.next.next

        return head

# a = Solution
# #a.removeNthFromEnd(a,ListNode(1,ListNode(2,ListNode(3,ListNode(4,ListNode(5))))),2)
# a.removeNthFromEnd(a,ListNode(1,ListNode(2)),2)


# @lc code=end
