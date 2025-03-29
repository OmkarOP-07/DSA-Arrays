#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int k){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == k){
            return i+1;
        } 
    }
    return -1;
}
int main()
{
    int n,k;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<endl;
    cout<<"Enter the elements of array :";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a key element :"<<endl;
    cin>>k;
    int ans = linear_search(arr,n,k);
    if(ans == -1){
        cout<<"Not Found."<<endl;
    } else 
    cout<<"Element found at :"<<ans;
 return 0;
}