#include <bits/stdc++.h>
using namespace std;
// BruteForce 
// T.C = o(n^3) * o(log m) == m is triplet 
// S.C = o(log m) == m iw triplet
// void three_Sum(vector<int> arr){
//     set<vector<int>> st;

//     for(int i = 0 ; i<arr.size();i++){
//         for(int j = i+1; j<arr.size(); j++){
//             for(int k = j+1; k<arr.size(); k++){
//                 vector<int> temp;
//                 temp.emplace_back(arr[i]);
//                 temp.emplace_back(arr[j]);
//                 temp.emplace_back(arr[k]);
//                 if(arr[i]+arr[j]+arr[k]==0){
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 }
//             }
//         }
//     }

//     vector<vector<int>> result (st.begin(),st.end());

//     for(int i = 0 ; i < result.size(); i++) {
//         for(int j = 0; j < result[i].size(); j++) {
//             cout << result[i][j] << ' ';
//         }
//         cout << '\n';
//     }

// }

// Better 
// T.C - O(n^2*logm)
// S.C - O(2*m + n)
// void three_Sum(vector<int> arr){
//     set<vector<int>> st;
//     map<int, int > mpp;
//     for(int i = 0 ; i<arr.size(); i++){
//         mpp[arr[i]] = i;
//     }
//    for(int i = 0 ; i<arr.size(); i++){
//     for(int j = i+1; j<arr.size(); j++){
//         int value = -(arr[i]+arr[j]);
//         if(mpp.find(value)!=mpp.end()){
//             vector<int> temp ;
//             temp.emplace_back(arr[i]);
//             temp.emplace_back(arr[j]);
//             temp.emplace_back(value);
//             sort(temp.begin(),temp.end());
//             st.insert(temp);
//         }
//     }
//    }

//   for(auto i : st){
//     for(auto num : i){
//         cout<<num<<" ";
//     }
//     cout<<endl;
//   }
// }

// T.c = O(n^2*log m)
// S.c = o(log m )
void three_Sum(vector<int> arr){
    set<vector<int>> st;
    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size() - 2; i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        int j = i + 1;
        int k = arr.size() - 1;
        while(j < k){
            int sum = arr[i] + arr[j] + arr[k];
            if(sum > 0){
                k--;
            }
            else if(sum < 0){
                j++;
            }
            else {
                vector<int> vec = {arr[i], arr[j], arr[k]};
                st.insert(vec);
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1]) j++;
                while(j<k && arr[k]==arr[k+1]) k--;
            }
        }
    }

    for(auto triplet : st){
        for(auto num : triplet){
            cout << num << " ";
        }
        cout << endl;
    }
}
int main(){
    vector<int> nums = {1, -1, 0};
 three_Sum(nums);

    return 0;
}