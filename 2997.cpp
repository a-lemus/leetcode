//https://leetcode.com/problems/minimum-number-of-operations-to-make-array-xor-equal-to-k/submissions/1245201517/?envType=daily-question&envId=2024-04-29
class Solution {
public:
    int countFlippedBits(int a, int b) {
        int count = 0;
        while (a != 0 || b != 0) {
            if ((a & 1) != (b & 1)) {
                count++;
            }
            a >>= 1;
            b >>= 1;
        }
        return count;
    }
    int minOperations(vector<int>& nums, int k) {
        int exor = nums[0];
        for (int i = 1; i<nums.size();i++) {
            exor = exor ^ nums[i];
        }

        return countFlippedBits(exor,k);
    }
};