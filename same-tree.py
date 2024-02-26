#https://leetcode.com/problems/same-tree/submissions/1187040247/?envType=daily-question&envId=2024-02-26
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        def navigate(a,b):
            if a:
                if not b or a.val != b.val: return False
                return navigate(a.left,b.left) and navigate(a.right,b.right)
            else:
                if b: return False
                return True
        
        return navigate(p,q)
                