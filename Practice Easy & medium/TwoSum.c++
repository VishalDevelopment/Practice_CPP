#include<bits/stdc++.h>
using namespace std;
// Brutforce Sol
// vector<int> twosum(vector<int> &arr,int target){

//     vector<int> v ;
//     for(int i = 0; i<arr.size(); i++){
//         int sum =0;
//         for(int j =0; j<arr.size(); j++){
//             sum=arr[i]+arr[j];
//             if(i==j) continue;
//             if(sum == target){
//                 v.emplace_back(i);
//                 v.emplace_back(j);
//                 break;
//             }
//             else{
//                 sum-=arr[j];
//             }
//         }
//         if(sum == target){
//             break;
//         }    
//     }

//     return v;
// }

// Better Solution
// vector<int> twosum(vector<int> &arr,int target){
//     map<int,int> mpp;
//     vector<int> result ;
//     for(int i = 0; i<arr.size(); i++){
//         mpp[arr[i]] = i;
//     }

//     for(int i =0; i<arr.size(); i++){
//         int sum = target-arr[i];
//         if (mpp.find(sum) != mpp.end() && mpp[sum] != i) {
//             result.emplace_back(i);
//             result.emplace_back(mpp[sum]);
//             break;
//         }
    
//     }
//     return result;
// }

//Optimized Sol (Most Efficent Sol but it is not return the unsorted indices instead sorted one)
vector<int> twosum(vector<int> &arr,int target){
    sort(arr.begin(),arr.end());
    int i = 0;
    int j=arr.size()-1;
    while(i<j){
        if((arr[i]+arr[j])>target){
            j--;
        }
        if((arr[i]+arr[j])==target){
            return {i,j};
        }
        if((arr[i]+arr[j])<target){
            i++;
        }
    }

    return{-1,-1};
}

int main(){

    vector<int> arr = {3,2,4};
    vector<int> result = twosum(arr,6);
    for(auto i : result){
        cout<<i<<" ";
    }
}