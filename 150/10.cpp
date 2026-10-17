#include "includes.h"


// 45. Jump Game II



class Solution {
public:
    int jump(vector<int>& nums) {
        int curr=0;
        int far=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            far = max(far,i+nums[i]); // how far can u jump from the current index
            if (i==curr){ // i have consumed all the jump steps of 'far'
                j++;
                curr=far;
                if (curr>=nums.size()-1) break;
            }
        }
        return j;
    }
};