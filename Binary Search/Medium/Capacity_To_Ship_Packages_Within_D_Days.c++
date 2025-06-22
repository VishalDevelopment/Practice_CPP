#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int maxShippingCapacityDay(vector<int>arr , int days){
//     int start = *max_element(arr.begin(),arr.end());
//     int end = accumulate(arr.begin(),arr.end(),0);
//     for(int i = start ; i<=end; i++){
//         int sum = 0;
//         int count = 1;
//         for(int j= 0; j<arr.size(); j++){

//             if(sum+arr[j]<=i){
//                 sum+=arr[j];
//             }
//             else{
//                 count++;
//                 sum=arr[j];
//             }
//         }
//         if(count == days){
//             return i;
//         }
//     }
//     return -1;
// }

int hiddenOperation(vector<int>arr,int capacity){
    int counter = 1 , sum = 0;
    for(int i = 0; i<arr.size(); i++){
        if(sum+arr[i]<=capacity){
            sum+=arr[i];
        }
        else{
            counter++;
            sum = arr[i];
        }
    }
    return counter;
}

int maxShippingCapacityDay(vector<int>arr , int days){
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    int ans = -1;
    while (low<=high)
    {
       int mid = (low+high)/2;
       int D = hiddenOperation(arr,mid);
       if(D<=days){
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
    vector<int> arr = {1,2,3,1,1};
    cout<<maxShippingCapacityDay(arr,4);

    return 0;
}