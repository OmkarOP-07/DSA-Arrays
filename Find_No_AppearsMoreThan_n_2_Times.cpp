#include<iostream>
#include<vector>
#include<map>
#include<utility>
using namespace std;
//Find the Majority Element that occurs more than N/2 times
//Problem Statement: Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array.
//You may consider that such an element always exists in the array.

//T.C. = O(3N)
//S.C. = O(maxi)
int Brute(int arr[],int n){
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi,arr[i]);
    }
    int hash[maxi+1] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    int na = n/2;
    for (int i = 0; i < n; i++)
    {
        if(hash[i]>na){
            return i;
        }
    }
}
//T.C. = O(N) + O(N log N)
//S.C. = O(N)
int Better(vector <int> v){
    map<int,int> mpp;
    for (int i = 0; i < v.size(); i++)
    {
        mpp[v[i]]++;
    }

    for (auto it : mpp)
    {
        if(it.second > v.size()/2){
            return it.first;
        }
    }
    return -1;  
}
int main()
{
    int arr[] = {6,6,3,4,2,5,6,6,6,6,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<Brute(arr,n);
    cout<<endl;
    cout<<Better({1,2,2,2,2,2,3,2,3,5,6})<<endl;
 return 0;
}