#include<bits/stdc++.h>
using namespace std;

// Brut Force Solution
// void Zerotoend(vector<int> &arr){
//     vector<int> temp;
//    for(int i =0; i<arr.size(); i++){
//        if(arr[i]!=0){
//            temp.emplace_back(arr[i]);
//        }
//    }
  
//    for(int i =0;i<temp.size();i++){
//     arr[i]=temp[i];
//    }

//    for(int i = temp.size(); i<arr.size(); i++){
//     arr[i] = 0;
//    }
   
// }

// Optimal Solution
void Zerotoend(vector<int>& arr) {
    int j = 0;  // Points to the position to place the next non-zero element

    // Move all non-zero elements to the front
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){
    Zerotoend(vec);

    for(auto i:vec){
        cout<<i<<" ";
    }
    return 0;
}