#include <bits/stdc++.h>
using namespace std;

// Bruteforce Sol . 
// vector<int> Array_Leader(vector<int> &arr){
//     vector<int> v;
//     int n = arr.size();
//     for(int i = 0; i<n; i++){
//         int count = 0;
//         for(int j = n-1; j>i; j--){
//             if(arr[j]>arr[i]){
//                 count++;
//                 break;
//             }
//         }
//         if(count == 0){
//             v.emplace_back(arr[i]);
//         }
//     }
//     return v;
// }

//Optimal Sol.
vector<int> Array_Leader(vector<int> arr)
{
    vector<int> vec;
    int n = arr.size();
    int value = -1;
    for(int i =n-1;i>=0; i--){
        if(value<=arr[i]){
            value = arr[i];
            vec.emplace_back(arr[i]);
        }
    }
    sort(vec.begin(),vec.end(),greater<>());
        return vec;
}

int main()
{
    vector<int> arr = {61 ,61, 17  };
    vector<int> result = Array_Leader(arr);
    for (auto i : result)
    {
        cout << i << " ";
    }
    return 0;
}