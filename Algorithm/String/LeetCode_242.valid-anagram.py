#
# @lc app=leetcode id=242 lang=python
#
# [242] Valid Anagram
#

# @lc code=start
class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        # SOL 1) ===============================
        if len(s) != len(t):
            return False

        s_list = {e: 0 for e in set(s)}
        t_list = {e: 0 for e in set(t)}

        for i in range(len(s)):
            if s[i] in s_list:
                s_list[s[i]] += 1
            if t[i] in t_list:
                t_list[t[i]] += 1

        return s_list == t_list

        # SOL 2) ===============================

        if len(s) != len(t):
            return False

        s_dic, t_dic = {}, {}

        for i in range(len(s)):
            s_dic[s[i]] = s_dic.get(s[i], 0)+1
            t_dic[t[i]] = t_dic.get(t[i], 0)+1

        return s_dic == t_dic

        # SOL 3) ===============================
        return sorted(s) == sorted(t)
# Dictionary Get

# Key를 찾고 싶을 때 -> key in dict
# Value를 찾고 싶을 때 -> dic.get(key, default_value)
#   ㄴ default_value는 찾고자하는 키가 없는 경우 초기화시킬 값
# @lc code=end
