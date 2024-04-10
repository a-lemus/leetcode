//https://leetcode.com/problems/reveal-cards-in-increasing-order/description/?envType=daily-question&envId=2024-04-10
void sorter(vector<int> & vec)
{   // bubble sort alogrithm
    int n = vec.size();
    int temp; // for variable swapping
    bool swap = true; // to see when the vector is in correct order
    while (swap) { // run until we dont have to swap any elements (thus vec is ordered)
        swap = false; // by default
        for (int i = 0; i<n-1;i++) { // iterate across vector (except last elem as our comparison looks ahead)
            if (vec[i]>vec[i+1]) { // see if adjacent elements are in order
                swap = true; // will have to iterate again
                temp = vec[i]; // for swapping
                vec[i] = vec[i+1]; // swap indeces
                vec[i+1] = temp;
            }
        }
    }
}

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size(), deckIndx = 0, ansIndx = 0; // tracking where we are in the decks
        vector<int> ans(n); // deck to return
        bool skip = false; // every other card is skipped so we use this for a flip flop
        sorter(deck); // bubble sort deck

        while (deckIndx < n) { // while there are still cards we havent used
            if (ans[ansIndx]==0) { // if we havent filled this index in the asnwer deck
                if (!skip) { // flip flop
                    ans[ansIndx] = deck[deckIndx]; // store card from deck to ans
                    deckIndx++; // go to next deck indx
                }
                skip = !skip; //swap skip for flip flop
            }
            ansIndx = (ansIndx+1) % n; // key to the algorithm, finds the next spot we have to fill in the answer vector
        }
        return ans; // return answer
    }
};