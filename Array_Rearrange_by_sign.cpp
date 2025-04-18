//Rearrange Array Elements by alternative Sign
// run the file
#include<iostream>
#include<vector>
using namespace std;

//T.C. = O(N) + O(N/2)
//S.C. = O(N)
int Brute(int arr[],int n){
vector <int> pos;
    vector <int> neg;
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0 ) pos.push_back(arr[i]);
        else neg.push_back(arr[i]);
    }
    for (int i = 0; i < n/2; i++)
    {
        arr[2*i] = pos[i];
        arr[2*i+1] = neg[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}  

//T.C. = O(N)
//S.C. = O(N)
int Optimal(vector<int> arr){
     int i= 0;    //For positive
    int j=1;   //For Negative 
    vector<int> ans(arr.size(),0);
    for (int k = 0; k < arr.size(); k++)
    {
        if(arr[k]>0) {
            ans[i] = arr[k];
            i +=2;
        }
        else if(arr[k] < 0){
            ans[j] = arr[k];
            j +=2;
        }
    }
 for (int i = 0; i < ans.size(); i++)
    {
         cout<<ans[i]<<" ";
    }
    
}
int main()
{
    int arr[] = {-1,2,33,-2,3,-2,-4,8};
    int n = sizeof(arr)/sizeof(arr[0]);
   // Brute(arr, n);
    Optimal({1,2,3,4,-1,-2,-3,-4});
 return 0;
}