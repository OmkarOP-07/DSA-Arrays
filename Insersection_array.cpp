#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Find intersection of two arrays
//[1,2,3,5,6,8,8]
//[4,5,6,7,8,9,9]
void Two_pointer_approach(int arr1[],int arr2[],int n1,int n2){
    int i =0;
    int j =0;
    int temp[n1];
    int k =0;
   while(i< n1&& j<n2){
       if(arr1[i]<arr2[j]){
        i++;
       }
       else if(arr2[j]<arr1[i]){
        j++;
       } else if(arr1[i] == arr2[j]){
        temp[k++] = arr1[i];
        i++;j++;
    }
}
    cout<<endl;
    cout<<"Optimal Result :";
    for (int i = 0; i < k; i++)
    {
         cout<<temp[i]<<" ";
    }
}

int main()
{
    int n1 = 10;
    int n2 = 9;
    int arr[n1]={1,2,2,3,5,6,6,8,9,9};
    int arr2[n2] = {3,3,4,5,7,7,8,9,9};
    //callling optimal approach 
    Two_pointer_approach(arr,arr2,n1,n2);
   
    int temp[n1];
    int visited[10] ={0};
    int k =0;
    for(int i = 0;i < n1;i++){
        for(int j = 0;j<n2 ;j++){
            if(arr[i] == arr2[j] && visited[j] == 0){
                temp[k++] = arr[i];
                visited[j]++;
                break;
            }
        }
    }
    cout<<"Brute Force result :";
    for (int i = 0; i < k; i++)
    {
         cout<<temp[i]<<" ";
    }
    
 return 0;
}