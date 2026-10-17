#include "includes.h"

// 189. Rotate Array

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        reverse(nums.begin(),nums.begin()+n-k);
        reverse(nums.begin()+n-k,nums.end());
        reverse(nums.begin(),nums.end());
    }
};


/*

2 methods 

reverse(nums.begin(), nums.begin() + (n - k));
reverse(nums.begin() + (n - k), nums.end());
reverse(nums.begin(), nums.end());

or

more clean version 
reverse(nums.begin(), nums.end());
reverse(nums.begin(), nums.begin() + k);
reverse(nums.begin() + k, nums.end());

*/