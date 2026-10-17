#include "includes.h"

// 121. Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int minPrice=nums[0];
        int mxProfit = 0;
        for(int i=1;i<nums.size();i++){
            mxProfit = max(mxProfit,nums[i]-minPrice);
            minPrice = min(minPrice,nums[i]);
        }
        return mxProfit;
    }
};

/*

think as you are selling today and record the best u can get as of today,

and keep on updating the minPrice if u have found new min


*/