#include<iostream>
#include<vector>
using namespace std;


bool checkArraySorted(int arr[],int n){
 bool check = true;
    int i;
    for(i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            check = false;
            return false;
        }
    }
    if(i == n){
        check = true;
    }
    if(check == true)
    return true;
    else 
    return false;
}

int main(){
    
        int n;
        cout<<"Enter size of array :";
        cin>>n;
        int arr[n];
        cout<<endl;
        cout<<"Enter the elements of array :";
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        if(checkArraySorted(arr,n)){
            cout<<"is sorted";
        }
        else 
        cout<<"not sorted";
}

//Leetcode Problem: ascending and rotated array 
class Solution {
public:
    bool check(vector<int>& nums) {
        int count =0;
        int n = nums.size();
        int i;
        for(i = 1;i<n;i++){
            if(nums[i]<nums[i-1]){
            count++;
            }
        }
        if(nums[0]<nums[n-1]) count++;

        if(count<=1) return true;
        else return false;
    }
};