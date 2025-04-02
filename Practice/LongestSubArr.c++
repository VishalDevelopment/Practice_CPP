#include<bits/stdc++.h>
using namespace std;
// BrutForce - T.C - O(N^2) & S.C - O(1)
// int LongestSubArr(vector<int> &arr, int k) {
//   int count = 0; 
//   for (int i = 0; i < arr.size(); i++) {
//       int sum = 0;
//       int index = 0; 

//       for (int j = i; j < arr.size(); j++) {
//           sum += arr[j];
//           index++; 

//           if (sum == k) {
//               if(count<index){
//                 count = index;
//               } 
//           }
//       }
//   }
//   return count;
// }

// Better Sol.
// int LongestSubArr(vector<int> &a, int k) {
//     map<int,int> mpp;
//    int sum = 0;
//    int maxlen = 0;
//    for(int i =0; i<a.size(); i++){
//     sum+=a[i];
//     if(sum==k){
//         maxlen =i+1;
//     }
//     int rem = sum-k;
//     if(mpp.find(rem)!=mpp.end()){
//         int len = i-a[sum-k];
//         maxlen = len;
//     }
//     if(mpp.find(sum)==mpp.end()){
//         mpp[sum]=i;
//     }
//    }

//   return maxlen;
// }

//Optimal Approach
int LongestSubArr(vector<int> arr,int k ){
    int maxlen=0;
    int sum =0;
    int j=0;
    for(int i =0; i<arr.size(); i++){
        sum+=arr[i];
        while (sum > k) {  
            sum -= arr[j];
            j++;
        }

        if (sum == k) {  
            maxlen = max(maxlen, i - j + 1);
        }
    }
  return maxlen;
}

int main(){
 vector<int> vec = {1,0,0,0,2};
 cout<<"No : "<<LongestSubArr(vec,2);

    return 0;
}