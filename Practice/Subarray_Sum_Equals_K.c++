#include <bits/stdc++.h>
using namespace std;
// BrutForce Sol.
// int subarrk(vector<int> &arr,int k ){
// int count = 0;
// for(int i = 0; i<arr.size(); i++){
//     int sum = 0;
//     for(int j = i ; j<arr.size(); j++){
//         sum+=arr[j];
//         if(sum==k) {
//             count+=1;
//         }
//     }
// }

// return count;

// }

// Better Sol
// int subarrk(vector<int> &arr,int k ){
//    int count = 0;
// for(int i = 0; i<arr.size(); i++){

//     for(int j = i ; j<arr.size(); j++){
//         int sum = 0;
//             for (int l = i; l < j; l++) {
//                 sum += arr[l];
//             }
//             if (sum == k) {
//                 count++;
//             }
//     }
// }

// cout<<count<<" ";
//     return count;
// }

// Optimal Sol .
int subarrk(vector<int> &arr, int k)
{
    unordered_map<int, int> mpp;
    mpp[0]=1;
    int count = 0, sum = 0;

    // for(int i = 0; i<arr.size(); i++){
    //     sum+=arr[i];
    //     int rem = sum-k;
    //     count+=mpp[rem];
    //     mpp[sum]+=1;
    // }

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     sum += arr[i];
    //     mpp[sum] = i; 
    //     int rem = sum - k;
    //     if(sum==k){
    //         count++;
    //     }
    //     if (mpp.find(rem) != mpp.end())
    //     {
    //         count = count+1;
    //     }
    // }
    // return count;

}

int main()
{
    vector<int> num = {1};
    subarrk(num, 0);

    return 0;
}