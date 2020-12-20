/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] ZigZag Conversion
 */

// @lc code=start

// PAYPALISHIRING

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> m(min(numRows, int(s.length())));
        int i=0;
        bool down = false;
        for (char ch: s) {
            m[i] += ch;
            down = i == 0 || i == numRows-1 ? !down : down;
            i = down ? i+1 : i-1;
            if (i < 0 || i>= min(numRows, int(s.length()))) i = 0;   
        }

        string ans = "";
        for (string str : m) {
            ans += str;
        }
        
        return ans;
    }
};
// @lc code=end

