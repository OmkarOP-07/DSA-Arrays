#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// T.C. = O(N)
// S.C. = O(N)
int Optimal(int arr[],int n){
    vector<int> leaders;
    int maxi = INT_MIN;
    for(int i =n-1;i>=0;i--){
        if(arr[i]>maxi){
            maxi = arr[i];
            leaders.push_back(arr[i]);
        }
    }
    n = leaders.size();
    for (int i = 0; i < n/2; i++)
    {
        swap(leaders[i],leaders[n-1-i]);
    }
    
    for(auto it : leaders){
        cout<<it<<" ";
    }
}

int main()
{
    int arr[] ={9,1,7,4,3,6,2};
   int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> leader;
    bool flag =0;
    for (int i = 0; i < n; i++)
    {
        flag = 1;
        for (int j = i+1; j < n; j++){
        if(arr[i]<arr[j]) 
        flag = 0;
        }
        if(flag == 1){
        leader.push_back(arr[i]);
        }
    }
    for (auto it : leader)
       {
            //cout<<it<<" ";
       }
    Optimal(arr,n);
 return 0;
}