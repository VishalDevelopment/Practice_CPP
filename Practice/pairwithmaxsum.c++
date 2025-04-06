#include<bits/stdc++.h>
using namespace std;
// bruteforce approach
// int pairWithMaxSum(vector<int> &arr) {
//     int maxsum=0;
//     for(int i  =0;i<arr.size()-1; i++){
//         int sum=0;
//         for(int j=i; j<=i+1;j++){
//         sum+=arr[j];
//         maxsum=max(sum,maxsum);
//         }
//     }
//     return maxsum;
// }

// Optimal 
int pairWithMaxSum(vector<int> &arr) {
    int maxsum=INT_MIN;
    for(int i  =0;i<arr.size()-1; i++){
        int sum=arr[i]+arr[i+1];
        maxsum = max(sum,maxsum);
    }
    return maxsum;
}


int main(){
vector<int> arr = {4, 3, 1, 5, 6};
cout<<"MAx Sum : "<<pairWithMaxSum(arr);
}