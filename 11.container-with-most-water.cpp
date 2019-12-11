/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
			int maximum = 0;
      int start = 0, end = height.size()-1;
			for(int i=start, j=end; i<j; ) {
				int h = min(height[i], height[j]);
				int b = j - i;
				int area = h * b;
				maximum = max(area, maximum);
				if(h == height[i]) i++;
				else j--;
			}
			return maximum;
    }
};
// @lc code=end

