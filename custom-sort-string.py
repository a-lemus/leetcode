#https://leetcode.com/problems/custom-sort-string/submissions/1200761846/?envType=daily-question&envId=2024-03-11
class Solution:
    def customSortString(self, order: str, s: str) -> str:
        ans = ""
        for let in order:
            ct = s.count(let)
            if ct>0:
                ans+= let * ct
                s = s.replace(let,"")
        return ans + s
