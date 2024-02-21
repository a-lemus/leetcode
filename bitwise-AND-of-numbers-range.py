#https://leetcode.com/problems/bitwise-and-of-numbers-range/?envType=daily-question&envId=2024-02-21
class Solution:
    def rangeBitwiseAnd(self, m: int, n: int) -> int:
        shift = 0   
        while m < n:
            m = m >> 1
            n = n >> 1
            shift += 1
        return m << shift