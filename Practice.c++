#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void combine(vector<int>&arr,int low , int mid , int high){
    int i = low ; int j = mid+1;
    vector<int> temp;
    while(i<=mid && j<=high){
        if(arr[i]>=arr[j]){
            temp.push_back(arr[j]);
            j++;
        }
        else{
            temp.push_back(arr[i]);
            i++;
        }
    }
     while(i<=mid){
        temp.push_back(arr[i]);
        i++;
     }
     while(j<=high){
        temp.push_back(arr[j]);
        j++;
     }

     for(int index = 0 ; index<temp.size(); index++){
        arr[index+low] = temp[index];
     }

}
void mergeSort(vector<int>&arr , int low , int high){
    if(low>=high) return ;
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    combine(arr,low,mid,high);
}














void bubbleSortRecurrsive(vector<int>&arr,int high){
    if(high == 0) return ;
    for(int i = 0 ; i<high-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSortRecurrsive(arr,high-2);
}

void selectionSortRecurrsive(vector<int>&arr,int index ){
    if(index>=arr.size()-1) return;
    int mini = index;
    for(int i = index+1 ; i<arr.size(); i++){
        if(arr[mini]>arr[i]){
            mini = i;
        }
    }
    swap(arr[index],arr[mini]);
    selectionSortRecurrsive(arr,index+1);
}

int rearrangepivot(vector<int>& arr, int low, int high){
    int pivot = arr[high];
    int index = low - 1;
    for(int i = low; i < high; i++){
        if(arr[i] < pivot){ // ascending order
            index++;
            swap(arr[index], arr[i]);
        }
    }
    index++;
    swap(arr[index], arr[high]);
    return index;
}

void quicksort(vector<int>&arr,int low ,int high){
    if(low>=high) return ;
    int pivot = rearrangepivot(arr,low ,high);
    quicksort(arr,low,pivot-1);
    quicksort(arr,pivot+1,high);
}


int main(){

    vector<int> arr= {3,2,1,5};
    quicksort(arr,0 , arr.size()-1);
    for(auto it : arr){
        cout<<it<<" ";
    }
    return 0;
}