#include "includes.h"

// 28. Find the Index of the First Occurrence in a String




class Solution {
public:
    int usingSTL(string haystack, string needle){
        auto pos = haystack.find(needle);
        return pos==string::npos?-1:(int)pos;
    }
    int strStr(string haystack, string needle) {
        // using 2 pointers 
        int n=haystack.size(),m=needle.size();
        if (m==0) return 0;
        if (n<m) return -1;
        for(int i=0;i<=n-m;i++){
            int j=0;
            for(;j<m;j++){
                if (haystack[i+j]!=needle[j]) break;
            }
            if (j==m) return i;
        }
        return -1;
    }
};

/*

two pointers - check for every indx if frm there the needle exists then return that i index else retrn -1;


*/