#include "includes.h"


// 167. Two Sum II - Input Array Is Sorted


class Solution {
public:
    vector<int> bruteforce(vector<int>& nums, int target) {
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i+1,j+1};
                }
            }
        }
        return {-1,-1};
    }
    vector<int> binarySearchAppoach(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            int l=i+1,r=nums.size()-1;
            while(l<=r){
                int mid = l+(r-l)/2;
                int sum=nums[i]+nums[mid];
                if (sum==target){
                    return {i+1,mid+1};
                }
                else if (sum<target){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
        }
        return {-1,-1};
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        // using 2 pointers 
        int l=0,r=nums.size()-1;
        while(l<r){
            int sum=nums[l]+nums[r];
            if (sum==target){
                return {l+1,r+1};
            }
            else if (sum<target) l++;
            else r--;
        }
        return {-1,-1};
    }
};