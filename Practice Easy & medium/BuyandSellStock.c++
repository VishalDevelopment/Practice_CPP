#include <bits/stdc++.h>
using namespace std;

// Brutforce 
// int maxProfit(vector<int> &arr)
// {
//     if (arr.size() < 2) return 0;
//     pair<int, int> buy = {0, arr[0]};
//     pair<int, int> sell = {0, arr[0]};

//         for (int j = 0; j < arr.size(); j++)
//         {
//             if (buy.second > arr[j])
//             {
//                 buy.first = j;
//                 buy.second = arr[j];
//             }
//         }

//         int sellIndex = buy.first;
//         int maxSell = arr[buy.first];

//         for (int k = buy.first + 1; k < arr.size(); k++)
//         {
//             if (arr[k] > sell.second)
//             {
//                 sell.second= arr[k];
//                 sell.first = k;
//             }
        
//     }

//     int result = 0;
//     if (sell.second - buy.second > 0)
//     {
//         result = sell.second - buy.second;
//     }

//     return result;
// }

// Optimal 
int maxProfit(vector<int> arr){
    int mini =arr[0];
    int cost = 0;
    int profit = 0;

    for(int i=1; i<arr.size(); i++){
        cost= arr[i] - mini;
        profit = max(profit,cost);
        mini = min(mini,arr[i]);
    }

    return profit;
}

int main()
{
    vector<int> arr = {2,3,1,3,5,2};
    cout << "Profit : " << maxProfit(arr);
    return 0;
}