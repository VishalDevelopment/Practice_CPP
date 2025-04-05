#include<bits/stdc++.h>
using namespace std;
// Bruteforce Sol.
// int MajorityElement(vector<int> &arr,int n){
//     int value = 0;
//     for(int i =0; i<arr.size(); i++){
//         int counter = 0;
//         for(int j =0; j<arr.size(); j++){
//             if(arr[i]==arr[j]){
//                 counter++;
//             }
//         }
//         if(counter>=(n/2)){
//             value = arr[i];
//         }
//     }
//     return value;
// }

// Better Sol.

// int MajorityElement(vector<int> &arr,int n){
// //    vector<int> hash(4,0);
// map<int,int> hash;
//    for(int i = 0; i<arr.size(); i++){
//     hash[arr[i]] +=1;
//    }
//    int value =0;
//    for (auto it : hash) {
//     if (it.second > n / 2) {
//         value = it.first;
//     }
// }
//    return value;
// }

// Optimal (moor's Voting Algorithm)
int MajorityElement(vector<int>arr, int n){
    int element = 0; int count = 0;
for(int i = 0; i<n; i++){
    if(count==0){
        element = arr[i];

    }
    if(element==arr[i]){
        count++;
    }
    else{
        count--;
    }
}
return element;
}
int main(){
    vector<int> arr = {4,3,3};
    cout<<" Value : "<<MajorityElement(arr,arr.size());
}