/*
Sample Input 1:
3
2 4 6
6
Sample Output 1:
2 4
6
Explanation Of The Sample Input 1:
For the array'ARR' = {2, 4, 6}, we can have subsets {}, {2}, {4}, {6}, {2, 4}, {2, 6}, {4, 6}, {2, 4, 6}.
Out of these 8 subsets, {2, 4} and {6} sum to the given 'K' i.e. 6.
*/

void solve(int index, int target, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans, int n)
{
    // base condition
    if (index == n)
    {
        if (target == 0)
            ans.push_back(ds);

        return;
    }

    ds.push_back(nums[index]);
    solve(index + 1, target - nums[index], nums, ds, ans, n);
    ds.pop_back();

    solve(index + 1, target, nums, ds, ans, n);
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<int> ds;
    vector<vector<int>> ans;

    solve(0, k, arr, ds, ans, n);

    return ans;
}

// other method
void solve(int index, int sum, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans, int s)
{
    // base condition

    if (index == nums.size())
    {
        if (s == sum)
            ans.push_back(ds);

        return;
    }

    ds.push_back(nums[index]);
    s += nums[index];
    solve(index + 1, sum, nums, ds, ans, s);
    ds.pop_back();
    s -= nums[index];

    solve(index + 1, sum, nums, ds, ans, s);
}








// changes to made if we want print only one answer
bool f()
{
    // base case
    con met satisfied return true;

    condition not met return false;

    if (f() == true)
        return;
    f();
}








// changes to made if we want want to check if there exists a solution or not
bool f()
{
    // base case
    condition satisfied return true;

    condition not met return false;

    if (f())
        return true;

    condition not met

        return f();
}

// to count the number of subsequences

int f()
{
    base case
    return 1 --> condition satisfied
    return 0 --> condition not satisfied

    l = f();
    r = f();

    return l + r;
}

//T.C --> O(2^n)