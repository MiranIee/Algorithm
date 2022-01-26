#
# @lc app=leetcode id=190 lang=python
#
# [190] Reverse Bits
#

# @lc code=start
class Solution:
    # @param n, an integer
    # @return an integer
    def reverseBits(self, n):
        n_ = str(bin(n))[2:].zfill(32)
        return int(n_[::-1], 2)


# Your runtime beats 44.84 % of python submissions
# Your memory usage beats 13.74 % of python submissions (13.5 MB)
# @lc code=end

# text.zfill(길이)
# : 원하는 길이만큼 0을 앞에서 채움
# rjust (width, [fillchar])
# : 0이 아닌 fillchar에 해당하는 문자를 앞에서부터 width만큼 채움
# int to bin -> bin()
# string to int -> int(str[2:], 2) 이진수

# SOL2) String으로 변환하지 않고 format 함수 사용
# format()
#   ex) target = 2
#   a = format(target, '03')
#   b= '{0:06d}'.format(target)
#   -> a: 002, b:000002

    # def reverseBits(self, n):
    #     n_ = '{0:032b}'.format(n)
    #     return int(n_[::-1], 2)
