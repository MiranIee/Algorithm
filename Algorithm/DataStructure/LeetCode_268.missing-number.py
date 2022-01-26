#
# @lc app=leetcode id=268 lang=python
#
# [268] Missing Number
#

# @lc code=start
class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # SOL1) -------------------

        nums.sort()
        for i in range(len(nums)):
            if i != nums[i]:
                return i
        return len(nums)

        # SOL2) -------------------
        # SET 이용

        n = len(nums)
        return (set(range(len(nums)+1))-set(nums)).pop()
        # pop을 사용하지 않으려면 리스트로 변환 후 0번째 값 반환

        # SOL3) -------------------
        # 값의 합 이용
        return sum(range(len(nums)+1))-sum(nums)
# range(n):
# 0부터 n-1까지의 숫자 생성

# SET 교집합:
#   1. s1 & s2
#   2. s1.intersection(s2)
# SET 합집합:
#   중복된 값은 한 개씩만 표현됨
#   1. s1 | s2
#   2. s1.union(s2)
# SET 차집합:
#   1. s1 - s2
#   2. s1.difference(s1)

# SET에서의 pop():
# 랜덤한 값 제거 후 반환
# @lc code=end
