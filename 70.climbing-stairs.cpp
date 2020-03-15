/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start

int helper(int n, int* dp) {

        if (dp[n] > 0) return dp[n];

        if (n == 0 || n == 1) {
            return 1;
        }

        int ans = helper(n-1, dp);

        if (n-2 >= 0) {
            ans += helper(n-2, dp);
        }

        dp[n] = ans;

        return ans;
}

class Solution {
public:
    int climbStairs(int n) {

        int* dp = new int[n+1]();

        int ans = helper(n, dp);

        delete [] dp;
        return ans;
    }
};
// @lc code=end



/**
 * f(3) = f(2) + f(1) = f(1) + f(0) + f(1)
 */