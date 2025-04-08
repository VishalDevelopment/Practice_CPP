#include<bits/stdc++.h>
using namespace std;

// Better Approach 
// void arrangeBysign(vector<int>&arr){
//     vector<int> posarr;
//     vector<int> negarr;
//     for(int i =0; i<arr.size(); i++){
//         if(arr[i]>=0){
//             posarr.emplace_back(arr[i]);
//         }
//         else{
//             negarr.emplace_back(arr[i]);
//         }
//     }

//     // int posIndex = 0, negIndex = 0;
//     // int i = 0;

//     // while (posIndex < posarr.size() && negIndex < negarr.size()) {
//     //     arr[i++] = posarr[posIndex++];
//     //     arr[i++] = negarr[negIndex++];
//     // }

//     for(int i = 0; i<arr.size()/2; i++){
//         arr[i*2] = posarr[i];
//         arr[i*2+1] = negarr[i];
//     }
  
// }

// Optimal Sol.
void arrangeBysign(vector<int> &arr){

    int pos =0;
    int neg = 1;
    vector<int> narr(arr.size(),0);
   for(int i = 0; i<arr.size(); i++){
    if(arr[i]>0){
        narr[pos] = arr[i];
        pos+=2;
    }
    else{
        narr [neg] = arr[i];
        neg+=2;
    }
   }
    
   for(int i = 0; i<narr.size(); i++){
    arr[i]= narr[i];
   }

}

int main(){
   vector<int> vec = {3,1,-2,-5,2,-4};
   arrangeBysign(vec);
   for(auto i: vec){
    cout<<i<<" ";
   }
    return 0;
}