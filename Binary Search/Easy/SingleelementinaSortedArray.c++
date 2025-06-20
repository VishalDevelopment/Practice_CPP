#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int UpperBound(vector<int>&arr,int target){

//     int low = 0 , high = arr.size()-1;
//     int index = -1;
//     while(low<=high){
//         int mid = (low+high)/2;

//         if(arr[mid]<=target){
//             index = mid;
//             low = mid+1;
//         }
//         else{
//             high = mid -1;
//         }
//     }

//     return index ;
// }
// int lowerBound(vector<int>&arr, int target){
//     int low = 0 , high = arr.size()-1;
//     int index = -1;
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(arr[mid]>=target){
//             index = mid;
//             high = mid -1;
//         }
//         else{
//             low = mid+1;
//         }
//     }
//     return index;
// }

// int findSingleOccurence(vector<int> &arr ){

  

//     for(int i = 0; i<arr.size(); i++){
//         if(i==arr.size()-1){
//             if(arr[i]== arr[i+1]) continue;
//         }
//          int trigger = lowerBound(arr,arr[i]) - UpperBound(arr,arr[i]);
//         if(trigger == 0){
//             return arr[i];
//         }
//     }

//     return -1;
// }


int findSingleOccurence(vector<int> &arr){
    if(arr.size()==1) return arr[0];
    if(arr[0]!=arr[1]) return arr[0];
    if(arr[arr.size()-1]!=arr[arr.size()-2]) return arr[arr.size()-1];
    
    int low = 1 , high = arr.size()-2;
    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]!=arr[mid-1]&&arr[mid]!=arr[mid+1]){
            return arr[mid];
        }
        if ((mid % 2 == 0 && arr[mid] == arr[mid + 1]) || (mid % 2 == 1 && arr[mid] == arr[mid - 1])) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    //              = {  1,2,3,4,5,6,7,8,9  };
    vector<int> arr = {1,1,2,3,3,4,4,8,8};
    // cout<<lowerBound(arr,3)<<" "<<UpperBound(arr,3);
    cout<<findSingleOccurence(arr);
    return 0;
}