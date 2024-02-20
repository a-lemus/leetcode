#https://leetcode.com/problems/missing-number/submissions/1181392467/?envType=daily-question&envId=2024-02-20
class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = sum(nums)
        x = len(nums)
        return ((x*(x+1))//2)-n
            