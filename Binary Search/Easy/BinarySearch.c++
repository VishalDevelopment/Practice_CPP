#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int> arr,int low ,int high,int target ){

    if(low>high) return -1;
    int mid = (low+high)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]>target){
 return       BinarySearch(arr,low,mid-1,target);
    }
    else{
     return BinarySearch(arr,mid+1,high,target);   
    }

}
int main(){
    vector<int> vec = {10,20,30,40,50};
    int low = 0 , high = vec.size()-1;
    cout<<BinarySearch(vec,low,high,40);
}