// #include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


// Second Largest Element
int secondLargest(int arr[],int n){
    int sl=0, l=0;
    for(int i=0;i<n;i++){
        if (arr[i]>l){
            sl=l;
            l=arr[i];
        }
        else if (arr[i]>sl && arr[i]!=l){
            sl=arr[i];
        }
    }
    return sl;
}


// Check if the Array is Sorted II

bool isSorted(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        if (arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
// we r trying to sort the rotated array and comparing with the actual sorted array, if they both match its true
bool checks(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        vector<int> rot;
        for(int j=0;j<n;j++){
            rot.push_back(arr[(i+j)%n]);
        }
        if (isSorted(rot)){
            return true;
        }
    }
    return false;
}


/*

Note:
A sorted and rotated array has at most one "drop"(nums[i] > nums[i+1]).
If there are more than one drops, it cannot come from a sorted rotated array.
In the optimized code we are only checking the breaks, if (breaks>1) false, else true;

*/
bool checks_opt(vector<int>& arr){
    int breaks=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if (arr[i]>arr[(i+1)%n]){
            breaks++;
        }
    }
    return breaks<=1;
}


//remove duplicates from the sorted array;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    int k=1;
    for(int i=1;i<nums.size();i++){
        if (nums[i]!=nums[i-1]){
            nums[k]=nums[i];
            k++;
        }
    }
    return k;
}

//Left Rotate the Array by k places

void leftRotate(int arr[],int n,int k){
    k%=n;
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//right Rotation
void rightRotation(int arr[],int n,int k){
    k%=n;
    reverse(arr,arr+n);
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
/*
differece between right and left rotation

left rotation : 

reverse(first k)
reverse(rest)
reverse(all)


right rotation :

reverse(all)
reverse(first k)
reverse(rest)

*/

// Move Zeroes
void moveZeroes(vector<int>& nums) {
    int k=0;
    for(int i=0;i<nums.size();i++){
        if (nums[i]!=0){
            swap(nums[i],nums[k]);
            k++;
        }
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}

// Union of two sorted arrays
void unionOfSortedArrays(vector<int>& arr,vector<int>& brr){
    vector<int> ans;
    int i=0,j=0;
    while(i<arr.size() && j<brr.size()){
        if (i==0 || arr[i]==arr[i-1]){
            i++;
            continue;
        }
        else if (j==0 || brr[j]==brr[j-1]){
            j++;
            continue;
        }
        else if (arr[i]<brr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else if (brr[j]<arr[i]){
            ans.push_back(brr[j]);
            j++;
        }
    }
    while(i<arr.size()){
        if (i==0 || arr[i]!=arr[i-1]){
            ans.push_back(arr[i]);
        }
        i++;
    }
    while(j<brr.size()){
        if (j==0 || brr[j]!=brr[j-1]){
            ans.push_back(brr[j]);
        }
        j++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}



int main(){
    vector<int> arr={1,2,3,4,5};
    vector<int> brr={2,3,4,4,5};
    unionOfSortedArrays(arr,brr);
}
