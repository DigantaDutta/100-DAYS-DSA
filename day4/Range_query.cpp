#include <bits/stdc++.h>
using namespace std;

int pref[10005];
    NumArray(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++) pref[i+1] = pref[i] + nums[i];
    }  
    int sumRange(int left, int right) {
        return pref[right + 1] - pref[left];
    }

int main() {
    vector <string> words={"NumArray", "sumRange", "sumRange", "sumRange"};
    vector <int>res=NumArray(words);

    for (string x : res)
        cout<< x;

        return 0;

}