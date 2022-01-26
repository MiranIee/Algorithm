#
# @lc app=leetcode id=160 lang=python
#
# [160] Intersection of Two Linked Lists
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def getIntersectionNode(self, headA, headB):
        """
        :type head1, head1: ListNode
        :rtype: ListNode
        """
# 한번 교집합이 시작하면 끝까지 같음
# ㄴ 각 리스트의 마지막 노드가 다르면 교집합이 다른 것
# ㄴ 처음으로 만나는 지점을 찾아야 함

    # SOL1)
    # 1. 먼저 A를 순회하며 set에 넣는다
    # 2. B를 순회하며 A set에 같은 게 있는지 확인한다 -> O(1)
    #     ㄴ A set가 순서가 없어도, B는 순서대로 순회하고 있기 때문에
    #       val와 next가 같은 노드를 찾으면 그 노드부터 교집합 시작

        headA_ = set()
        while headA:
            headA_.add(headA)
            headA = headA.next

        while headB:
            if headB in headA_:
                return headB
            else:
                headB = headB.next

# Your runtime beats 35.19 % of python submissions
# Your memory usage beats 29.63 % of python submissions (43.5 MB)

    # SOL2)
    # 1. A, B를 순회하며 길이를 구한다.
    # 2. 마지막 노드가 다르면 교집합이 없으므로 None을 반환한다.
    # 3. 두 길이의 차이만큼 커서를 이동시키고 동시에 커서를 이동하며 교집합을 찾는다.

        headA_, headB_ = headA, headB
        lenA = lenB = 0

        while headA_:
            lenA += 1
            headA_ = headA_.next

        while headB_:
            lenB += 1
            headB_ = headB_.next

        if headA_ != headB_:
            return None

        headA_, headB_ = headA, headB

        if lenA > lenB:
            for i in range(lenA-lenB):
                headA_ = headA_.next
        else:
            for i in range(lenB-lenA):
                headB_ = headB_.next

        while headA_ != headB_:
            headA_, headB_ = headA_.next, headB_.next

        return headA_

# Your runtime beats 35.07 % of python submissions
# Your memory usage beats 59.73 % of python submissions (43.3 MB)
# @lc code=end
