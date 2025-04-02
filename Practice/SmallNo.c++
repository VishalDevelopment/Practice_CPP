#include<bits/stdc++.h>
using namespace std;
//Better Solution 
int singleNumber(vector<int>& arr) {
   int max = 0;
   for(int i = 0; i<arr.size(); i++){
    if(max<arr[i]){
        max= arr[i];
    }
   }
   vector<int> hash(max,0);
   for(int i = 0;i<arr.size(); i++){
    hash[arr[i]]+=1;
   }

   for (int i = 1; i < hash.size(); i++)
   {
    if(hash[i]==1){
        return i;
    }
   }
   return -1;
}

//BrutForce Approach
// int singleNumber(vector<int>& arr) {
//    for(int i =0; i<arr.size(); i++){
//     int count =0;
//     for(int j=0; j<arr.size(); j++){
//         if(arr[i]==arr[j]){
//             count+=1;
//         }
//     }
//     if(count==1){
//         return arr[i];
//     }
//    }

//    return -1;
// }
int main(){
vector<int> v = {1,1,2,2,3,3,3,4,5,5};
cout<<"VAlue : "<<singleNumber(v);
}