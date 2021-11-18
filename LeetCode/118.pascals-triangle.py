#
# @lc app=leetcode id=118 lang=python
#
# [118] Pascal's Triangle
#

# @lc code=start
class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        # SOL1)
        # result = []
        # for i in range(numRows):
        #     temp = []
        #     for j in range(i+1):
        #         if j == 0 or j == i:
        #             temp.append(1)
        #         else:
        #             temp.append(result[i-1][j-1]+result[i-1][j])
        #     result.append(temp)

        # return result

        # Your runtime beats 99.47 % of python submissions
        # Your memory usage beats 67.72 % of python submissions(13.3 MB)

        # SOL2)
        result = [[1]*(i+1) for i in range(numRows)]
        for i in range(numRows):
            for j in range(1, i):  # 처음, 마지막은 해당
                result[i][j] = result[i-1][j-1]+result[i-1][j]
        return result
        # Your runtime beats 50.61 % of python submissions
        # Your memory usage beats 39.36 % of python submissions (13.5 MB)

# a = Solution()
# a.generate(5)

# @lc code=end
