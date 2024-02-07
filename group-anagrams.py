#https://leetcode.com/problems/group-anagrams/submissions/1169108118/?envType=daily-question&envId=2024-02-06
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagrams = [str(sorted(x)) for x in strs]
        correspond = zip(strs,anagrams)
        gramDict = {}

        for string,gram in correspond:
            if gram in gramDict:
                gramDict.update({gram:gramDict[gram]+[string]})
            else:
                gramDict.update({gram:[string]})
        
        return gramDict.values()

        