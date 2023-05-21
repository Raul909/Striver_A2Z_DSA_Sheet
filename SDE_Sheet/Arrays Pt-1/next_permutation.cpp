#include <bits/stdc++.h>

using namespace std;

void nextPermutation(vector<int> &nums)
{
    next_permutation(nums.begin(), nums.end()); // the interviewer will not be happy and will tell you to write the entire code instead of the stl
}
int main()
{
    vector<int> arr;
    arr = {3, 2, 1};
    nextPermutation(arr);
    for (auto it : arr)
        cout << it << " ";

    return 0;
}

// full method with algo

void nextPermutation(vector<int> &nums)
{
    // next_permutation(nums.begin(),nums.end());

    int n = nums.size(), l, k;

    for (k = n - 2; k >= 0; k--)
    {
        if (nums[k] < nums[k + 1])
        {
            break;
        }
    }

    if (k < 0)
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {
        for (l = n - 1; l > k; l--)
        {
            if (nums[l] > nums[k])
            {
                break;
            }
        }

        swap(nums[k], nums[l]);
        reverse(nums.begin() + k + 1, nums.end());
    }
}
