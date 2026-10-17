#include "includes.h"

// 80. Remove Duplicates from Sorted Array II

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if (n<=2) return n;
        int c=1,k=1;
        for(int i=1;i<nums.size();i++){
            if (nums[i]==nums[i-1]) c++;
            else c=1;

            if (c<=2) nums[k++]=nums[i];
        }
        return k;
    }
};

/*
//simple analogy

Since the array is sorted, we can just compare each element with the previous one:

If nums[i] == nums[i-1], we’re still in the same group → increase a counter.
If nums[i] != nums[i-1], we’ve started a new group → reset the counter to 1.
If the counter is <= 2, this occurrence is allowed. If it’s > 2, we skip it.

*/