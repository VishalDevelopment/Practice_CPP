#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int peakElement(vector<int>&arr){
    int n = arr.size();
    if(n==0) return arr[0];
    if(arr[0]>arr[1]) return arr[0];
    if(arr[n-1]>arr[n-2]) return arr[n-1];

    int low = 1 , high = n-2;
    int element = 0;
    int index = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
            index = mid;
            // cout<<mid<<" ";
            low = mid+1;
        }
        else if(arr[mid]<arr[mid+1]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    return index;
}

// T.C - > o(n) S.C -> o(1)
// int peakElement(vector<int>&arr){
//     int index = -1; int element = INT_MIN;
//     for(int i = 0 ; i<arr.size(); i++){
//         if(element<arr[i]){
//             index = i ; 
//             element  = arr[i];
//         }
//     }
//     return index;
// }
int main(){
    vector<int> arr = { 1,2,3,1};
    cout<<peakElement(arr);

}