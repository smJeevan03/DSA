#include "includes.h"

// 209. Minimum Size Subarray Sum

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int best=INT_MAX,sum=0,l=0;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            while(sum>=target){ // untill the window is valid
                best = min(best,r-l+1);
                sum-=nums[l++];
            }
        }
        return (best==INT_MAX)?0:best;
    }
};

/*

keep adding the nums[i];

and keep updating(or removing) the value untill the window is valid


*/