#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach
// void rotate(vector<int> &arr, int k) {
//     vector<int> temp(k);
//     for(int i =0; i<k; i++){
//         temp[i] = arr[i];
//     }
//     int size = arr.size();
//     for(int i = k; i<size; i++){
//         arr[i-k] = arr[i];
//     }
//     int j =0;
//     for(int i = size-k; i<arr.size(); i++){
//         arr[i] = temp[j];
//         j++;
//     }
// }
//Optimal Solution
void rotate(vector<int>&arr,int k ){
    if(arr.size()<=1) return;
    k = k % arr.size();  // Handle cases where k is greater than array size
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());

}
   
   


int main(){
    vector<int> arr = {10,20,30,40,50,60,50};
    rotate(arr,1);
    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}