#https://leetcode.com/problems/find-polygon-with-the-largest-perimeter/?envType=daily-question&envId=2024-02-15
class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        nums = sorted(nums)
        runningTot = 0
        sides = 0
        ans = -1
        for num in nums:
            sides+=1
            if sides>=3:
                if runningTot>num:
                    ans = max([ans,runningTot+num])
            runningTot+=num
        return ans
