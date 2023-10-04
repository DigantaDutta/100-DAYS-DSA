#include<bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParity(std::vector<int>& nums) {
    int j = 0; 
    for (int i = 0; i < nums.size(); i++) {
        
        if (nums[i] % 2 == 0) {
            std::swap(nums[i], nums[j]);
            j++; 
        }
    }
}

    return nums;