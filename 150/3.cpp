#include "includes.h"

// 26. Remove Duplicates from Sorted Array


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(int i=1;i<nums.size();i++){
            if (nums[i]!=nums[k]){
                k++;
                nums[k]=nums[i]; // copy the element not swapping
            }
        }
        return k+1;
    }
};


/*
start k from 0 and indexing from 1, compare each element 
if curr ele != kth element, increment k first (as 1st ele is always unique) and then copy the curr to kth 
return k+1 as k is not a counter but a 0 based indexing, so return k+1, not k.
*/
