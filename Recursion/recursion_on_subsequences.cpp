/*

Print all subsequences using Recursion

Defn of Subsequences --> a contagious / non-contagious sequence , which follows the order.

Ex:- arr-->{3,1,2}


Subsequences are :-
{}
3
2
3 1
1 2 
3 2 
3 1 2 

3 2 1 --> will not be a subsequence because it is not following the order 

*/

#include <bits/stdc++.h>

using namespace std;

void printF(int index,vector <int> &ds,int arr[],int n)
{
 if(index==n)
 {
     for(auto it:ds)
         cout<<it<<" ";
    
        if(ds.size()==0)         //NULL is present
        cout<<"{}";

        cout<<"\n";
        return;
     }

     //take or pick the particular index into the subsequence
     ds.push_back(arr[index]);
     printF(index + 1,ds,arr,n); 

     ds.pop_back();
     //not pick,or not take condition,this element is nt added to your subsequence 
       printF(index+1,ds,arr,n);
 }
int main()
{
        int arr[]={3,4,2};
        int n=3;

        vector<int> ds;
        printF(0,ds,arr,n);

        return 0;
}


//you can also print it it in the reverse order 

void printF(int index,vector <int> &ds,int arr[],int n)
{
 if(index==n)
 {
     for(auto it:ds)
         cout<<it<<" ";
    
        if(ds.size()==0)         //NULL is present
        cout<<"{}";

        cout<<"\n";
        return;
     }

     //not pick,or not take condition,this element is nt added to your subsequence (do not pick condition at the front) 
     printF(index + 1,ds,arr,n); 

     //take or pick the particular index into the subsequence
     ds.push_back(arr[index]);
     printF(index+1,ds,arr,n);
     ds.pop_back();

      
 }
int main()
{
        int arr[]={3,4,2};
        int n=3;

        vector<int> ds;
        printF(0,ds,arr,n);

        return 0;
}


//Time Complexity --> o(2^n x n)
//Space Complexity --> o(n)