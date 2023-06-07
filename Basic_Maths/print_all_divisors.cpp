/*Problem Statement: Given a number, print all the divisors of the number. A divisor is a number that gives remainder as zero when divided.

Examples:

Example 1:
Input: n = 36
Output: 1 2 3 4 6 9 12 18 36
Explanation: All the divisors of 36 are printed.

Example 2:
Input: n = 97
Output: 1 97
Explanation: Since 97 is a prime number, only 1 and 97 are printed.*/

#include <iostream>
using namespace std;

void printDivisorsBruteForce(int n)
{

    cout << "The Divisors of " << n << " are:" << endl;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cout << i << " ";

    cout << "\n";
}

int main()
{

    printDivisorsBruteForce(36);

    return 0;
}