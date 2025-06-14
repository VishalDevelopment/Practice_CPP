#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int LastOccurence(vector<int> arr , int target){
    int ans =-1;
    int low =0 ;
    int high = arr.size()-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            ans = mid;
            low= mid+1;
        }
        else if(arr[mid]<target){
            low = mid+1;
        }
        
        else{
            high = mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {5,7,7,8,8,10};
    cout<<LastOccurence(arr,13);

    return 0;
}