#include<iostream>
#include<algorithm>
using namespace std;
//T.C. = O(n^2)
//S.C. = O(1)
void Brute(int arr[],int n){
//Just Sort it baby
    for(int i = 0;i<n;i++){
        for(int j = 1;j<n-i ;j++){
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
        }
    }
 for (int i = 0; i < n; i++)
    {
         cout<<arr[i]<<" ";
    }
}
//T.C. = O(2N)
//S.C. = O(1)
void Better(int arr[],int n){
    int count0= 0;
    int count1= 0;
    int count2 = 0;

    for (int  i = 0; i < n; i++)
    {
        if(arr[i] == 0) count0++;
        if(arr[i] == 1) count1++;
        if(arr[i] == 2) count2++;
    }
    int k =0;
    for (int i = 0; i < count0; i++)
        arr[k++] = 0;
    for (int i = 0; i < count1; i++)
        arr[k++] = 1;
    for (int i = 0; i < count2; i++)
        arr[k++] = 2;

    cout<<endl;
    for (int i = 0; i < n; i++)
    {
         cout<<arr[i]<<" ";
    }
}

//Dutch National Flag Algo
//T,C. = O(N)
//S.C. = O(1)
void Optimal(int arr[],int n){
    int low = 0 ;
    int high = n-1;
    int mid = 0;

    while (mid <= high ){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            low++; mid++;
        }
        if(arr[mid] == 1){
            mid++;
        }
        if(arr[mid] == 2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    cout<<endl;
 for (int i = 0; i < n; i++)
    {
         cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={2,1,2,1,2,1,2,1,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    Brute(arr,n);
    Better(arr,n);
    Optimal(arr,n);
 return 0;
}