// #include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


// recursion template 
/*
func(n) {
    if(base case){
        return;
    }
    main work;
    func(smaller problem);
}
*/


//bruteforce approach 
void printN_topDown(int n){
    // base condition - main exit
    if (n==0){
        return;
    }
    cout<<n<<" ";
    printN_topDown(n-1);
}
void printN_bottomUp(int n){
    // base condition - main exit
    if (n==0){
        return;
    }
    printN_bottomUp(n-1);
    cout<<n<<" ";
}

// ---------------------------------------------------------------------------------------------------------

// Sum of First N Numbers

int printSum(int n,int sum){
    if (n==0){
        return sum;
    }
    sum+=n;
    return printSum(n-1,sum);
}

// ---------------------------------------------------------------------------------------------------------

// Factorial of a given number

int fact(int n){
    if (n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}

// ---------------------------------------------------------------------------------------------------------

// Reverse an array using recursion

vector<int> reverseArray(vector<int>& arr,int l,int r){
    if (l>=r) return arr;
    swap(arr[l],arr[r]);
    return reverseArray(arr,l+1,r-1);
}

void reverseArray2(vector<int>& arr,int l,int r){
    if (l>=r) return;
    swap(arr[l],arr[r]);
    reverseArray2(arr,l+1,r-1);
}


// ---------------------------------------------------------------------------------------------------------


// Check if String is Palindrome or Not
// bruteforce
bool isPalindrome(string s){
    int n=s.size();
    int l=0, r=n-1;
    while(l<=r){
        if (s[l]!=s[r]){
            return false;
        }
        l++; r--;
    }
    return true;
}

// using recursion

bool isPalindrome_recur(string s,int l,int r){
    if (l>r){
        return true;
    }
    if (s[l]!=s[r]){
        return false;
    }
    return isPalindrome_recur(s, l+1,r-1);
}


// ---------------------------------------------------------------------------------------------------------



// Fibonacci Number using recurr

int fibb(int n){
    if (n==1) return 0;
    if (n==2 || n==3) return 1;
    return fibb(n-1)+fibb(n-2);
}


// ---------------------------------------------------------------------------------------------------------

