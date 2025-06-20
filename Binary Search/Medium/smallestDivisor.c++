#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// T.c -> o(n^2) S.c ->o(1)
// int smallestDivisor(vector<int> arr,int threesold){
//     int ans = -1;
//         int maxVal = *max_element(arr.begin(), arr.end());

//     for(int i = 1; i<=maxVal; i++){
//         int sum = 0;
//         for(int j = 0 ; j<arr.size(); j++){
//             if(arr[j]%i==0){
//                 sum+=(arr[j]/i);
//             }
//             else{
//                 sum+=(arr[j]/i)+1;
//             }
//         }
//         if(sum<=threesold){
// return i;
//         }
//     }   
//     return ans;
// }

int hiddenOperation(vector<int> arr, int value) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % value == 0) {
            sum += arr[i] / value;
        } else {
            sum += (arr[i] / value) + 1;
        }
    }
    return sum;
}


// T.c -> o(n *log m) s.c - > o(1) 
int smallestDivisor(vector<int> arr, int threshold) {
    int maxValue = *max_element(arr.begin(), arr.end());
    int low = 1, high = maxValue;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int sum = hiddenOperation(arr, mid);  

        if (sum <= threshold) {
            ans = mid;            
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}


int main(){
    vector<int> arr = {44,22,33,11,1};
    cout<<smallestDivisor(arr,5);

}