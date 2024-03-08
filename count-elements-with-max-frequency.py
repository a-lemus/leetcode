#https://leetcode.com/problems/count-elements-with-maximum-frequency/submissions/1197900105/?envType=daily-question&envId=2024-03-08
class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        freq = [nums.count(x) for x in set(nums)]
        high = max(freq)
        return sum([f for f in freq if f==high])

