/*
It pushes the maximum to the last(opposite to selection sort) --> Here adjacent swapping is the key method.

Method used here:- Push the maximum to the last by adjacent swapping.

where n = array.size() - 1

13 46 24 52 20 9
-----               // 13<46 no swap needed
0  1  2  3  4  5


13 46 24 52 20 9    //46<24 swap needed
   -----
0  1  2  3  4  5


13 24 46 52 20 9    // 46<52 no swap needed
      -----
0  1  2  3  4  5


13 24 46 52 20 9   // 52<20 swap needed
         -----
0  1  2  3  4  5


13 24 46 20 52 9   // 52<9 swap needed
            -----
0  1  2  3  4  5


13 24 46 20 9 52  // here we can see the largest/maximum element in the array is  arranged in the last
              --
0  1  2  3  4  5

So the above is step 1 we will peform step 2,step 3,step 4 and step 5 following the same procedure but in step 2 we will
check for n - 1 since the last element is already in it's correct position , similarly for step 3 we will check for n - 2
since the last and the second element is already in it's correct position , and similarly the procedure/steps will proceed accordingly.

0  1  2  3  4  5
*/

// psuedocode

for (int i = n - 1; i >= 1; i--)
{
    for (j = 0; j <= i - 1; j++)
    {
        if (arr[j] > arr[j + 1])
            swap(arr[j], arr[j + 1]);
    }
}


//T.C --> O(n^2) --> Worst Case
//T.C --> O(n^2) --> Average Case
//T.C --> O(n) --> Best Case // will traverse the array only once if it is in sorted order