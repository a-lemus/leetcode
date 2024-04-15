//https://leetcode.com/problems/sum-root-to-leaf-numbers/?envType=daily-question&envId=2024-04-15
int navigate(TreeNode* node, int sum)
{
    sum += node->val;
    if (node->right || node->left) {sum*=10;}
    if (node->right) {
        if (node->left) {
            sum = navigate(node->right,sum) + navigate(node->left,sum);
        }
        else {
            sum = navigate(node->right,sum);
        }
    }
    else if (node->left) {
        sum = navigate(node->left,sum);
    }
    return sum;
}

class Solution {
public:
    int sumNumbers(TreeNode* root) {
        return navigate(root,0);
    }
};