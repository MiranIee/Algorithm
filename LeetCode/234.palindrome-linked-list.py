#
# @lc app=leetcode id=234 lang=python
#
# [234] Palindrome Linked List
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        # SOL1)
        stored = []
        while head != None:
            stored.append(head.val)
            head = head.next
        return stored != stored[::-1]

        # SOL2) RUNNER 이용 -> 길이/ 중간 위치/ 병합 지점 등을 구할 때 유용
        rev = None  # 역순 저장 노드
        slow = fast = head  # slow: 한칸씩 이동, fast: 두칸씩 이동

        while fast and fast.next:
            fast = fast.next.next  # fast: 두칸씩 이동
            rev = slow  # 현재 slow 저장
            rev.next = rev  # 이전 rev를 넣어서 역순을 만듦
            slow = slow.next  # slow: 한칸씩 이동, 정방향 이동

        if fast:  # fast.next만 None인 경우, 노드 전체길이가 홀수인 경우
            slow = slow.next

        # fast가 리스트의 끝에 도달하면, slow는 정확히 중간 지점을 가르킴
        # 저장된 rev의 값과 중간 지점 값 비교 시작
        while rev and rev.val == slow.val:
            slow = slow.next
            rev = rev.next
        # 끝까지 도착한 경우 Palindrome -> rev는 None, not rev는 True
        return not rev

# @lc code=end
