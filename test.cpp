#include<iostream>
#include<algorithm>
using namespace std;

void second_lagest(int arr[],int n){
    int largest = arr[0];
    int second_largest = -1;
    for(int i =0 ; i<n;i++){
        if(arr[i]>largest ){
            second_largest =largest;
            largest = arr[i];
        }
        else if(arr[i] <largest && arr[i]>second_largest){
            second_largest = arr[i];
        }
    }
    cout<<"Largest "<< largest<<endl<<"Second largest "<<second_largest<<endl;
}
int main()
{
    int arr[] = {1,2,4,2,6,2,7,7,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    second_lagest(arr,n);

    sort(arr,arr+n);
    cout<<"Largest is :"<<arr[n-1]<<endl;
   
        for(int i = 0 ;i<n;i++){
            if(arr[n-1]!=arr[n-2-i]){
                cout<<"Second Largest :"<<arr[n-2-i];
                break;
            } 
        }
    

 return 0;
}

