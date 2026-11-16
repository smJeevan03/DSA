#include "includes.h"

// 125. Valid Palindrome


class Solution {
public:
    bool bruteforce(string s){
        string ans="";
        for(char ch:s){
            if (isalnum(ch)){
                ans+=tolower(ch);
            }
        }
        string rev=ans;
        reverse(ans.begin(),ans.end());
        return rev==ans;
    }
    bool isPalindrome(string s) {
        int l=0,r=s.size()-1;
        while(l<=r){
            while(l<r && !isalnum(s[l])) l++;
            while(l<r && !isalnum(s[r])) r--;
            if (tolower(s[l])!=tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};