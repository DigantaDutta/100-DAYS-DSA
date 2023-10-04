#include <bits/stdc++.h>
using namespace std;

 vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>freq;
        vector<int>ans;
        for(int i = 0;i<nums1.size();i++){
            freq[nums1[i]]++;
        }
        for(int i = 0;i<nums2.size();i++){
            if (freq[nums2[i]] > 0){
                freq[nums2[i]]--; 
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
    int main()
{
	
    vector<int> nums1{ 1,2,2,1};
    vector<int> nums2{ 2,2};
    int i;
   
   vector<int> miss_ele = intersect(nums1,nums2);
 
    for (int i = 0; i < miss_ele.size(); i++)
    cout << miss_ele[i] << " ";

    return 0;
}