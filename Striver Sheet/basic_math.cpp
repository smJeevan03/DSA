#include<iostream>
#include<cmath>
#include<climits>
#include<algorithm>
#include<string>
using namespace std;

//basic math
// Count Digits in a Number
// Given an integer N, return the number of digits in N.
int countDigits(int n){
    int c=0;
    while(n>0){
        n/=10;
        c++;
    }
    return c;
}
int countDigits_optz(int n){
    return (int)(log10(n)+1);
}

// ---------------------------------------------------------------------------------------------------------

//reverse digits in a  number
// bruteforce
int reverseDigits_usingString(int n){
    string s=to_string(n);
    reverse(s.begin(),s.end());
    int ans=stoi(s);
    return ans;
}
// approach 2 
int reverseDigits2(int n){
    int ans=0;
    while(n!=0){
        ans=(ans*10)+n%10;
        n/=10;
    }
    return ans;
}
// approach 2 optimization
int reverseDigits2_opt(int n){
    int ans=0;
    while(n!=0){
        if (ans>INT_MAX/10 || ans<INT_MIN/10){
            return 0;
        }
        ans=(ans*10)+n%10;
        n/=10;
    }
    return ans;
}

// ---------------------------------------------------------------------------------------------------------

//palindromic number check

// bruteforce 
// idea - convert the num to string and compare the orig. to rev. string
bool isPalindrome_bruteForce(int n){
    string s=to_string(n);
    string rev=s;
    reverse(rev.begin(),rev.end());
    return s==rev;
}
// key observations 
// 1. Negative Numbers Can Never Be Palindrome
// 2. Numbers Ending With 0
// 3. We Can Reverse Digits Mathematically
// 4. We Do NOT Need Full Reverse

// improved solution
bool isPalindrome_improvedSoluion(int n){
    int ori=n;
    long long rev=0;
    // Palindrome num cant be -ve
    if (n<0) return false;
    while(n>0){
        rev=(rev*10)+n%10;
        n/=10;
    }
    return ori==rev;
}

// optimized solution;
bool isPalindrome_optSoluion(int n){
    // Palindrome num cant be -ve
    if (n<0) return false;
    
    // numbers ending with 0 cant be Palindrome and except 0;
    if (n%10==0 && n!=0) return false;
    

    int rev=0;
    while(n>rev){
        rev=(rev*10)+n%10;
        n/=10;
    }
    // for even digits check n==rev;
    // for odd digits check n== rev/10 (excluding the middle digit)
    return (n==rev) || (n==rev/10);
}


// ---------------------------------------------------------------------------------------------------------


// gcd
// bruteforce approach - if a number divides both the numbers its a common divisor
int gcd_bruteForce(int a,int b){
    int ans=1;
    for(int i=1;i<=min(a,b);i++){
        if (a%i==0 && b%i==0){
            ans=i;
        }
    }
    return ans;
}

int gcd_opt(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}


// ---------------------------------------------------------------------------------------------------------


// Check if the Number is Armstrong
// bruteforce method
bool isArmstrong_bruteForce(int n){
    int ori=n;
    int temp=n;
    int digits=0;
    while(temp>0){
        digits++;
        temp/=10;
    }
    int sum=0;
    while(n>0){
        int d=n%10;
        int num=1;
        for(int i=1;i<=digits;i++){
            num*=d;
        }
        sum+=num;
        n/=10;
    }
    return sum==ori;
}
// optimized code
bool isArmstrong_opt(int n){
    int ori=n;
    int temp=n;
    int digits=0;
    while(temp>0){
        digits++;
        temp/=10;
    }
    int sum=0;
    while(n>0){
        int d=n%10;
        sum+=pow(d, digits);
        n/=10;
    }
    return sum==ori;
}


// ---------------------------------------------------------------------------------------------------------


// Print all Divisors

// bruteforce method
void printDivisors_bruteforce(int n){
    for(int i=1;i<=n;i++){
        if (n%i==0){
            cout<<i<<" ";
        }
    }
}

// optimized approch - if i divides n then n/i also divides n;

void printDivisors_optimized(int n){
    for(int i=1;i*i<=n;i++){
        if (n%i==0){
            cout<<i<<" ";
            if (i!=n/i){ // to avoid printing the same div twice
                cout<<n/i<<" ";
            }
        }
    }
}


// ---------------------------------------------------------------------------------------------------------

// prime numbers - number that are only divisible by 1 and the number itself 

// bruteforce method
bool primeNumbrs_bruteforce(int n){
    int c=0;
    for(int i=1;i<=n;i++){
        if (n%i==0){
            c++;
        }
    }
    return c==2;
}


//optimized approch
bool primeNumbrs_opt(int n){
    if (n<=1) return false;
    if (n==2) return true;
    if (n%2==0) return false;
    for(int i=3;i*i<=n;i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

