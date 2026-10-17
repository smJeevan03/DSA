#include "includes.h"

// 274. H-Index

class Solution {
public:
    int hIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> b(n+1,0);
        for(int c:nums){
            b[min(c,n)]++; // if c>n it is counted as n
        }
        int p=0;
        for(int h=n;h>=0;h--){
            p+=b[h];
            if(p>=h){
                return h;
            }
        }
        return 0;
    }
};


/*

main check is We want to find the biggest h where at least h papers have ≥ h citations.

The h-index can never be bigger than the total number of papers n. papers with more than n cites will be counted as n 

Now scan h from high to low (from n down to 0).

Keep a running total papers = number of papers with at least h citations.

At each h:

    Add bucket[h] to papers.

    Check: is papers >= h?

    If yes → that's our h-index.

revisit this question again




*/