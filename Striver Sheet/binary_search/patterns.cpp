#include<iostream>
#include<vector>
using namespace std;


/*


1. standard binary search 
2. upper bound and lower bound
3. binary search on linear array
4. binary search on answers (code below) 
--------------------------------------------------------------------------------------------------
standard template for binary search on answers 

int func(vector<int>& nums,int mid,int k){
    // main driver logic
}

int mainfuction(vector<int>& arr,int k){
    for left and right - define the search space for applying binary search
    int l=..;
    int r=...
    int ans=0;
    while(l<=r){ // always l<=r for searching on answers
        int mid = l+(r-l)/2;
        if (func(nums,mid,k)){
            ans=mid; //potential answer
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}
--------------------------------------------------------------------------------------------------





*/