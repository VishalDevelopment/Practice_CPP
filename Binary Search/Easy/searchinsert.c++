#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int search_insert(vector<int> arr, int low , int high , int target, int index){

    if(low>high){
        return index;
    }

    int mid = (low+high)/2;

    if(arr[mid]>=target){
        index = mid;
        return search_insert(arr,low,mid-1,target,index) ;
    }
    else{       
        return search_insert(arr,mid+1,high,target,index);
    }

} 

int main(){

    vector<int> arr = {1,3,5,6};
    int low = 0, high =arr.size()-1;
    int target = 5 , index = arr.size();
    cout<<search_insert(arr,low,high,target,index);
    return 0;
}