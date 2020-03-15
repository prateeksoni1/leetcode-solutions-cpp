/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution {
public:
    bool isNumber(char x){
        return (x>='0' && x<='9');
    }
    int myAtoi(string str) {
        long ans = 0;
        int i=0,factor=1;
        while(str[i] == ' ')i++;
        if(str[i]== '-' || str[i]=='+'){
            factor =(str[i]=='-') ? -1:1;
            i++;
        }
        while(isNumber(str[i])){
            ans = ans*10 + (str[i] - '0');
            if(factor == -1 && ans > ((long)INT_MIN*-1)){
                return INT_MIN;
            }
            else if(factor == 1 && ans > INT_MAX){
                return INT_MAX;                
            }
            i++;
        }
        return ans*factor;
    }
};
// @lc code=end