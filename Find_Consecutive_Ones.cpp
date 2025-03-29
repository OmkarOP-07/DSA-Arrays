#include<iostream>
#include<limits.h>
using namespace std;


int main()
{
    int arr[] = {1,1,1,0,0,1,1,0,0,1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count =0;
    int MaxConsecutiveNo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 1){
            count++;
        } else {
            count = 0;
        }
        if(MaxConsecutiveNo < count ){
            MaxConsecutiveNo = count;
        }
    }

    cout<<"The Maximum Consecutive Element is :"<<MaxConsecutiveNo;
 return 0;
}    