#include<bits/stdc++.h>
using namespace std;




void QuickSort(vector<int>&arr,int low ,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i<j){
        if(pivot<arr[i]){
            if(pivot>arr[j]){
                swap(arr[i],arr[j]);
                j--;
                i++;
            }
            else{
                j--;
            }
        }
        else{
            if(pivot>arr[j]){
                i++;
            }
            else{
                i++;
                j--;
            }
        }
    }