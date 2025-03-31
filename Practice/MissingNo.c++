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
    

    return -1;
}

int main(){
    vector<int> b= {9,6,4,2,3,5,7,0,1};
  cout<<"Missing : "<<  MissingNo(b);
    return 0;
}