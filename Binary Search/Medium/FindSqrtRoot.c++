#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int findSqrt(int n ){
//     int ans = 1;

//     for(int i = 1; i<=n; i++){

//         if(i*i<=n){
//             ans = i;
//         }
//         else{
//             break;
//         }
//     }
//     return ans;
// }
int findSqrt(int n)
{
    int ans = 1;
    int low = 0;
    int high = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int val = mid * mid;
        if (val <= n)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
int main()
{
    cout << findSqrt(169);

    return 0;
}