#include <bits/stdc++.h>
using namespace std;
// Bruteforce Sol. [Work only if no repeatation allowed ]
// int longestConsecutive(vector<int> arr)
// {
//     int n = arr.size();
//     int count = 1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {

//             if (doublecheck== arr[i] && arr[i] + 1 == arr[j])
//             {
//                 count++;
//                 break;
//             }
//         }
//     }
//     cout<<count<<" ";

//     return count;
// }

// Better Sol . [Work for all ] 
//  T.c - o(n logn) space complexity - o(n)
// int longestConsecutive(vector<int> arr){
//     map<int,int> mpp;
//     int n = arr.size();
//     int count=0;
//     int small = arr[0];
//     for(int i = 0; i<n; i++){
//         if(small>arr[i]){
//             small = arr[i];
//         }
//     }

//     for(int i = 0; i<n; i++){
//         mpp[arr[i]] = i;
//     }

//     int i = 0; 
//     while(i<=n){
//         if(mpp.find(small)!=mpp.end()){
//             count++;
//             small++;
//         }
//         else{
//             break;
//         }
//         i++;
//     }
//     cout<<count<<" ";
//     return count;
// }

int longestConsecutive(vector<int>& arr) {
    unordered_set<int> st(arr.begin(), arr.end());
    int longest = 0;

    for(auto i : st){
        if(st.find(i-1)==st.end()){
            int count = 1;
            int current= i+1;
            while(st.find(current)!=st.end()){
                count++;
                current++;
            }

            longest = max(longest, count++);

        }
    }
    cout<<longest<<" ";
    return longest ;
}

int main()
{
    vector<int> arr = {1, 2, 2, 3, 4};
    longestConsecutive(arr);
    return 0;
}