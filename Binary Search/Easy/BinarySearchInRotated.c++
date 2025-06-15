#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void BinarySearchInRotate(vector<int>&arr){
    int ans = -1;
    int low = 0,high =arr.size()-1;
    int target =0;
    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]==target){
            ans = mid;
            break;
        }
        else if(arr[low]<=arr[mid]){
            if(arr[low]<=target&&target<=arr[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(arr[mid]<=target&&target<=arr[high]){
                low=mid+1;
            }         
            else{
                high = mid-1;
            }
        }
    }

    cout<<"index : "<<ans;
}

int main(){
    vector<int> arr = {4,5,6,7,0,1,2};
    BinarySearchInRotate(arr);
    return 0;
}