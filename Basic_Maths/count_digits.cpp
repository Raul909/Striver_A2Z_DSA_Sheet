// Given an integer N , write program to count number of digits in N.

/*Example 1:
Input: N = 12345
Output: 5
Explanation: N has 5 digits

Example 2:
Input: N = 8394
Output: 4
Explanation: N has 4 digits*/

#include <bits/stdc++.h>

using namespace std;

int count_digits(int n)
{
    int x = n;
    int count = 0;
    while (x != 0)
    {
        x = x / 10;
        count++;
    }
    return count;
}

// Time Complexity --> O(n)

// Space Complexity --> O(1)

Better method

    int count_digits(int n)
{
    string x = to_string(n);
    return x.length();
}

int main()
{
    int n = 12345;
    cout << "Number of digits in " << n << " is " << count_digits(n);
    return 0;
}

// Time Complexity --> O(1)

// Time Complexity --> O(1)

// Best Method

int count_digits(int n)
{
    int digits = floor(log10(n) + 1);
    return digits;
}

// Time Complexity --> O(1)

// Space Complexity --> O(1)