/*
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]
*/


class Solution
{
    void solve(vector<string> &res, string &current, int open, int close, int n)
    {
        // base condition
        if (current.size() == 2 * n)
        {
            res.push_back(current);
            return;
        }
        if (open < n)
        {
            current.push_back('(');
            solve(res, current, open + 1, close, n);
            current.pop_back();
        }
        if (close < open)
        {
            current.push_back(')');
            solve(res, current, open, close + 1, n);
            current.pop_back();
        }
    }

public:
    vector<string> generateParenthesis(int n)
    {
        string current;
        vector<string> ans;

        solve(ans, current, 0, 0, n);

        return ans;
    }
};