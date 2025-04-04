#include<bits/stdc++.h>
using namespace std;

// BruteForce
// void sort(vector<int> &arr){
   
//     for(int i=0; i<arr.size(); i++){
//         for(int j=i; j<arr.size(); j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }

// }

// Better Sol.
// void sort(vector<int> &arr){
//     vector<int> hash(3);
//     for(int i =0; i<arr.size(); i++){
//         hash[arr[i]]+=1;
//     }
//     arr.erase(arr.begin(),arr.end());
//     for(int i =0; i<hash.size();){
//         if(hash[i]>0){
//             arr.emplace_back(i);
//             hash[i]--;
//         }
//         if(hash[i]==0){
//             i++;
//         }
//     }
// }

// Optimal Sol.(Detuch National Flag Algorithmn)
void sort(vector<int> &arr){
    int low = 0,mid=0,high=arr.size()-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    vector<int> arr = {2,0,2,1,1,0};
    sort(arr);
    for(auto i : arr){
        cout<<i<<" ";
    }
}