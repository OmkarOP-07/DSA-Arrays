#include<bits/stdc++.h>
#include<set>
using namespace std;
//Brute Force approach 
// T.C. = O(n1 log n) + O(n2 log n) + O(n1+n2)
// S.C = O(n1 + n2) 

set <int> unions(int arr1[],int arr2[],int n1,int n2){
    set<int> st;
    for (int i = 0; i < n1; i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        st.insert(arr2[i]);
    }
    for (auto x :st)
        {
            cout<<x<<" ";
        }
}

//Optimal Approach
vector <int> sortedArray(vector<int> a, vector<int> b){
    int i = 0;
    int j = 0;
    int n1 = a.size();
    int n2 = b.size();
    vector <int> Union;
      while (i < n1 && j < n2) {
        if (a[i] <= b[j]) // Case 1 and 2
            {
            if (Union.size() == 0 || Union.back() != a[i])
                Union.push_back(a[i]);
             i++;
        } else {
            if (Union.size() == 0 || Union.back() != b[j])
            Union.push_back(b[j]);
            j++;
        }
      }
        while(i<n1){
            if(Union.empty() || Union.back()!= a[i]){
                Union.push_back(a[i]);
                i++;
            }
         }
         while(j<n2) {
            if(Union.empty() || Union.back()!= b[j]){
                Union.push_back(b[j]);
                j++;
            }
         }
    return Union;
}
int main()
{
    int a[] = {1,2,3,4,5};
    int n1 = sizeof(a)/sizeof(a[0]);
    int b[] = {2,3,4,5,6,8,9};
    int n2 = sizeof(b)/sizeof(b[0]);
    cout<<endl<<"Result of BruteForce Approach :";
    set<int> res;
   // unions(a,b,n1,n2);
    vector<int> a1 = {1, 2, 3, 4, 5};
    vector<int> b1 = {2, 3, 4, 5, 6, 9, 12};
    vector<int> result; 
    int x =0;
    
    result = sortedArray(a1,b1);
    cout<<endl<<"Result of Optimal Approach :";
    for(auto it : result)
    cout<<it<<" ";
 
}

