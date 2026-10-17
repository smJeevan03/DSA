// #include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

// Arrays
// q1 - Largest element
int findLargest(int arr[],int n){
    int l=arr[0];
    for(int i=1;i<n;i++){
        if (arr[i]>l){
            l=arr[i];
        }
    }
    return l;
}

// Second largest element
int findSecondLargest(int arr[],int n){
    int l=0,sl=0;
    for(int i=0;i<n;i++){
        if (arr[i]>l){
            sl=l;
            l=arr[i];
        }
    }
    return sl;
}

// better solution
int findSecondLargest_better(int arr[],int n){
    if (n<2) return -1;
    int l=INT_MIN,sl=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>l){
            sl=l;
            l=arr[i];
        }
        else if(arr[i]>sl && arr[i]!=l){
            sl=arr[i];
        }
    }
    return (sl==INT_MIN?-1:sl);
}
// bcoz the prev version only updates when a new largest is found, But second largest can also change independently


// Check sorted array
bool isSorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}

// check sorted stl
// is_sorted(arr,arr+n)?"Yes":"No"; works in O(n) T.C

// Reverse array
void revArray(int arr[],int n){
    int l=0,r=n-1;
    while(l<r){
        swap(arr[l],arr[r]);
        l++;r--;
    }
}

// using stl - reverse(arr, arr + n) -> internally uses 2 poiters 


// Left rotate by k
void leftRotate(int arr[],int n,int k){
    k%=n;
    reverse(arr+k,arr+n);
    reverse(arr,arr+k);
    reverse(arr,arr+n);
}

// right rotate by k
void rightRotate(int arr[],int n,int k){
    k%=n;
    reverse(arr,arr+n);
    reverse(arr+k,arr+n);
    reverse(arr,arr+k);
}

// Move zeros to end
void moveZeroes(int arr[],int n){
    int z=0;
    for(int i=0;i<n;i++){
        if (arr[i]!=0){
            swap(arr[i],arr[z]);
            z++;
        }
    }
}

//Count frequency
// bruteforce
void countFreq_bruteforce(vector<int> arr){
    int n=arr.size();
    vector<bool> vis(n,false);
    for(int i=0;i<n;i++){
        if (vis[i]) continue;
        int c=0;
        for(int j=0;j<n;j++){
            if (arr[i]==arr[j]){
                c++;
                vis[j]=true;
            }
        }
        cout<<arr[i]<<" -> "<<c<<endl;
    }
}

void countFreq_sorting(vector<int>& arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int c=1;
    for(int i=1;i<n;i++){
        if (arr[i]==arr[i-1]){
            c++;
            
        }
        else{
            cout<<arr[i-1]<<" -> "<<c<<endl;
            c=1;
        }
    }
    cout<<arr.back()<<" -> "<<c<<endl;
}

void countFreq_unorderedMap(vector<int>& arr){
    int n=arr.size();
    unordered_map<int,int> map;
    for(int a:arr){
        map[a]++;
    }
    for(auto& a:map){
        cout<<a.first<<" -> "<<a.second<<endl;
    }
}

// Remove duplicates from sorted array
void removeDup(vector<int> arr){
    int n=arr.size();
    if (n==0) return;
    vector<int> ans;
    ans.push_back(arr[0]);
    for(int i=1;i<n;i++){
        if (arr[i]!=arr[i-1]){
            ans.push_back(arr[i]);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

// using 2 pointers
int removeDup_2poiter(vector<int> arr){
    int n=arr.size();
    int k=1;
    for(int i=1;i<n;i++){
        if (arr[i]!=arr[i-1]){
            arr[k]=arr[i];
            k++;
        }
    }
    return k;
}

vector<int> twoSumOptimized(vector<int>& nums, int target){
    unordered_map<int,int> map;
    for(int i=0;i<nums.size();i++){
        int comp=target-nums[i];
        if (map.count(comp)){
            return {map[comp],i};
        }
        map[nums[i]]=i;
    }
    return {-1,-1};
}


// Valid Palindrome
// - converting all the upper to lower case chrs 
// - remove all the chrs except alphanumeric chrs

bool isPalindrome(string& s){
    int n=s.size();
    if (n==0) return false;
    if (n==1) return true;
    // convert the given string to valid Palindrome
    string p="";
    for(char ch:s){
        if (isalnum(ch)){
            p+=tolower(ch);
        }
    }
    
    int l=0, r=p.size()-1;
    while(l<=r){
        if (p[l]!=p[r]){
            return false;
        }
        l++;r--;
    }
    return true;
}

bool isPalindrome_opt(string& s){
    int n=s.size();
    if (n==0) return false;
    if (n==1) return true;
    int l=0, r=n-1;
    while(l<r){
        while(l<r && !isalnum(s[l])) l++;
        while(l<r && !isalnum(s[r])) r--;
        if (tolower(s[l])!=tolower(s[r])){
            return false;
        }
        l++;r--;
    }
    return true;
}



int main() {
    vector<int> arr = {1,2,2,3,3,3,3,3,4,5,5,5,5};
    removeDup(arr);
}
