#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

// T.C. = O(n^2)
// S.C. = O(1) 

string Brute(){
    int key = 11;
    int arr[] = {1,2,3,4,5,6,7,9,};
    int n =sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(arr[i] + arr[j] == key){
                return "YES";
            }
        }
    }
    return "NO";
}


pair<int,int> Brute2(){
    int key = 11;
    int arr[] = {1,2,3,4,5,6,7,9};
    int n =sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(arr[i] + arr[j] == key){
                return {i+1,j+1};
            }
        }
    }
    return {-1,-1};
}
// T.C. = O(N) + O(N log N)
// S.C. = O(N log N) 
string Better(){
    int key = 20;
    int arr[] = {1,2,3,4,5,6,7,9,};
    int n =sizeof(arr)/sizeof(arr[0]);

    map <int,int> hashMap;

    for (int i = 0; i < n; i++)
    {
        int sum = arr[i];
        int remSum = key - sum;

        if(hashMap.find(remSum) != hashMap.end()){
            return "YES";
        }
        else 
        hashMap[sum] = i;
    }
    return "NO";
}

pair<int,int> Better2(){
    int key = 20;
    int arr[] = {1,2,3,4,5,6,7,9,};
    int n =sizeof(arr)/sizeof(arr[0]);

    map <int,int> hashMap;

    for (int i = 0; i < n; i++)
    {
        int sum = arr[i];
        int remSum = key - sum;

        if(hashMap.find(remSum) != hashMap.end()){
            return {hashMap[remSum],i+1};
        }
        else 
        hashMap[sum] = i;
    }
    return {-1,-1};
}

// T.C. = O(N)
// S.C. = O(1) 
string Optimal(){
    int key = 11;
    int arr[] = {1,2,3,4,5,6,7,9};
    int n =sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int j = n-1;
    sort(arr,arr+n);
    while(i<=j){
        if(arr[i] + arr[j] == key){
            return "YES";
        }
        else if(arr[i] + arr[j] < key){
            i++;
        } else 
        j--;
    }
    return "NO";
}

int main()
{
    
    string ans;
    ans =  Brute();
    pair<int,int> p1 = Brute2();
    cout<<"Ans of varient1 is : "<<ans<<endl;
    cout<<"Ans of varient2 is : "<<p1.first<<" "<<p1.second<<endl;

    string ans2 =  Better();
    cout<<"Ans of varient1 is : "<<ans2<<endl;
    pair<int,int> p2 = Better2();
    cout<<"Ans of varient2 is : "<<p2.first<<" "<<p2.second<<endl;

    string ans3 =  Optimal();
    cout<<"Ans is : "<<ans3<<endl;
 return 0;
}