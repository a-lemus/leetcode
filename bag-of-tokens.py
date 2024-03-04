#https://leetcode.com/problems/bag-of-tokens/submissions/1193933954/?envType=daily-question&envId=2024-03-04
class Solution:
    def bagOfTokensScore(self, tokens: List[int], power: int) -> int:
        tokens = sorted(tokens)
        score = 0
        n = len(tokens)
        while n>1 or (n==1 and tokens[0]<=power):
            n-=1
            if power>=tokens[0]:
                power-=tokens[0]
                tokens = tokens[1:]
                score+=1
            elif score>=1:
                power+=tokens[-1]
                score-=1
                tokens = tokens[:-1]
            else:
                return score
        return score

