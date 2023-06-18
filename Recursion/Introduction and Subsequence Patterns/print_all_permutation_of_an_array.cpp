class Solution
{
public:
    void recurperm(vector<int> &arr, vector<int> &ds, vector<vector<int>> &res, int freq[])
    {
        // base condition to store the ds into the resultant ds
        if (ds.size() == arr.size())
        {
            res.push_back(ds);
            return;
        }

        for (int i = 0; i < arr.size(); i++)
        {
            if (!freq[i]) // if the map is not checked
            {
                ds.push_back(arr[i]); // pick the element
                freq[i] = 1;          // mark the index of the element that is picked
                recurperm(arr, ds, res, freq);

                freq[i] = 0;   // unmark the element
                ds.pop_back(); // remove the element
            }
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<int> ds;
        vector<vector<int>> ans;
        // int freq[nums.size()] = {0};
        int freq[nums.size()];
        for (int i = 0; i < nums.size(); i++)
            freq[i] = 0;

        recurperm(nums, ds, ans, freq);

        return ans;
    }
};



// Approach -2 without using additional space

class Solution
{
public:
    void perm(int ind, vector<int> &arr, vector<vector<int>> &res)
    {
        // base condition
        if (ind >= arr.size())
        {
            res.push_back(arr);
            return;
        }
        for (int i = ind; i < arr.size(); i++) // go from ind to n - 1
        {
            swap(arr[ind], arr[i]);  //swap for [0,0] , [0,1] , [0,2]
            perm(ind + 1, arr, res);  // recursion for recursion
            swap(arr[ind], arr[i]);   //reswapping and backtracking
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;

        perm(0, nums, ans);

        return ans;
    }
};