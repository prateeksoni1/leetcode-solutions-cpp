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

        // RECURSIVE

        if (head == NULL || head->next == NULL) return head;

        ListNode* p = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;

        return p;

        // ITERATIVE
        // ListNode *prev = NULL, *next, *temp = head;

        // while(temp != NULL) {
        //     next = temp->next;
        //     temp->next = prev;
        //     prev = temp;

        //     if(next) {
        //         temp = next;
        //     } else {
        //         break;
        //     }
        // }

        // return temp;
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
