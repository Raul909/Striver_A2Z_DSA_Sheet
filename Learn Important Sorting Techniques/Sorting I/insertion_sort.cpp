/*
Always takes an elements and places them in its correct position

Method used here:- Takes an element and places it in its correct order 
*/

//psuedocode

for(int i=0; i<= n - 1; i++)
{
    j = 1;
    while(j > 0 && a[j-1] > a[j])
    {
        swap(a[j-1], a[j]);
        j--;
    }
}

//T.C --> O(n^2) --> Worst Case
//T.C --> O(n^2) --> Average Case
//T.C --> O(n) --> Best Case // will traverse the array only once if it is in sorted order
