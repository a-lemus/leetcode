#https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/?envType=daily-question&envId=2024-04-08
class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        n = len(students)
        hungry = [True] * n
        hasEatenThisLoop = True
        eaten = 0

        while hasEatenThisLoop:
            hasEatenThisLoop = False
            for i in range(n):
                if (hungry[i]) and students[i]==sandwiches[eaten]:
                    eaten+=1
                    hasEatenThisLoop = True
                    hungry[i] = False
        return n-eaten