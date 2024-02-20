#https://leetcode.com/problems/furthest-building-you-can-reach/submissions/1178328413/
class Solution:
    def furthestBuilding(self, heights: List[int], bricks: int, ladders: int) -> int:
        jumps = []

        for i in range(len(heights)-1):
            gap = heights[i+1] - heights[i]
            if gap<=0:
                continue
            heapq.heappush(jumps,gap)
            if ladders>0:
                ladders-=1
                continue
            bricks-=heapq.heappop(jumps)
            if bricks<0: return i
        return len(heights)-1
            
