#
# @lc app=leetcode id=136 lang=python
#
# [136] Single Number
#

# @lc code=start
class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        dic = {}
        for num in nums:
            if not dic.get(num):
                dic.setdefault(num, 1)
            else:
                dic.update({num: 2})
        # => dic[num] = dic.get(num,0)+1
        # dic.get(num,0)은 딕셔너리에 해당 값이 없으면 기본 값으로 지정한 0을 반환함
        for key, val in dic.items():
            if val == 1:
                return key
    # Your runtime beats 73.84 % of python submissions
    # Your memory usage beats 25.46 % of python submissions (16.3 MB)

        # for num in nums:
        #     if nums.count(num) == 1:
        #         return num
    # Your runtime beats 8.09 % of python submissions
    # Your memory usage beats 48 % of python submissions (15.8 MB)

# 해시테이블, 딕셔너리
# 장) 데이터 저장/읽기 속도가 빠름(검색 속도가 빠름)
# 단) 일반적으로 저장공간이 좀 더 많이 필요함
# 검색이 많이 필요한 경우에 활용
# @lc code=end
