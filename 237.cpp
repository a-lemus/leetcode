/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//https://leetcode.com/problems/delete-node-in-a-linked-list/?envType=daily-question&envId=2024-05-05
class Solution {
public:
    void deleteNode(ListNode* node) { //this function deletes the given node in a linked list
                                      //by setting the value of each node to the next node
                                      //then deleting the tail node
        while (node->next) { //keeps iterating until end of list
            node->val = node->next->val; //set node val to next node val
            if (!node->next->next) {node->next = nullptr;} else {node = node->next;}
            // above detects if we are at the node before the tail, deleting it if so, otherwise proceding to the next node
        }
    }
};