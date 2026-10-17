#include "includes.h"


// 169. Majority Element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int can=nums[0];
        int c=1;
        for(int i=1;i<nums.size();i++){
            if (nums[i]==can){
                c++;
            }
            else c--;

            if (c<0){
                can=nums[i];
                c=0;
            }
        }
        return can;
    }
};

/*
take 2 variables
candidate =nums[0] and counter=1,
from (1-n){
if (curr ele same as candi) c++;
else c--

if (c goes below 0) reset candi = nums[i] and c=0,

}
return can;

*/