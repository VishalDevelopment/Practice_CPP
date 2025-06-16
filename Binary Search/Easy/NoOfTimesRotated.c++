#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int noOfTimesRotated(vector<int> arr) {
//     int rotation=0 ;
//     int low = 0; int high = arr.size()-1;
//     while (low<=high)
//     {
//         rotation++;
//         if(arr[low]>arr[low+1]) break;
//         low++;
//     }
//     return rotation;
// }

// {4,5,6,1,2,3}
int noOfTimesRotated(vector<int> arr) {
    int smallValue=INT_MAX ; int index = -1;
    int low = 0; int high = arr.size()-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[low]<=arr[mid]){
            if(arr[low]<smallValue){
                smallValue = min(arr[low],smallValue);
                index = low;
            }
            low = mid+1;
        }
        else{
            if(arr[mid]<smallValue){
                smallValue = min(arr[mid],smallValue);
            index = mid;
        }
            high = mid-1;
        }
    }
    return index;
}

int main(){
    vector<int> arr = {4,5,6,1,2,3};
    cout<<" Roatation : "<<noOfTimesRotated(arr);
    return 0;   
}