#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int MinDayBouquets(vector<int> &arr , int m , int n){
//     int ans = -1;
//     if(arr.size()<m*n) return -1;
//     int min = *min_element(arr.begin(),arr.end());
//     int max = *max_element(arr.begin(),arr.end());
//     for(int i = min; i<=max; i++){
//         int counter = 0;
//         int bouqet = 0;
//         for(int j = 0 ; j<arr.size(); j++){
//             if(arr[j]<=i){
//                 counter++;
//                 if(counter==n){
//                     bouqet++;
//                     counter= 0;
//                 }
//             }
//             else {
//              counter = 0;
//             }
//         }
//         if(bouqet>=m){
//             return i;
//         }
//     }
//     return -1;
// }

int hiddenOperation(vector<int> arr , int value ,int flower){
    int boquets = 0;
    int counter = 0;
    for(int i = 0 ; i<arr.size(); i++){
        if(arr[i]<=value){
            counter++;
            if(counter == flower){
                boquets++;
                counter= 0;
            }
            
        }
        else{
                counter = 0;
            }
    }
    return boquets;
}
int MinDayBouquets(vector<int> &arr , int m , int n){
    if((long long)m*n>arr.size()) return -1;
    int min = *min_element(arr.begin(),arr.end());
    int max = *max_element(arr.begin(),arr.end());
    int ans = -1;
    int low = min , high = max ;
    while(low<=high){
        int mid = (low+high)/2;
        int bouqet = hiddenOperation(arr,mid,n);

        if(bouqet>=m){
            ans = mid;
            high=mid-1;
        }
        else{
            low = mid+1;
        }

    }

    return ans;
}

int main(){
    vector<int> arr = {1,10,3,10,2};
    cout<<MinDayBouquets(arr,3,7);

    return 0;
}