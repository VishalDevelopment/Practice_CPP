#include <bits/stdc++.h>
using namespace std;

// T.c = O(n^3 * log m)
// S.c = o(2*m + n)
// void four_sum(vector<int> arr, int target){
//     set<vector<int>> st;

//     for(int i = 0 ; i<arr.size(); i++){
//         for(int j = i+1 ; j<<arr.size(); j++){
//             set<int> hashset;
//             for(int k = j+1; k<arr.size(); k++){
//                 int sum = arr[i]+arr[j]+arr[k];
//                 int value = target-sum;
//                 if(hashset.find(value)!=hashset.end()){
//                     vector<int> temp = { arr[i],arr[j],arr[k],value};
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 }
//                 hashset.insert(arr[k]);
//             }
//         }
//     }

//     for(auto i : st){
//         for(auto num : i){
//             cout<<num<<" ";
//         }
//         cout<<endl;
//     }

// }

void four_sum(vector<int> arr, int target)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    set<vector<int>> st;

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (j > i + 1 && arr[j] == arr[j - 1])
                continue;

            int k = j + 1;
            int l = n - 1;

            while (k < l)
            {
                long long sum = (long long)arr[i] + arr[j] + arr[k] + arr[l];

                if (sum < target)
                {
                    k++;
                }
                else if (sum > target)
                {
                    l--;
                }
                else
                {
                    vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                    st.insert(temp);
                    while (k < l && arr[k] == arr[k - 1])  k++;
                    while (k < l && arr[l] == arr[l + 1]) l--;
                }
            }
        }
    }

    for (const auto &quad : st)
    {
        for (int num : quad)
        {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> arr = {1, 0, -1, 0, -2, 2};
    four_sum(arr, 0);
}