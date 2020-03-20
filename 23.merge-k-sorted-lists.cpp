/*
 * @lc app=leetcode id=23 lang=cpp
 *
 * [23] Merge k Sorted Lists
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

#include<bits/stdc++.h>

struct comp {
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
};


class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        ListNode* head = NULL, *last = NULL;
        priority_queue<ListNode*, vector<ListNode*>, comp> pq;
        for(auto l: lists) {
            if(l) {
                pq.push(l);
            }
        }

        while(!pq.empty()) {
            ListNode* top = pq.top();
            pq.pop();

            if(top->next) {
                pq.push(top->next);
            }

            if(head == NULL) {
                head = top;
                last = top;
            } else {
                last->next = top;
                last = top;
            }
        }

        return head;
    }
};
// @lc code=end

