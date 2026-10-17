#include "includes.h"

// 135. Candy

class Solution {
public:
    int twoPass(vector<int>& nums) { //TC - O(n), SC - O(n)
        int n=nums.size();
        vector<int> can(n,1);
        //left to right
        for(int i=1;i<n;i++){
            if (nums[i]>nums[i-1]){
                can[i]=can[i-1]+1;
            }
        }
        // right to left
        for(int i=n-2;i>=0;i--){
            if (nums[i]>nums[i+1]){
                can[i]=max(can[i],can[i+1]+1);
            }
        }
        return accumulate(can.begin(),can.end(),0);
    }

    int candy(vector<int>& nums) {
        int n=nums.size();
        int tot=n; // start with 1 each candy
        int i=1;
        while(i<n){
            // flat base - continue
            if (nums[i]==nums[i-1]){
                i++;
                continue;
            }
            // increasing slope - add 1,2,3,...
            int up=0;
            while(i<n && nums[i]>nums[i-1]){
                up++;
                tot+=up;
                i++;
            }

            // decreasing slope - add 1,2,3,...
            int down=0;
            while(i<n && nums[i]<nums[i-1]){
                down++;
                tot+=down;
                i++;
            }
            // tricky part - as we have counted twice - once while up, once while down, so we take min of these and subtract 
            tot-=min(up,down);
        }
        return tot;
    }
};


/*
revise this solution 
*/