#include<bits/stdc++.h>
using namespace std;


// void LongestSubSumZero(vector<int> arr){
//     int count = 0; 
//     for(int i = 0 ; i<arr.size(); i++){
        
//         for(int j = i+1; j<arr.size(); j++){
//             int counter = 0;
//         int sum = 0;
//             for(int k = i; k<=j; k++){
//                 sum+=arr[k];
//                  counter++;
//                  if(sum == 0){
//                      count = max(counter,count);
//                  }
//             }
            
//         }
//     }

//     cout<<"Max Len : "<<count ;
// }

// void LongestSubSumZero(vector<int> arr){
//     int count = 0; 

//     for(int i = 0 ; i<arr.size(); i++){
//         int counter = 1;
//         int sum = arr[i];
//         for(int j = i+1; j<arr.size(); j++){
//             sum+=arr[j];
//            counter = counter+1;
//             if(sum == 0){
//                 count = max(counter,count);
//             }
//         }
//     }

//     cout<<"Max Len : "<<count ;
// }


void LongestSubSumZero(vector<int> arr){
    unordered_map <int,int> mpp;
    int sum = 0 ; int count = 0;
    for(int i = 0; i<arr.size(); i++){
        sum+=arr[i];
        if(sum == 0){
            count=i+1;
        }
        else if(mpp.find(sum)!=mpp.end()){
            int len = i-mpp[sum];
            count = max(len,count);
        }
        else{
            mpp[sum] = i;
            }
    }
    cout<<"Max Len : "<<count;
}



int main(){

    vector<int> arr = {1, 2, -3, 3, -1, -2};
    LongestSubSumZero( arr);

    return 0;
}