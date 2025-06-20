#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int CheckResult(int  value , int n ){
int    result = 1;
    for(int i =1; i<=n; i++){
        result*=value;
    }
    return result;
}

// int NthRoot(int n , int m ){
//     int ans = 1;

//     for(int i = 1; i<=m; i++){
//         if(CheckResult(i,n)==m){
//             ans = i;
//         } 
//         if(CheckResult(i,n)>m){
//             break;
//         }
//     }

//     return ans;
// }

int NthRoot(int n , int m ){

    int low = 1; int high = m;
    int ans =1;

    while(low<=high){
        int mid = (low+high)/2;
        ans = CheckResult(mid,n);
        if(ans==m){
            return mid;
        }
        else if(ans<m){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
return -1;
}


int main(){

cout<<NthRoot(2,16);
    return 0;
}