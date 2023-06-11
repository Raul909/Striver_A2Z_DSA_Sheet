/*

Print all subsequences using Recursion

Defn of Subsequences --> a contagious / non-contagious sequence , which follows the order.

Ex:- arr-->{3,1,2}


Subsequences are :-
{}
3
2
3 1
1 2
3 2
3 1 2

3 2 1 --> will not be a subsequence because it is not following the order

*/

#include <bits/stdc++.h>

using namespace std;

void printF(int index, vector<int> &ds, int arr[], int n)
{
    if (index == n)
    {
        for (auto it : ds)
            cout << it << " ";

        if (ds.size() == 0) // NULL is present
            cout << "{}";

        cout << "\n";
        return;
    }

    // take or pick the particular index into the subsequence
    ds.push_back(arr[index]);
    printF(index + 1, ds, arr, n);

    ds.pop_back();
    // not pick,or not take condition,this element is nt added to your subsequence
    printF(index + 1, ds, arr, n);
}
int main()
{
    int arr[] = {3, 4, 2};
    int n = 3;

    vector<int> ds;
    printF(0, ds, arr, n);

    return 0;
}

// you can also print it it in the reverse order

void printF(int index, vector<int> &ds, int arr[], int n)
{
    if (index == n)
    {
        for (auto it : ds)
            cout << it << " ";

        if (ds.size() == 0) // NULL is present
            cout << "{}";

        cout << "\n";
        return;
    }

    // not pick,or not take condition,this element is nt added to your subsequence (do not pick condition at the front)
    printF(index + 1, ds, arr, n);

    // take or pick the particular index into the subsequence
    ds.push_back(arr[index]);
    printF(index + 1, ds, arr, n);
    ds.pop_back();
}
int main()
{
    int arr[] = {3, 4, 2};
    int n = 3;

    vector<int> ds;
    printF(0, ds, arr, n);

    return 0;
}

// Time Complexity --> o(2^n x n)
// Space Complexity --> o(n)

// Problem on Leetcode :-

/*Given an integer array nums of unique elements, return all possible
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.
*/

class Solution
{
public:
    void printF(int index, vector<int> &nums, vector<int> &temp, vector<vector<int>> &ans)
    {
        if (index >= nums.size())
        {
            ans.push_back(temp);
            return;
        }

        // take or pick the particular index into the subsequence
        temp.push_back(nums[index]);
        printF(index + 1, nums, temp, ans);

        temp.pop_back();
        // not pick,or not take condition,this element is nt added to your subsequence
        printF(index + 1, nums, temp, ans);
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        printF(0, nums, temp, ans);

        return ans;
    }
};

// power set

class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        int n = nums.size();
        vector<vector<int>> ans;
        // (1<<n) =2^n
        for (int subset_num = 0; subset_num < (1 << n); subset_num++)
        {
            vector<int> subset;
            for (int i = 0; i < n; i++)
            {
                // if the ith bit is set
                if ((subset_num & (1 << i)))
                {
                    subset.push_back(nums[i]);
                }
            }
            ans.push_back(subset);
        }
        return ans;
    }
};

// Time complexity --> same as that of recursion --> O(2^n * n)
// Space Complexity --> O(1)

// iterative approach

class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> output;
        int n = nums.size();

        output.push_back({});
        // initialising the output with an empty subset

        for (int i = 0; i < n; i++)
        {
            // for every index i in nums make a copy of all the existing rows in output.
            // Then add the ith num to the copy and then push it in output
            int size = output.size();
            for (int j = 0; j < size; j++)
            {
                vector<int> newRow = output[j]; // O(N)

                newRow.push_back(nums[i]);
                output.push_back(newRow);
            }
        }
        return output;
    }
};

// Time complexity: O(N*(2^N))
/*
1.2^N subsets will be generated.
2.while generating each subset we have to copy one of the previous subset:
*/

// Space complexity: O(N*(2^N))
/*
1.we have to store 2^N subsets in ans each of size O(N)
*/