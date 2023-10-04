#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }

    int main()
{
	vector<int> arr = { 1, 3, 3,4 , 3, 5,4 };
	int c=4;
	int res = removeElement(arr , c);
    
	cout<<res;
	return 0;
}
