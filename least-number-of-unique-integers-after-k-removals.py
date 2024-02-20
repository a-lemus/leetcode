#https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/?envType=daily-question&envId=2024-02-16
from collections import Counter
class Solution:
    def findLeastNumOfUniqueInts(self,arr,k):
        counts = Counter(arr).values()
        
        counts = sorted(counts, reverse = True)
        n = len(counts)
        while n>0 and k>=counts[-1]:
            k-=counts.pop()
            n-=1
        return len(counts)
