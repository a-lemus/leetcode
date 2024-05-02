//https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/?envType=daily-question&envId=2024-05-02
class Solution {
public:
    int findMaxK(vector<int>& nums) { // this function finds the max integer in nums that has a corresponding negative value
        int max = -1; // tracking max

        for (int i = 0; i<nums.size(); i++) {
            if (nums[i]>max) { // if num is greater than found max
                for (int x = 0; x<nums.size();x++) { //see if candidate has a matchin negative in nums
                    if (nums[x]*-1==nums[i]) { // if pair found
                        max = nums[i];
                        break;
                    }
                }
            }
        }
        return max;
    }
};