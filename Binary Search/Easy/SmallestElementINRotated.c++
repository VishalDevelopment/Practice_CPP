#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int smallestElement(vector<int>&arr){
    int low = 0 , high = arr.size()-1;
    int n = INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[low]<=arr[mid]){
            n = min(arr[mid],n);
            low = mid+1;
        }
        else{
            n = min(arr[mid],n);
            high = mid-1;
        }
    }
    return n;
}


int main(){
    vector<int> arr = {4,5,6,1,2};
    cout<<smallestElement(arr);
    return 0;
}