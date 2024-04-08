//https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/submissions/1224969877/?envType=daily-question&envId=2024-04-06
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n  = s.length();
        int numOpen = 0;
        for (int i = 0; i<n; i++) {
            if (s[i]=='(') {
                numOpen++;
            }
            if (s[i]==')') {
                if (numOpen==0) {
                    s.erase(i,1);
                    i--;
                }
                else {
                    numOpen--;
                }
            }
        }
        if (numOpen==0) {
            return s;
        }
        int i = n-1;
        while (numOpen>0) {
            if (s[i]=='(') {
                numOpen--;
                s.erase(i,1);
            }
            else {
                i--;
            }
            if (i<0) {
                return "";
            }
        }
        return s;
        
    }
};