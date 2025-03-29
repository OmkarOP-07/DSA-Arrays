//Input  = [1,1,2,2,3,4,4,5,5]
//Answer = 3
//Problem Stt. = Find the element which appears only ones in an given array 

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,3,4,5,4,3,5,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0 ;i < n ; i++){
        int count = 0;
        for(int j = i ; j < n ; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count != 2){
            cout<<"Number is :"<<arr[i];
            break;
        }
    }

 return 0;
}