#include<iostream>
using namespace std;

void large(int arr[],int n){
    int second_large = -1;
    int largest = arr[0];
    for(int i = 0;i<n;i++){
    if(arr[i]>largest){
        second_large=largest;                            //a[i] > largest update the second largest 
        largest = arr[i];                                
    }
    else if(arr[i]<largest && arr[i]>second_large){  //if a[i] is smaller than largest but greater than second largest
        second_large = arr[i];
    }
    }
    cout<<"Largest val is: "<<largest<<endl;
    cout<<"Second Largest is: "<<second_large<<endl;
    
}

int small(int arr[],int n){
    int smallest = arr[0];
    int second_smallst = INT32_MAX;
    for(int i = 0;i<n;i++){
        if(arr[i]<smallest){
        second_smallst=smallest;
        smallest = arr[i];
        } else if(arr[i]!= smallest && arr[i]<second_smallst){
            second_smallst = arr[i];
        }
    } 
    cout<<"smallest is "<<smallest<<endl;
    cout<<"second smallest is "<<second_smallst<<endl;
}


int main()
{
    int n;
    int f;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<endl;
    cout<<"Enter the elements of array :";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    large(arr,n);
    small(arr,n);
 return 0;
}