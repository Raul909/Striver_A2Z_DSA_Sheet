
// Sum of first N numbers

#include <iostream>

using namespace std;

void printsum(int i, int sum) // parameterised way
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    printsum(i - 1, sum + i);
}

int main()
{
    printsum(4, 0); // prints the sum of first 4 natural numbers
    return 0;
}

int printsum(int n) // functional way
{
    if (n <= 1)
        return n;

    return n + printsum(n - 1);
}

int main()
{
    cout << printsum(4); // prints the sum of first 4 natural numbers
    return 0;
}

// // Problems on Functional Recursion

// // Reverse an Array

// /*

// So the approach other than recursion is to take two pointers start at the starting point of the array and end pointer at the end of the array
// swap the element present at the start with the element present at the end then increment the start pointer by 1 and decrement the end pointer by 1
// continue this until the start pointer becomes >= end pointer.

// */

void reverse(int start, int end, int arr[])
{
    if (start >= end)
        return;

    swap(arr[start], arr[end]);

    reverse(start + 1, end - 1, arr);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    reverse(0, arrSize-1, arr);
    for (int i = 0; i < arrSize; i++)
        cout << arr[i] << " ";

    return 0;
}

// //Can we reverse the array by taking only one pointer

void reverse(int index, int arr[],int n)       //using a single pointer index
{
    if (index>=n/2)
        return;

    swap(arr[index], arr[n-index-1]);

    reverse(index+1, arr,n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    reverse(0, arr, arrSize);
    for (int i = 0; i < arrSize; i++)
        cout << arr[i] << " ";

    return 0;
}

// Check if a given string is palindrome or not

bool check_palindrome(int pos, string s, int n)
{
    if (pos >= n / 2)
        return true;

    if (s[pos] != s[n - pos - 1])
        return false;

    return check_palindrome(pos + 1, s, n);
}

int main()
{
    string s = "MADAM";
    int n = s.size();
    if ((check_palindrome(0, s, n)) == true)
        cout << "String is palindrome";

    else
        cout << "String is not palindrome";

    return 0;
}