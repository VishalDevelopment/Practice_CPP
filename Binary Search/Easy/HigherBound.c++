#include<bits/stdc++.h>
using namespace std;

int HigherBound(vector<int> arr, int low , int high , int index , int target){
    if(low>high){
        return index ;
    }
    int mid = (low+high)/2;

    if(arr[mid]>target){
        index = mid;
        return HigherBound(arr,low,mid-1, index, target);
    }
    else{
        return HigherBound(arr,mid+1,high,index,target);
    }
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    int low  = 0, high = arr.size()-1,index = arr.size(),target = 7;
    cout<<HigherBound(arr,low,high,index,target);

    return 0;
}