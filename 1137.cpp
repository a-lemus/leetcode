//https://leetcode.com/problems/n-th-tribonacci-number/submissions/1241031795/?envType=daily-question&envId=2024-04-24
// This program returns the nth number in the "tribbonacci" sequence (fibo but sum of last three values instead of last two)
class Solution {
public:
    int counter; // in class so it can be used in recursion without a parameter
    int getNumInSeq(int n1, int n2, int n3) { // recursive function to navigate tribo
        if (counter-- == 0) { // if we are at the nth number
            return n3;
        }
        return getNumInSeq(n2,n3,n1+n2+n3); // go one ahead in the sequence, we have to keep the last two values and the sum of the old three values
    }
    int tribonacci(int n) {
        if (n==0) {return 0;} // case isnt handled by recursion
        counter = n-1; // the recursive function starts at n==1
        return getNumInSeq(0,0,1); // initiate algorithm
    }
};