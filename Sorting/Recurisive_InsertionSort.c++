#include<bits/stdc++.h>
using namespace std;
// Study Again 
// void sort(vector<int> &arr, int low, int high) { 
  
//     while(high<=low){
//         if(arr[high]>arr[low]){
//             swap(arr[high],arr[low]);
            
//         }
//         high--;
//     }
// }

void  insertionSort(vector<int> &arr , int low , int target,int high){
    if(target>high) return;
    int key = arr[target];
    int j = target-1;
    while (j>=0 && arr[j]>key)
    {
       swap(arr[j],arr[j+1]);
        j--;
    }

    // Optimize approach 
    
    // while(j>=0 && arr[j]>key){
    //     arr[j+1] = arr[j];
    //     j--;
    // }
    // arr[j+1] = key;
    
    insertionSort(arr,low,target+1,high);
}


int main(){
    vector<int> arr ={29, -5, 42, 0, 13, 8, 99, -17, 42, 56, 3, 77, -2};
    insertionSort(arr,0,1,arr.size()-1);
    for(auto i : arr){
        cout<<i <<" ";
    }
    return 0;
}