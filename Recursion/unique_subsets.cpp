/*Subset – II | Print all the Unique Subsets
Problem Statement: Given an array of integers that may contain duplicates the task is to return all possible subsets. Return only unique subsets and they can be in any order.

Examples:

Example 1:

Input: array[] = [1,2,2]

Output: [ [ ],[1],[1,2],[1,2,2],[2],[2,2] ]

Explanation: We can have subsets ranging from  length 0 to 3. which are listed above. Also the subset [1,2] appears twice but is printed only once as we require only unique subsets.

Input: array[] = [1]

Output: [ [ ], [1] ]

Explanation: Only two unique subsets are available

*/
#include <bits/stdc++.h>
using namespace std;

void unique_subset(int ind, set<vector <int>> &res,vector<int> &arr2, int arr[], int n)
{

  
      if (ind == n)
    {
       res.insert(arr2);
       return ;
    }


    arr2.push_back(arr[ind]);                  // take
    unique_subset(ind + 1,res, arr2, arr, n);
    arr2.pop_back();                          // not take
    unique_subset(ind + 1,res,arr2, arr, n);

}

int main()
{
    vector <int> arr2;
    int arr[] = {1,2,2,3,1,1,1,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    set<vector <int>> res;

     unique_subset(0,res,arr2,arr,n);

    for(auto vctr:res)
    {
        cout << "[";
        for(auto it:vctr)
        cout << it << " ";

        cout << "]";
        cout << "\n";
    }

    cout<< res.size() << endl;

    // Code here
    return 0;
}


//printing subsequences using power set 