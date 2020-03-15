/*
 * @lc app=leetcode id=258 lang=cpp
 *
 * [258] Add Digits
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {
        if(num / 10 == 0) {
            return num;
        }

        int sum = 0;
        while(num) {
            sum += num % 10;
            num /= 10;
        }

        return addDigits(sum);
    }
};
// @lc code=end

