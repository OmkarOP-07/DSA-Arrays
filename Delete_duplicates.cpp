#include<iostream>
#include<vector>
using namespace std;
#include<set>
// Time complexity = O(n log n )  ... set takes log n compl. and for loop takes n tc
int BruteForce(int arr[],int n)
{
    set <int> st;
    for(int i = 0;i<n;i++){
        st.insert(arr[i]);
    }
    
    int k = st.size();
    int j = 0;
    for (int x: st) {
    arr[j++] = x;
    }
    
 return k;
}

//Another Approach
 int removeDuplicates(vector<int>& nums) {
        int j=1;
        for(int i =1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[j] = nums[i];
                j++;
            }
        }
        cout<<j<<endl;
         for (int i = 0; i < j; i++)
            {
                 cout<<nums[i]<<endl;
            }
    }
    
//Optimal Approach
//Time complexity = O(n)
//space complexity = O(1)
int main()
{
    int arr[] = {1,1,3,5,5,7,7,7,8,8,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int duparr[] = {};
    vector <int> myArray ={1,2,3,3,4,4,5,5,6};
    for (int  i = 0; i < n; i++)
    {
        duparr[i] = arr[i];
    }
    
    int i =0;
    for(int j =1;j<n;j++){
        if(arr[j]!= arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    cout<<"size ="<<i+1<<endl;
      for (int k = 0; k <= i; k++)
    {
        cout<<arr[k]<<endl;
    }

    cout<<"Brute Force "<<endl;
    int k = BruteForce(duparr,n);
    cout<<"Size = "<<k<<endl;
     for (int i = 0; i < k; i++)
        {
             cout<<arr[i]<<endl;
        }
        removeDuplicates(myArray);
 return 0;
}

//Another example 
