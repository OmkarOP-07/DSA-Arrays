 #include<iostream>
 #include<vector>
 //Rotate Array left k timesś
 using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        while(k!=0){
            int temp = nums[nums.size()-1];
            for(int i = nums.size()-1;i>0;i--){
                nums[i] = nums[i-1];
        }
        nums[0] = temp; 
         k--;
        }
         for (int i = 0; i < nums.size(); i++)
            {
                 cout<<nums[i]<<endl;
            }
    }
};
 int main()
 {
    vector<int> myArray  = {1,2,3,4};
    Solution s1 ;
    s1.rotate(myArray,2);
    
  return 0;
 } 
 