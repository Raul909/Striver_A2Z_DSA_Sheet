/*

Recursion --> When a function call itself Until a specified condition is met i.e., the base case/base condition is not met

When there is a non-ending recursion or infinite recursion it stops when it runs out of memory and it gives a segmentation fault
and it leads to stack overflow

#If you are writing a return statement inside the function, the function gets terminated then and there.


Stack Space --> The space where the remaining non-executed functions like non-completed functions are stored

Recursion Tree --> A shorter version of the diagrammatic version that explains the function calls

Basic Problems -->
-Print Name N times
-Print linearly from 1-N
-Print from N to 1
-Print from 1 to N (using backtracking)
-Print from N to 1 (using backtracking)

*/
// Print Name N times

#include <iostream>

using namespace std;

void print_name(int i, int n) // parameterised recursion
{
    if (i >= n)
    {
        return;
    }
    cout << "Rahul"
         << "\n";
    print_name(i + 1, n);
}

void funcprint_name(int n) // functional recursion
{
    if (n <= 0)
    {
        return;
    }
    cout << "Rahul"
         << "\n";
    funcprint_name(n - 1);
}

int main()
{
    print_name(0, 3);  // prints my name 3 times
    funcprint_name(3); // prints my name 3 times
    return 0;
}

// Print linearly from 1-N

void print1_to_N(int i, int n) // parameterised recursion
{
    if (i > n)
    {
        return;
    }
    cout << i << "\n";

    print1_to_N(i + 1, n);
}

int main()
{
    print1_to_N(1, 3); // prints 1 to 3
    return 0;
}

void print1_to_N(int n) // functional backtracking recursion
{
    if (!(n))
    {
        return;
    }
    print1_to_N(n - 1);
    cout << n << "\n";
}

int main()
{
    print1_to_N(3); // prints 1 to 3
    return 0;
}

// Print from N to 1

void printN_to_1(int i, int n) // parameterised recursion
{
    if (i <= 0)
    {
        return;
    }

    cout << i << "\n";
    printN_to_1(i - 1, n);
}

int main()
{
    printN_to_1(3, 3); // prints 3 to 1
    return 0;
}

void printN_to_1(int i, int n) // backtracking recursion
{
    if (i > n)
    {
        return;
    }

    printN_to_1(i + 1, n);
    cout << i << "\n";
}

int main()
{
    printN_to_1(1, 3); // prints 3 to 1
    return 0;
}
