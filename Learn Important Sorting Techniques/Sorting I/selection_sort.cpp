/*
13 46 24 52 20 9 --->ascending order --->  9 13 20 24 46 52

Method used here :- Select minimums and swap


where n = array.size() - 1

13 46 24 52 20 9
----------------    //step 1: minimum in the array is 9 so swap 9 and put it in the first index of the array and swap it with 13
0  1  2  3  4  5


9 46 24 52 20 13    //step 2: now 9 is in it's position we will start checking the minimum from index (1-n) and we get 13 and swap it with 46 at index 1
  --------------
0  1  2  3  4  5

9 13 24 52 20 46    //step 3: now 13 is in it's position we will start checking the minimum from index (2-n) and we get 20 and swap it with 24 at index 2
     -----------
0  1  2  3  4  5

9 13 20 52 24 46    //step 4: now 20 is in it's position we will start checking the minimum from index (3-n) and we get 24 and swap it with 52 at index 3
        --------
0  1  2  3  4  5

9 13 20 24 52 46    //step 5: now 24 is in it's position we will start checking the minimum from index (4-n) and we get 46 and swap it with 52 at index 4
           -----
0  1  2  3  4  5

9 13 20 24 46 52    //now 46 is in it's position and the array is sorted not need for further steps
              --
0  1  2  3  4  5

*/

// psuedocode

for (int i = 0; i < n - 2; i++)
{
    mini = i;
    for (j = i; j <= n; j++)
    {
        if (arr[j] < arr[mini])
            mini = j;
    }
    swap(arr[mini], arr[i]);
}

//T.C --> O(n^2) -->Best,Worst and Average Case 
