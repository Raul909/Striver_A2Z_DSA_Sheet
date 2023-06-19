/*
Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
Example 2:

Input: digits = ""
Output: []
Example 3:

Input: digits = "2"
Output: ["a","b","c"]
*/

class Solution
{
public:
    int n;
    vector<string> res;
    vector<string> a = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void solve(int i, string &ds, string &nums)
    {
        if (i == n)
        {
            res.push_back(ds);
            return;
        }
        int num = nums[i] - '0';

        for (char ch : a[num])
        {
            ds.push_back(ch);
            solve(i + 1, ds, nums);
            ds.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        if (digits.empty())
            return res;
        n = digits.size();
        string ds;
        solve(0, ds, digits);

        return res;
    }
};