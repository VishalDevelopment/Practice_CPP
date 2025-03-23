#include<bits/stdc++.h>
using namespace std;


void insertionSort(vector<int> &arr){

    for(int i =0 ; i<arr.size(); i++){
        int j=i;//0,1
        while (j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
        
    }
}

int main(){
     vector<int> arr ={13,46,24,52,20,9};
     insertionSort(arr);

    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}