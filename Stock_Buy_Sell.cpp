#include<iostream>
#include<limits.h>
using namespace std;

int brute(int arr[],int n){
    int sum = 0;
    int buyDay = -1;
    int sellDay = -1;
    for (int i = 0; i < n; i++)
    {
        for(int j =i ;j<n;j++){
            int x = arr[j] - arr[i];
            if(x>sum){
                sum=x;
                buyDay = i+1;
                sellDay = j+1;
            }
        }
    }
    cout<<"Buy on day :"<<buyDay<<endl<<"sell on day :"<<sellDay;
    
}

int better(int arr[],int n){
    int profit = 0;
    int minimal = INT_MAX;
    int buyDay,sellDay = -1;
    int maximal = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<minimal){
            minimal = arr[i];
            buyDay = i+1;
        }
        if(arr[i]>minimal && arr[i]>maximal){
            maximal = arr[i];
            sellDay = i+1;
        }
    }
    cout<<"Buy on day :"<<buyDay<<" "<<minimal<<" price"<<endl<<"sell on day :"<<sellDay<<" "<<maximal;

}
int main()
{
    int arr[] = {9,-1,2,3,122,3,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
   // cout<<maxi;
  // brute(arr,n);
   better(arr,n);
 return 0;
}