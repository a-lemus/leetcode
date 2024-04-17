//https://leetcode.com/problems/smallest-string-starting-from-leaf/?envType=daily-question&envId=2024-04-17
/* the program takes a binary tree with nodes containing integer values that represent chars
from a-z. It navigates the tree and compares all of the strings that can be obtained by a path from a leaf (node without children) to the root. The program than returns the lexicographically smallest leaf-root string */
class Solution {
    string charMap = "abcdefghijklmnopqrstuvwxyz"; // for turning integers into chars using subscript
public:
    string getLesser(string a, string b) 
    {   // returns the lesser of two strings
        if (a>b) {return b;}
        return a; // defaults to "a" if they are equal
    }
    string navigate(TreeNode* node, string s)
    {   // utilizes recursion to navigate binary tree, each path maintaining its current string "s"for comparison to other paths
        s.assign(charMap[node->val]+s); // add the character at this node to s
        if (node->left && node->right) { // if node has two children navigate through both
            return getLesser(navigate(node->left,s),navigate(node->right,s));
        }
        else if (node->left) { //if only left child navigate through left
            return navigate(node->left,s);
        }
        else if (node->right) { // if only right child navigate through right
            return navigate(node->right,s);
        }
        else { // if no children we have reached a leaf, return our current string
            return s; // this will be returned to a getLesser function eventually for comparison
        }
    }
    string smallestFromLeaf(TreeNode* root) {
        return navigate(root,""); // navigate starts with empty string at root
    }
};