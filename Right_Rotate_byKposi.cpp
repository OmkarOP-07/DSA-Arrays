#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Right_Rotate_Optimal(int arr[],int n,int k){
    if(n==0) return 0;
    reverse(arr+(n-k),arr+n);
    reverse(arr,arr+(n-k));
    reverse(arr,arr+n);
    cout<<"*Optimal Approach : Rotated array is :";
    for (int i = 0; i < n; i++)
    {
         cout<<arr[i];
    }

}
   
int main()
{
    int n;
    int k;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<endl;
    cout<<"Enter the elements of array :";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter shifting element ";
    cin>>k;
     Right_Rotate_Optimal(arr,n,k);
   
   
 return 0;
}

