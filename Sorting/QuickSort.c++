#include<bits/stdc++.h>
using namespace std;


int GetPivot(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (i < high && arr[i] <= pivot) i++;  // Move right if element is <= pivot
        while (j > low && arr[j] > pivot) j--;    // Move left if element is > pivot
        if (i < j) swap(arr[i], arr[j]);         // Swap elements if indices are valid
    }
    
    swap(arr[j], arr[low]);  
    return j;                // Return the index of the pivot
}

void QuickSort(vector<int>& arr, int low, int high) {
   if(low<high){    
    int pivot = GetPivot(arr,low,high);
    cout<<"pivot index : "<<pivot<<endl;
    
   }
}


int main(){
    vector<int> arr = {5,4,2,3};
   QuickSort(arr,0,arr.size()-1);
   for(auto i : arr){
    cout<<i<<" ";
   }

    return 0;
}