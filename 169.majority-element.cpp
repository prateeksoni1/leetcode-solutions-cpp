/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        
        for(auto num: nums) {
            m[num]++;
        }

        int maximum = INT_MIN, ans;
        for(auto count: m) {
            if (count.second > maximum) {
                maximum = count.second;
                ans = count.first;
            }
        }

        return ans;

    }
};
// @lc code=end

