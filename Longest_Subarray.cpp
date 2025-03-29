#include<iostream>
#include<bits/stdc++.h>
#include<utility>
#include<map>
using namespace std;
//return the length of the longest subarray
//T.C. = O(n^2)
//S.C. = O(1)
void BruteForce(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 22;
    int maxi = 0;
    for (int i = 0; i < n;  i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
           sum += arr[j];
           if(sum == key)
           maxi = max(maxi,j-i+1);
        }
       
    }
    cout<<maxi;
}
//T.C. O(n log n)
//S.C. O(n log n)
int Better(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    long long key = 25;
    long long sum =0;
    int maxLen = 0;
    map <long long, int> hashMap;
    for (int  i = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum == key){
        maxLen = max(maxLen,i+1);
        }

        long long remSum = sum - key;
        if(hashMap.find(remSum)!= hashMap.end()){
            int len = i - hashMap[remSum];
            maxLen = max(len,maxLen);
        }

        if(hashMap.find(sum) == hashMap.end()){
            hashMap[sum] = i;
        }
    }
    cout<<maxLen;
}

//Two pointer approach 
// T.C. = O(N)
// S.C. = O(1)

int Optimal(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 22;
    int len = 0;
    int i =0;int j =0;
    int sum = arr[i];
    while(i<n){
        while(i <= j && sum > key){
            sum -= arr[i];
            i++;
        }  
        if (sum == key) {
            len = max(len,j-i+1);
        }
        j++;
        if(j<n) {
        sum+= arr[j];
        }
    }
    cout<<len;

}
int main()
{
    //BruteForce();
    Better();
    //Optimal();
   
 return 0;
}