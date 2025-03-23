#include<bits/stdc++.h>
using namespace std;

 void BubbleSort(vector<int> &arr){

    int size = arr.size();
    for(int i = 0; i<size; i++){
        int didSwap =0;
    for(int j = 0; j<size-i+1; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            didSwap =1;
        }
        if(didSwap==0){
            break;
        }
    }
}

}


int main(){

    vector<int> arr ={41, 9, 9, 48, 11, 2};
   BubbleSort(arr);
    for(auto i : arr){
        cout<<i<<" ";
    }
    
    return 0;
}