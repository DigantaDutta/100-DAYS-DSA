#include <bits/stdc++.h>
using namespace std; 
 int removeDuplicates(vector<int>& nums) {
        int i =0;
        
        for(auto ele : nums)
        {
            if(i==0 || i==1 || nums[i-2] != ele)
            {
                nums[i] = ele;
                i++;
            }
        }
    return i ;
    }

    int main()
{
	
    vector<int> nums{ 10, 20, 30 };
   
    for (int x : nums)
        cout << x << " ";
  
    return 0;
}