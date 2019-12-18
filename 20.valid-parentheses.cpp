/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 *
 * https://leetcode.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (37.69%)
 * Likes:    3747
 * Dislikes: 186
 * Total Accepted:    783.7K
 * Total Submissions: 2.1M
 * Testcase Example:  '"()"'
 *
 * Given a string containing just the characters '(', ')', '{', '}', '[' and
 * ']', determine if the input string is valid.
 * 
 * An input string is valid if:
 * 
 * 
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 * 
 * 
 * Note that an empty string is also considered valid.
 * 
 * Example 1:
 * 
 * 
 * Input: "()"
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "()[]{}"
 * Output: true
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: "(]"
 * Output: false
 * 
 * 
 * Example 4:
 * 
 * 
 * Input: "([)]"
 * Output: false
 * 
 * 
 * Example 5:
 * 
 * 
 * Input: "{[]}"
 * Output: true
 * 
 * 
 */

// @lc code=start
class Solution
{
public:
	bool isValid(string s)
	{
		stack<char> stk;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(' || s[i] == '{' || s[i] == '[')
			{
				stk.push(s[i]);
			}
			else
			{
				if (stk.empty())
					return false;
				char top = stk.top();
				if ((top == '(' && s[i] == ')') || (top == '[' && s[i] == ']') || (top == '{' && s[i] == '}'))
				{
					stk.pop();
				}
				else
				{
					return false;
				}
			}
		}
		if (stk.empty())
		{
			return true;
		}
		return false;
	}
};
// @lc code=end
