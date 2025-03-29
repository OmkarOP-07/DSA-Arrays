#include<iostream>
#include<limits.h>
using namespace std;

int Find_Largest(int arr[],int n){
    int largest = INT32_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i]>largest)
        largest = arr[i];
    }
    return largest;
}

int main()
{
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
    cout<<Find_Largest(arr,n);
 return 0;
}

