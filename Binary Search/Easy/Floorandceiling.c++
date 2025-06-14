#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int floor(vector<int>&arr , int target){
    int low = 0; 
    int high = arr.size()-1;
    int ans = arr.size();
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<=target){
            ans = arr[mid];
            low = mid+1;
        } 
        else{
            high = mid-1;
        }
    }
    return ans;
}

int ceiling(vector<int>&arr , int target){
    int low = 0; 
    int high = arr.size()-1;
    int ans = arr.size();
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=target){
            ans = arr[mid];
                        high = mid-1;
        } 
        else{
                        low = mid+1;

        }
    }
    return ans;
}

pair<int,int> floor_celling(vector<int>arr,int target){
    pair<int,int> value={0,0};

  value.first = floor(arr,target);
  value.second = ceiling(arr,target);

  return value;
}
int main(){
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    cout<<floor_celling(arr,8).first<<" "<<floor_celling(arr,8).second;

    return 0;
}