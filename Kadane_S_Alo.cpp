#include<iostream>
#include<limits.h>
using namespace std;

//T.C. = O(n^2)
//S.C. = O(1)
int Better(int arr[], int n){
    int prevSum =0,maxSum =0;
    for(int i = 0;i<n;i++){
        int currSum = 0;
        int prevSum =0;
        for(int j = i; j < n; j++)
        {
            currSum = prevSum + arr[j];
            prevSum = currSum;
            maxSum = max(maxSum,currSum);
        }      
    }
    cout<<maxSum;
}
//Kadanes Algo
//T.C. = O(n)
//S.C. = O(1)
int main()
{
    int arr[] = {-1,2,-9,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int currSum = 0;
    int maxSum = INT_MIN; 
    int ansStart,endAns=-1;
    int start = 0;
    for(int i =0;i<n;i++){
        if(currSum == 0){
            start = i;
        }
        currSum += arr[i];
        if(currSum > maxSum){
            maxSum = currSum;
            ansStart = start;
            endAns = i;
        }
        // if(currSum < 0 ){
        //     currSum = 0;
        //     int st = i+1;
        // }
        // maxSum = max(maxSum,currSum);
    }
    cout<<maxSum<<endl;
    Better(arr,n);
 return 0;
}