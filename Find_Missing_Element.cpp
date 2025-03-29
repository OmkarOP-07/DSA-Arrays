#include<iostream>
#include<vector>
using namespace std;
//Find the missing element form a given sorted array

//Brute Force 
//T.C. = O[n^2]
//S.C = O[n]
int Find_Missing_Element(int arr[],int n){
    int ans = 0;
    int hash[n+1] = {0};                    //Hashing method
    for(int i = 0;i < n ; i++){
        hash[arr[i]]++;
    }
   for(int i = 0;i <= n ; i++){
        if(hash[i] == 0 ){
            ans = i;
        }
   }
    return ans;
}

//Better Approach
// T.C. = O(n)
// S.C. = O(1)
int Find_Missing_Element_Better(int arr[],int n){
    int ans = -1;
    int sum2 = 0;
    int sum1 = (n*(n+1))/2;
    for(int i = 0;i<n;i++){
        sum2 += arr[i];
    }
    return sum1 -sum2;
}
// Optimal Approach
// T.C. = O(n)
// S.C. = O(1) then why it is better? 
// Ans. = while calculating the sum of first n natural numbers the no exceeds integers data size so double(slightly large data type is
// but while xoring any elements it never exceeds the og data size required)
// xoring an element with zero is always that number

int Find_Missing_Element_Optimal(vector <int> arr,int n){
    int xor1 =0 ;
    int xor2=0;
    for (int i = 0; i<n-1;i++)
    {                              // arr = [1,2,3,5]
        xor2 = arr[i]^xor2;        //1^2^3^5
        xor1 = xor1^(i+1);         //1^2^3^4
    }
    xor1 = xor1^n;
    return xor1^xor2;
}

int main()
{
    int n = 5;
    int arr[n] = {1,2,3,5};
    cout<<"The Missing number is (by Brute Force App. ):"<<Find_Missing_Element(arr,n)<<endl;
    vector <int> Array ={1,2,3,5};
    cout<<"The Missing element is (by Better App. ):"<<Find_Missing_Element_Better(arr,n)<<endl;
    cout<<"The Missing Element is (by Optimal Approach) :"<<Find_Missing_Element_Optimal(Array,n);
 return 0;
}