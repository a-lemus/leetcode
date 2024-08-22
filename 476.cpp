//https://leetcode.com/problems/number-complement/?envType=daily-question&envId=2024-08-22
class Solution {
public:
    long int pow(long int a, long int b) { // made my own power function because its faster than including the math library and I don't need to account for negative powers
        long int ans = 1; // answer tracker, pows are 1 by default
        for (long int i = 0; i < b; i++) { // multiply ans by a as many times as b (what an exponent is)
            ans*=a;
        }
        return ans; // answer
    }
    int findComplement(int num) {
        // this function returns the 'compliment' of a number, defined by the number where every bit of the given number is flipped (no leading zeros)
        long int n = 0; // for tracking exponents/binary digits
        while (pow(2,n)<=num) {n++;} n--; // finds the greatest power of two less than the input number (equivalent to the highest binary digit of num)
        long int ans = 0; // answer tracking
        while (n>=0) { // runs for every digit
            if (pow(2,n)<=num) { // if for this digit the value of the digit is included in num, then the binary representation of num has this digit and we don't add it to ans
                num-=pow(2,n); // we have to remove the digit from num then for later math to be correct
            }
            else  { // if for this digit the value of the digit isn't included in num, then the binary representation of num *doesn't* have this digit to we need to add it to the answer
                ans+=pow(2,n);
            }
            n--; // go to the next smallest binary digit
        }
        return ans; // boom
    }
};