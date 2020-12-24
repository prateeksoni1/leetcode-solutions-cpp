/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

// -4 -1 1 2

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int lo = 1, hi = n-1;
        int ans = INT_MAX, dist = INT_MAX;
        for (int i=0; i<n-2; i++) {
            lo = i+1;
            hi = n-1;
            while (lo<hi) {
                int sum = nums[i] + nums[lo] + nums[hi];
                if (sum < target) {
                    if (abs(sum-target)<dist) {
                        ans = sum;
                        dist = abs(sum-target);
                    }
                    lo++;
                } else if (sum > target) {
                    if (abs(sum-target)<dist) {
                        ans = sum;
                        dist = abs(sum-target);
                    }
                    hi--;
                } else {
                    return sum;
                }
            } 
        }

        return ans;
    }
};
// @lc code=end

