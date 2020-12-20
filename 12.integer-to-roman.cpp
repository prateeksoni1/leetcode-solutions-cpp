/*
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        vector<pair<string, int>> m;
        m.push_back({"M", 1000});
        m.push_back({"CM", 900});
        m.push_back({"D", 500});
        m.push_back({"CD", 400});
        m.push_back({"C", 100});
        m.push_back({"XC", 90});
        m.push_back({"L", 50});
        m.push_back({"XL", 40});
        m.push_back({"XXX", 30});
        m.push_back({"XX", 20});
        m.push_back({"X", 10});
        m.push_back({"IX", 9});
        m.push_back({"V", 5});
        m.push_back({"IV", 4});
        m.push_back({"I", 1});

        string s = "";

        for (auto p: m) {
            cout << p.first << " ";
            while (num >= p.second) {
                num -= p.second;
                s += p.first;
            }
        }

        return s;      
    }
};
// @lc code=end

