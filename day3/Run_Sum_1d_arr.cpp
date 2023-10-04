
#include <bits/stdc++.h>
using namespace std;

  vector<int> runningSum(vector<int>& nums) {
        
        for(int i=1;i<nums.size();i++){

            nums[i]+=nums[i-1];

        }

        return nums;
    }

    
int main()
{
	vector<int> arr = { 1, 3, 3, 3, 5 };
	
	vector<int> res = runningSum(arr);
	for(int x: res)
		cout << x << " ";
	return 0;
}
