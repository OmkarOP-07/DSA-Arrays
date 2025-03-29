//Input  = [1,1,2,2,3,4,4,5,5]
//Answer = 3
//Problem Stt. = Find the element which appears only ones in an given array 
#include<vector>
#include<iostream>
#include<map>

using namespace std;

// BruteForce Approach
// T.C = O(3n)
// S.C. = O(maxi)
int Find_No_appeared_ones(int arr[],int n){
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi,arr[i]);
    }
    cout<<maxi<<endl;
int hash[maxi] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for(int i = 0;i < maxi; i++){
        if(hash[i]== 1){
            return i;
        }
    }
}

// Better approach 
//T.C. = O(n log m) (*for storing elements in map) + O(m/2 +1)     -- m is the size of the map
//S.C. = O(n/2 +1) 
int Find_ones_appearedNo_Better(int arr[],int n){
    map<int, int > mp; 
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++; 
    }
    for(auto it : mp ){
        if(it.second == 1){
            cout<<"Ones occured element is :"<<it.first<<endl; break;
        }
    }
}

int optimal(vector <int> arr){       //1,1,2,3,3,4,4,5,5
    int xor1 = 0;
    for (int i = 0; i < arr.size(); i++)
        xor1 = xor1^arr[i];
    return xor1;

}
int main()
{
    int arr[] = {1,3,4,5,4,3,5,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = Find_No_appeared_ones(arr,n);
    cout<<"Element which appeared one's :"<<ans<<endl;

    Find_ones_appearedNo_Better(arr,n);

    vector<int> arr1 = {1,1,2,3,3,4,5,4,5};
    cout<<"Answer of Optimal Sol is :"<<optimal(arr1);
    
    return 0;
}