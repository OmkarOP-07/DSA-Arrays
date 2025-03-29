#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template <typename T, size_t N>
size_t arrayLength(T (&arr)[N]) {
    return N; // Returns the number of elements in the array
}

int optimal(int arr[], int n) {
    int j = 0; // 'j' will track the position of the non-zero elements

    // Traverse the array
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            // If element is non-zero, swap it with element at index 'j'
            swap(arr[i], arr[j]);
            j++; // Move to the next non-zero position
        }
    }
    cout<<endl;
    cout<<"OPTIMAL"<<endl;
 for (int i = 0; i < n; i++)
    {
         cout<<arr[i]<<" ";
    }
    return 0;
}

// int optimal(int arr[],int n){
//     int j =0;
//     int i =1;
//     while(j<n)
//     {                    
//         if(arr[j] == 0 && arr[i]!=0){
//             swap(arr[i],arr[j]);
//             i++;
//         } else if(arr[j]==0 && arr[i] ==0){
//             i++;
//         } else if(arr[j] != 0 && arr[i] == 0){
//             i++;
//         } else if(arr[j]!= 0 && arr[i] != 0){
//             i++;j++;
//         }
//     }
//     cout<<endl;
//     cout<<"Optimal sol: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
int main()
{
    int n = 8;
    int arr[] = {1,4,3,2,0,3,2,1};
    // int temp[5];
   
    // int j =0;
    // int count = 0;
    // for(int i =0;i<5;i++){
    //     if(arr[i]!=0){
    //         temp[j] = arr[i];
    //         j++;
    //     }
    // }
    // for(int i = j;i<5 ;i++){
    //     temp[i] = 0;
    // }
    // cout<<"ANS : ";
    //  for (int i = 0; i < 5; i++)
    //     {
    //          cout<<temp[i]<<" ";
    //     }

    optimal(arr,n);
 return 0;
}