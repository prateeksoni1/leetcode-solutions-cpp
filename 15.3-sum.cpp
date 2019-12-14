/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 *
 * https://leetcode.com/problems/3sum/description/
 *
 * algorithms
 * Medium (25.33%)
 * Likes:    5050
 * Dislikes: 610
 * Total Accepted:    719.7K
 * Total Submissions: 2.8M
 * Testcase Example:  '[-1,0,1,2,-1,-4]'
 *
 * Given an array nums of n integers, are there elements a, b, c in nums such
 * that a + b + c = 0? Find all unique triplets in the array which gives the
 * sum of zero.
 * 
 * Note:
 * 
 * The solution set must not contain duplicate triplets.
 * 
 * Example:
 * 
 * 
 * Given array nums = [-1, 0, 1, 2, -1, -4],
 * 
 * A solution set is:
 * [
 * ⁠ [-1, 0, 1],
 * ⁠ [-1, -1, 2]
 * ]
 * 
 */

// @lc code=start
#include <bits/stdc++.h>
class Solution
{
public:
	vector<vector<int>> threeSum(vector<int> &nums)
	{
		vector<vector<int>> ans;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size(); i++)
		{
			// -4 -1 -1 0 1 2
			if (i > 0 && nums[i] == nums[i - 1])
				continue;
			int x = nums[i];
			int left = i + 1, right = nums.size() - 1;
			while (left < right)
			{
				int sum = x + nums[left] + nums[right];
				if (sum == 0)
				{
					ans.push_back({x, nums[left], nums[right]});
					left++;
					right--;
					while (left < right)
					{
						if (nums[left] == nums[left - 1])
							left++;
						else if (nums[right] == nums[right + 1])
							right--;
						else
							break;
					}
				}
				else
				{
					if (sum < 0)
						left++;
					else
						right--;
				}
			}
		}

		return ans;
	}
};
// @lc code=end
