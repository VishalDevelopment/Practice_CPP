#include<bits/stdc++.h>
using namespace std;

//Brutforce Sol.
// int MaxSubArr(vector<int> arr){
//     int sum = 0;
//     int size = arr.size();
//     for(int i = 0; i < size; i++){
//         int helper = 0;
//         for(int j = i; j < size; j++){  // start from i, not 0
//             helper += arr[j];
//             if(helper > sum){
//                 sum = helper;
//             }
//         }
//     }
//     return sum;
// }

// Optimal Sol . (Kaden's Algorithm)
int MaxSubArr(vector<int> arr){
    int sum =0;
    int maxSum=0;
    for(int i = 0; i<arr.size(); i++){
        sum+=arr[i];
        maxSum =max(sum,maxSum);
        if(sum<0){
            sum=0;
        }
    }

    return maxSum;
}

int main(){
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout<<"Sum : "<<MaxSubArr(arr);
    return 0;
}