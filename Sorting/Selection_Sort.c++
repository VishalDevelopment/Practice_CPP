#include <bits/stdc++.h>
using namespace std;


vector<int> SelectionSort(vector<int> &arr){

    int size = arr.size();
    int i=0;
    for(int i = 0 ; i<size; i++){
       int mini = i;
        for(int j =i+1;j<size; j++){
            if(arr[mini]>arr[j]){
              mini = j;
            }
        }
        swap(arr[i],arr[mini]);
    }
    

return arr;
}

void selectionSort(vector<int> &arr) {
    for(int i =0 ; i<arr.size(); i++){
        int mini = i;
        for(int j = i+1; j<arr.size(); j++){
            if(arr[mini]>arr[j]){
                mini = j;
            }
        }
        swap(arr[mini],arr[i]);
    }
    
    for(int i =0 ; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr ={4,3,2,5,1};
    // vector<int> v = SelectionSort(arr);
    // for(auto i : v){
    //     cout<<i<<" ";
    // }
    selectionSort(arr);
    return 0;
}