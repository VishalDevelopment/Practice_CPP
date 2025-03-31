#include<bits/stdc++.h>
using namespace std;

// bool isSorted(vector<int> arr , int low ,int high ){
//     if(low>=high) return true;
//     if(arr[low]>arr[low+1]) return false;
//     for(int i = low ; i<high; i++){

//     }
//   return  isSorted(arr,low+1,high);
// }
bool isSorted(vector<int> arr , int low ,int high ){
    // if(arr[low]>arr[low+1]) return false;
    for(int i = low ; i<high; i++){
      
      
    }
  return  isSorted(arr,low+1,high);
}
int main(){
    vector<int> vec = { 10,20,10};
    cout<<"sorted : "<<isSorted(vec,0,vec.size()-1);
    return 0;
}