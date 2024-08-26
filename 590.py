"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""
# https://leetcode.com/problems/n-ary-tree-postorder-traversal/?envType=daily-question&envId=2024-08-26
class Solution:
    ans = []
    def nav(self, node):
        if node:
            if len(node.children) > 0:
                for c in node.children:
                    self.nav(c)
            self.ans.append(node.val)
    def postorder(self, root: 'Node') -> List[int]:
        self.ans.clear()
        self.nav(root)
        return self.ans
