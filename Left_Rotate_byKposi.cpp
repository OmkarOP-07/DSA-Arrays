#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int Left_Rotate(int arr[],int n,int k){
     
    if(n==0) return 0;
    k = k%n;
    int temp[k];

    for(int i = 0;i<k;i++){
        temp[i] = arr[i];

    }

    for(int i = k;i<n;i++){
        arr[i-k] = arr[i];
    }
    
    for(int i=n-k;i<n;i++){
        arr[i] = temp[i-(n-k)];
    }

    cout<<"*Brute Force : Rotated array : ";
    for (int i = 0; i < n; i++)
    {
         cout<<arr[i]<<" ";
    }
}


int Left_Rotate_Optimal(int arr[],int n,int k){
    if(n==0) return 0;
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
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
     Left_Rotate_Optimal(arr,n,k);
    Left_Rotate(arr,n,k);
   
 return 0;
}

