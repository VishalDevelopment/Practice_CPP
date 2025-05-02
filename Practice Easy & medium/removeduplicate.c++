#include<bits/stdc++.h>
using namespace std;
// int removeDuplicates(vector<int>& arr) {
//     set<int> set ;
//     for(int i = 0; i<arr.size(); i++){
//        set.insert(arr[i]);
//     }
//     return set.size();
// }
int removeDuplicates(vector<int> &arr){
    for(int i = 2; i < arr.size()-1; ){
        if(arr[i+1] == arr[i]){
            arr.erase(arr.begin() + i + 1);
        } else {
            i++; // Move to the next element only if no deletion occurs
        }
    }
    return arr.size();
}
int main(){
    vector<int> vec = {0,0,1,1,1,2,2,3,3,4};

   int size =  removeDuplicates(vec);
      cout<<"Element : "<<size<<endl;
      for(auto i : vec){
        cout<<i <<" ";
      }
    return 0;
}