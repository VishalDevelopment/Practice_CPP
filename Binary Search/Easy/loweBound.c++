#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int low , int high ,int index, int target){
    if(low>high) return index;
    int mid = (low+high)/2;
    if(arr[mid]>=target){
        index = mid;
        return  lowerBound(arr,low,mid-1,index,target);
    }
    else{
        return  lowerBound(arr,mid+1,high,index,target);

    }
}

int main(){
 vector<int> arr = {1,2,3,4,6};

 int low = 0 , high = arr.size()-1,index = arr.size();
cout<<lowerBound(arr,low,high,index,5);
    return 0;
}