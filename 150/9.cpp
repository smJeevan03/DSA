#include "includes.h"

// 55. Jump Game

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int far=0;
        for(int i=0;i<n;i++){
            if(i>far) return false;
            far=max(far,i+nums[i]);
            if (far>=n-1) return true;
        }
        return true;
    }
};


/*

'far' is the index, starts from 0
if curr index > far index , return false, cant be reached 
otherwise, update the far to i+nums[i]
if far can reach last index then returnn true, 



*/