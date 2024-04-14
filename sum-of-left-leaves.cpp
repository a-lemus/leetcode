//https://leetcode.com/problems/sum-of-left-leaves/?envType=daily-question&envId=2024-04-14
int navigate(TreeNode * node)
{
    if (node) {
        int sum = 0;
        if (node->left && !node->left->left && !node->left->right) {sum+=node->left->val;}
        return sum + navigate(node->left) + navigate(node->right);
    }
    return 0;
    
}

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        return navigate(root);
    }
};