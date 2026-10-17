#include "includes.h"

// 122. Best Time to Buy and Sell Stock II

class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int p=0;
        for(int i=1;i<nums.size();i++){
            if (nums[i]>nums[i-1]){
                p+=nums[i]-nums[i-1];
            }
        }
        return p;
    }
};

/*

if u find today price > yesturday price, add to profit and return 

*/