#include<iostream> 
#include<vector>
#include<algorithm>
#include<limits.h>
#include<unordered_set>
using namespace std;


int Better(int arr[],int n ){
    sort(arr,arr+n);
    int cnt = 1;
    int maxCnt = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int el = arr[i];
        if(el == arr[i-1]){
            cnt++;
        } else if(el == arr[i]){
    
        } else if(el != arr[i]){
            cnt = 1;
        }
        maxCnt = max(maxCnt,cnt);
    }
    cout<<maxCnt;
}
bool linear_search(int arr[],int n,int el ){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == el)
        return true;
    }
    return false;
}

int longestSuccessiveElements(vector<int>&a) {
    sort(a.begin(),a.end());
    int el = a[0];
    int maxCnt = 0; 
    int cnt= 0;
    for(int i = 0;i<a.size();i++){
        el = a[i];
        if(el == a[i-1]){
            cnt++;
        } else if(el == a[i-1]){

        } else {
            cnt = 1;
        }
        maxCnt = max(maxCnt,cnt);
    }
    return maxCnt;
    // Write your code here.
}
int main()
{
    //Brute
    int arr[] ={1,1,4,2,5,7,4,8,5,4,3,};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Hii";
    int longest = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 1;
        int element = arr[i];
        while(linear_search(arr,n,element+1)){
            cnt++;
            element++;
        }
        longest = max(longest,cnt);
    }
    cout<<longest;
    Better(arr,n);
    vector<int> x = {1,2,6,3,4,3,8,9};
    cout<<longestSuccessiveElements(x);
 return 0;
}
