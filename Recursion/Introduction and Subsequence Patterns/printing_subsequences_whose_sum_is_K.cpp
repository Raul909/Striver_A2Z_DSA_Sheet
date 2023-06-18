

// Printing subsequences whose sum is K.

#include <bits/stdc++.h>

using namespace std;

void printS(int index, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if (index == n)
    {
        if (s == sum) // condition satisfied
        {

            for (auto it : ds)
                cout << it << " ";

            cout << "\n";
        }
        return;
    }

    // pick/take condition
    ds.push_back(arr[index]);
    s += arr[index];
    printS(index + 1, ds, s, sum, arr, n); // sum is the actual value that is given and s is the value used to check the subsquence sum having value equal to the sum
    s -= arr[index];
    ds.pop_back();

    // not pick condition
    printS(index + 1, ds, s, sum, arr, n);
}
int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;

    vector<int> ds;
    printS(0, ds, 0, sum, arr, n);

    return 0;
}




// Techniques to print only one solution
bool f()
{
    base case
  {

    condition satisfied 
    return true;
  }

    condition not satisfied
    return false;

    if(f() == true) return true;

    return false;
}






    // Printing only one answer (one subsequence) without using any global variables
#include <bits/stdc++.h>

using namespace std;

bool printS(int index, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if (index == n)
    {
        // condition satisfied
        if (s == sum)
        {

            for (auto it : ds)
                cout << it << " ";

        cout << "\n";

        return true;
    }
    // condition not satisfied
    else return false;
    }

    // take condition
    ds.push_back(arr[index]);
    s += arr[index];
    if (printS(index + 1, ds, s, sum, arr, n) == true) // modification made here
    {
        return true;
    }
    s -= arr[index];
    ds.pop_back();

    // not pick condition

    if (printS(index + 1, ds, s, sum, arr, n) == true) // modification made here
        return true;

    return false;
    }
    int main()
    {
        int arr[] = {1, 2, 1};
        int n = 3;
        int sum = 2;

        vector<int> ds;
        printS(0, ds, 0, sum, arr, n);

        return 0;
    }
