class Solution
{
private:
    vector<vector<int>> res;

    void comb_sum_III(int ind, vector<int> &arr, int target, vector<int> &ds, int k)
    {
        // base condition
        if (target == 0 && ds.size() == k)
        {
            res.push_back(ds);
            return;
        }

        if (ind >= arr.size())
            return;

        // pick condition
        for (int i = ind; i < arr.size(); i++)
        {
            if (arr[i] <= target)
            {
                ds.push_back(arr[i]);
                comb_sum_III(i + 1, arr, target - arr[i], ds, k);

                ds.pop_back();
            }
        }
    }

public:
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<int> nums; //generate an array containing the combination of numbers from 1 to 9

        for (int i = 1; i <= 9; i++)
            nums.push_back(i);
        vector<int> ds;

        comb_sum_III(0, nums, n, ds, k);
        return res;
    }
};