/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL, *next, *temp = head;

        while(temp != NULL) {
            next = temp->next;
            temp->next = prev;
            prev = temp;

            if(next) {
                temp = next;
            } else {
                break;
            }
        }

        return temp;
    }
};


// @lc code=end

/**
 * 
 * 1->2->3
 * 
 * 
 * 
 * /
