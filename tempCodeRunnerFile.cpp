#include<iostream>
using namespace std;



int n = 3;
int arr[3][3] = 
    {{1,2,3},
    {4,5,6},
    {7,8,9}};

int Brute(){
    int ans[n][n] ={0};
     for(int i =  0;i<n;i++){
        for(int j =0;j<n;j++){
            ans[j][n-1] = arr[i][j];
        }
     }
      for (int i = 0; i < n; i++)
         {
            for(int j =0;j<n;j++){
              cout<<ans[i][j]<<" ";
            }
              cout<<endl;
         }
}
int main()
{
    Brute();
 return 0;
}