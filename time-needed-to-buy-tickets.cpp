//https://leetcode.com/problems/time-needed-to-buy-tickets/?envType=daily-question&envId=2024-04-09
int min(int a, int b)
{   // simple function that returns the lesser of two numbers
    if (a<b) {
        return a;
    }
    return b;
}

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) 
    {   // this approach is to iterate across the array only once, as we already know exactly how many times
        // we would need to iterate literally (which is tickets[k]) however we know that the amount of tickets
        // purchased for every user will be either their total desire OR however many loops they would be in 
        // before k purchases all their tickets, so we simply add the minimum between these two in our loop
        int sum = 0; //for tracking
        for (int i = 0; i<tickets.size(); i++) { // iterate across tickets
            sum+=min(tickets[i],tickets[k]); // add the min between the users desire and how many times the loop will reach
            if (i>k && tickets[i]>=tickets[k]) {
                sum--; // if the customer i wants more than k and they are behind them in line then they will not buy
                       // tickets in the last loop
            }
        }
        return sum; // return tracker
    }
};