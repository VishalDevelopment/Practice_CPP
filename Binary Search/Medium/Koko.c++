#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int hiddenOperation(vector<int>&arr,int value){
    int sum = 0;
    for(int i = 0;i<arr.size(); i++){
        if(arr[i]%value ==0 ){
            sum+=(arr[i]/value);
        }
        else{
            sum+=(arr[i]/value)+1;
        }
    }
    return sum;
}

int kokoEatingBanana(vector<int>&arr,int h){
    int maxVal = *max_element(arr.begin(),arr.end());
    int low = 1 , high = maxVal;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        int value = hiddenOperation(arr,mid);
        if(value<=h){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }

    return ans;
}

int main(){

    vector<int> arr = {30,11,23,4,20};
    int h= 5;
    cout<<kokoEatingBanana(arr,h);
    return 0;
}