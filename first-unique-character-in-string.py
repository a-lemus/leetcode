#https://leetcode.com/problems/first-unique-character-in-a-string/submissions/1167316260/?envType=daily-question&envId=2024-02-05
class Solution:
    def firstUniqChar(self, s: str) -> int:
        for i in range(len(s)):
            if s.count(s[i])==1: return i
        return -1