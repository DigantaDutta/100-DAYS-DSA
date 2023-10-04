#include <bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int>& nums) {
        int left_sum=0,right_sum=0;
        for(auto it:nums) right_sum+=it;
        for(int i=0;i<nums.size();i++)
        {
            right_sum-=nums[i];
            if(left_sum==right_sum) return i;
            left_sum+=nums[i];
        }
        return -1;
    }
  int main()
{
	
    vector<int> nums{ 1,7,3,6,5,6};
   
    int miss_ele = pivotIndex(nums);
 
  //  for (int i = 0; i < miss_ele.size(); i++)
    //    cout << miss_ele[i] << " ";
    
  cout<<miss_ele;
    return 0;
}