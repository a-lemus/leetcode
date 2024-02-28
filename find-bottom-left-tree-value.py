#https://leetcode.com/problems/find-bottom-left-tree-value/submissions/1189072376/?envType=daily-question&envId=2024-02-28
class Solution:
    def findBottomLeftValue(self, root: Optional[TreeNode]) -> int:
        self.maxDepth = -1
        self.bottomLeftValue = 0
        self.dfs(root, 0)
        return self.bottomLeftValue

    def dfs(self, current: TreeNode, depth: int):
        if not current:
            return
        
        if depth > self.maxDepth:  # If true, we discovered a new level
            self.maxDepth = depth
            self.bottomLeftValue = current.val

        self.dfs(current.left, depth + 1)
        self.dfs(current.right, depth + 1)
        return

  