/*Problem Statement: Find gcd of two numbers.

Examples:

Example 1:
Input: num1 = 4, num2 = 8
Output: 4
Explanation: Since 4 is the greatest number which divides both num1 and num2.

Example 2:
Input: num1 = 3, num2 = 6
Output: 3
Explanation: Since 3 is the greatest number which divides both num1 and num2.*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1 = 4, num2 = 8;
    int ans;
    for (int i = 1; i <= min(num1, num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            ans = i;
        }
    }
    cout << "The GCD of the two numbers is " << ans;
}

// Time Complexity --> O(N)

// Space Complexity --> O(1).

// Another approach
/* Using Euclidean’s theorem.

Intuition: Gcd is the greatest number which is divided by both a and b.If a number is divided by both a and b, it is should be divided by (a-b) and b as well.



Approach:

Recursively call gcd(b,a%b) function till the base condition is hit.
b==0 is the base condition.When base condition is hit return a,as gcd(a,0) is equal to a.

*/

#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{

    int a = 4, b = 8;
    cout << "The GCD of the two numbers is " << gcd(a, b);
}

// Time Complexity --> O(logɸmin(a,b)), where ɸ is 1.61.

// Space Complexity --> O(1).