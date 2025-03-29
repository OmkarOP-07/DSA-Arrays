#include<iostream>
#include<algorithm>
using namespace std;
//Brute is not efficient
//Optial Solution -->
//T.C. = O(N) + O(N) +O(N log N)
//S.C. = O(1)
int main()
{
   int arr[] ={1,3,2};
   int n = sizeof(arr)/sizeof(arr[0]);
    //find breakpoint 
    int breakpoint = 0;
    for (int i = n-2; i >=0; i--)
    {
        if(arr[i] <arr[i+1]) breakpoint = i;
    }
    //cout<<arr[breakpoint];
    //Find swapping element
    for (int i = n-1; i >breakpoint; i--)
    {
        if(arr[breakpoint] <arr[i]){
            swap(arr[i],arr[breakpoint]);
            break;
        }
    }

    sort(arr+breakpoint+1,arr+n);
 for (int i = 0; i < n; i++)
    {
         cout<<arr[i]<<" ";
    }
 return 0;
}