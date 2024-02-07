#https://leetcode.com/problems/sort-characters-by-frequency/?envType=daily-question&envId=2024-02-07
class Solution:
    def frequencySort(self, s: str) -> str:
        lets = set(s)
        counts = []
        for let in lets:
            counts.append(s.count(let))
        
        comb = sorted(zip(counts,lets), reverse = True)

        return "".join([x * y for x,y in comb])
