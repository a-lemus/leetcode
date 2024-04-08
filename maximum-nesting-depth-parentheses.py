#https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/?envType=daily-question&envId=2024-04-04
class Solution:
    def maxDepth(self, s: str) -> int:
        levels = []
        running = 0
        for let in s:
            if let=="(":
                running+=1
            if let==")":
                running-=1
            levels.append(running)
        return max(levels)