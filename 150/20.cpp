#include "includes.h"

// 11. Container With Most Water


class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n=nums.size();
        int mx=INT_MIN;
        int l=0,r=n-1;
        while(l<r){
            int ht=min(nums[l],nums[r]);
            int wd=r-l;
            mx=max(mx,ht*wd);
            if (nums[l]<nums[r]) l++;
            else r--;
        }
        return mx;
    }
};