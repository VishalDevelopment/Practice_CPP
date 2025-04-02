#include<bits/stdc++.h>
using namespace std;

//Better Sol.
// void MissingNo(vector<int> &arr){
//     int size = arr.size()+1;
//     vector<int> temp(size,0);

//     for(auto i : arr){
//         temp[i] +=1;
//     }
//     for(int i=0; i<size; i++){
//        if(temp[i]==0){
//         cout<<i;
//         break;
//        }
//     }
    
// }

//BrutForce Solution
// int MissingNo(vector<int> &arr) {
//     for (int i = 0; i <= arr.size(); i++) {  
//         bool found = false;
        
//         for (int j = 0; j < arr.size(); j++) {
//             if (arr[j] == i) {
//                 found = true;
//                 break;
//             }
//         }

       
//         if (!found) return i;
//     }
//     return -1; 
// }

// Optimal Sol
int MissingNo(vector<int> &arr) {
  int n = arr.size();  
  int expectedSum = n * (n + 1) / 2; 
  int actualSum = 0;

  for (int i = 0; i < n; i++) {
      actualSum += arr[i];  
  }

  return expectedSum - actualSum;  
}


int main(){
    vector<int> b= {0,1,3};
  cout<<"Missing : "<<  MissingNo(b);
    return 0;
}