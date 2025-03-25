#include<bits/stdc++.h>
using namespace std;


void BubbleSort(vector<int> &arr, int low ,int high){
    if(high==0) return ;
    if(arr[low]>arr[low+1]) {
        swap(arr[low],arr[low+1]);
    }
    BubbleSort(arr,low+1,high-1);    
}

int main(){
    vector<int> arr ={4,5,7,6};
    BubbleSort(arr,0,arr.size()-1);

    for(auto i: arr){
        cout<<i<<" ";
    }

    return 0;
}